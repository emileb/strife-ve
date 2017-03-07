//
// Copyright(C) 2007-2014 Samuel Villarreal
// Copyright(C) 2014 Night Dive Studios, Inc.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//    OpenGL Texture
//

#include "rb_texture.h"

//
// RB_RoundPowerOfTwo
//

int RB_RoundPowerOfTwo(int x)
{
    int mask = 1;
    
    while(mask < 0x40000000)
    {
        if(x == mask || (x & (mask-1)) == x)
        {
            return mask;
        }
        
        mask <<= 1;
    }
    
    return x;
}

//
// RB_SetTexParameters
//

void RB_SetTexParameters(rbTexture_t *rbTexture)
{
    unsigned int clamp;
    unsigned int filter;

    switch(rbTexture->clampMode)
    {
    case TC_CLAMP:
        clamp = GL_CLAMP_TO_EDGE;
        break;

    case TC_CLAMP_BORDER:
        clamp = GL_CLAMP_TO_BORDER;
        break;

    case TC_REPEAT:
        clamp = GL_REPEAT;
        break;

    case TC_MIRRORED:
        clamp = GL_MIRRORED_REPEAT;
        break;

    default:
        return;
    }

    switch(rbTexture->filterMode)
    {
    case TF_LINEAR:
        filter = GL_LINEAR;
        break;

    case TF_NEAREST:
        filter = GL_NEAREST;
        break;

    default:
        return;
    }

    dglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, clamp);
    dglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, clamp);
    dglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    dglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);

    if(has_GL_EXT_texture_filter_anisotropic)
    {
        dglTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, RB_GetMaxAnisotropic());
    }
}

//
// RB_ChangeTexParameters
//

void RB_ChangeTexParameters(rbTexture_t *rbTexture, const texClampMode_t clamp, const texFilterMode_t filter)
{
    if(rbTexture->clampMode == clamp && rbTexture->filterMode == filter)
    {
        return;
    }

    rbTexture->clampMode = clamp;
    rbTexture->filterMode = filter;

    RB_SetTexParameters(rbTexture);
}

//
// RB_BindTexture
//

void RB_BindTexture(rbTexture_t *rbTexture)
{
    dtexture tid;
    dtexture currentTexture;
    int unit;

    if(!rbTexture)
    {
        return;
    }

    tid = rbTexture->texid;
    unit = rbState.currentUnit;
    currentTexture = rbState.textureUnits[unit].currentTexture;

    if(tid == currentTexture)
    {
#ifndef __MOBILE__
        return;
#endif
    }

    dglBindTexture(GL_TEXTURE_2D, tid);

    rbState.textureUnits[unit].currentTexture = tid;
    rbState.numTextureBinds++;
}

//
// RB_UnbindTexture
//

void RB_UnbindTexture(void)
{
    int unit = rbState.currentUnit;
    rbState.textureUnits[unit].currentTexture = 0;

    dglBindTexture(GL_TEXTURE_2D, 0);
}

//
// RB_DeleteTexture
//

void RB_DeleteTexture(rbTexture_t *rbTexture)
{
    if(!rbTexture || rbTexture->texid == 0)
    {
        return;
    }

    dglDeleteTextures(1, &rbTexture->texid);
    rbTexture->texid = 0;
}



#ifdef USE_GLES

static int to_pow2 (int value)
{
  int i = 1;
  while (i < value) i <<= 1;
  return i;
}

static void GL_ResampleTexture (unsigned *in, int inwidth, int inheight, unsigned *out,  int outwidth, int outheight)
{
	LOGI("GL_ResampleTexture %dx%d -> %dx%d",inwidth,inheight,outwidth,outheight);


	int		i, j;
	unsigned	*inrow, *inrow2;
	unsigned	frac, fracstep;
	unsigned	p1[2048], p2[2048];
	byte		*pix1, *pix2, *pix3, *pix4;

	fracstep = inwidth*0x10000/outwidth;

	frac = fracstep>>2;
	for (i=0 ; i<outwidth ; i++)
	{
		p1[i] = 4*(frac>>16);
		frac += fracstep;
	}
	frac = 3*(fracstep>>2);
	for (i=0 ; i<outwidth ; i++)
	{
		p2[i] = 4*(frac>>16);
		frac += fracstep;
	}

	for (i=0 ; i<outheight ; i++, out += outwidth)
	{
		inrow = in + inwidth*(int)((i+0.25)*inheight/outheight);
		inrow2 = in + inwidth*(int)((i+0.75)*inheight/outheight);
		frac = fracstep >> 1;
		for (j=0 ; j<outwidth ; j++)
		{
			pix1 = (byte *)inrow + p1[j];
			pix2 = (byte *)inrow + p2[j];
			pix3 = (byte *)inrow2 + p1[j];
			pix4 = (byte *)inrow2 + p2[j];
			((byte *)(out+j))[0] = (pix1[0] + pix2[0] + pix3[0] + pix4[0])>>2;
			((byte *)(out+j))[1] = (pix1[1] + pix2[1] + pix3[1] + pix4[1])>>2;
			((byte *)(out+j))[2] = (pix1[2] + pix2[2] + pix3[2] + pix4[2])>>2;
			((byte *)(out+j))[3] = (pix1[3] + pix2[3] + pix3[3] + pix4[3])>>2;
		}
	}
}

#endif
//
// RB_UploadTexture
//

void RB_UploadTexture(rbTexture_t *rbTexture, byte *data, texClampMode_t clamp, texFilterMode_t filter)
{
    rbTexture->clampMode = clamp;
    rbTexture->filterMode = filter;

    dglGenTextures(1, &rbTexture->texid);

    if(rbTexture->texid == 0)
    {
        // renderer is not initialized yet
        return;
    }

    dglBindTexture(GL_TEXTURE_2D, rbTexture->texid);

    if(data)
    {

#ifdef USE_GLES
        int w = rbTexture->width;
        int h = rbTexture->height;
        int rw = to_pow2( rbTexture->width );
        int rh =  to_pow2( rbTexture->height );

        //LOGI("%d   %d   %d   %d", w,h,rw,rh);
        unsigned char * scaledbuffer = data;

		if (rw == w && rh == h)
		{
		    //Nothing
		}
        else if((w != 320) && (h != 576)) //Need to resize. HACK ignore 320 size textures for the Front End as they crash
        {
           scaledbuffer=(unsigned char *)calloc(4,rw * (rh+1));

           GL_ResampleTexture((unsigned *)data,w,h,(unsigned *)scaledbuffer,rw,rh);
        }
        else //320x240 textures, FIX in fe_graphics.c
        {
            scaledbuffer=(unsigned char *)calloc(4,rw * (rh+1));

           // *((int *)0) = 1;
        }
        dglTexImage2D(
                    GL_TEXTURE_2D,
                    0,
                    (rbTexture->colorMode == TCR_RGBA) ? GL_RGBA8 : GL_RGB8,
                    rw,
                    rh,
                    0,
                    (rbTexture->colorMode == TCR_RGBA) ? GL_RGBA : GL_RGB,
                    GL_UNSIGNED_BYTE,
                    scaledbuffer);

         if( scaledbuffer != data)
         {
            free( scaledbuffer );
         }
#else
        dglTexImage2D(
            GL_TEXTURE_2D,
            0,
            (rbTexture->colorMode == TCR_RGBA) ? GL_RGBA8 : GL_RGB8,
            rbTexture->width,
            rbTexture->height,
            0,
            (rbTexture->colorMode == TCR_RGBA) ? GL_RGBA : GL_RGB,
            GL_UNSIGNED_BYTE,
            data);
#endif
    }
    
    dglTexParameteri(GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_FALSE);

    RB_SetTexParameters(rbTexture);
    dglBindTexture(GL_TEXTURE_2D, 0);
}

//
// RB_UpdateTexture
//

void RB_UpdateTexture(rbTexture_t *rbTexture, byte *data)
{
    if(!rbTexture || rbTexture->texid == 0)
    {
        return;
    }

    if(rbState.textureUnits[rbState.currentUnit].currentTexture != rbTexture->texid)
    {
        return;
    }
#ifdef USE_GLESXXXX
     int w = to_pow2( rbTexture->width );
    int h =  to_pow2( rbTexture->height );
    //LOGI("%d   %d   %d   %d", rbTexture->width,rbTexture->height,w,h);
    unsigned char * scaledbuffer = data;

    if(( rbTexture->width < w || rbTexture->height < h )) //Need to resize
    {
        scaledbuffer = (unsigned char *)calloc(4,w * (h+1));

        GL_ResampleTexture((unsigned *)data,rbTexture->width,rbTexture->height,(unsigned *)scaledbuffer,w,h);
    }

    dglTexSubImage2D(
          GL_TEXTURE_2D,
          0,
          0,
          0,
          w,
          h,
          (rbTexture->colorMode == TCR_RGBA) ? GL_RGBA : GL_RGB,
          GL_UNSIGNED_BYTE,
          scaledbuffer);

     if( scaledbuffer != data)
     {
        free( scaledbuffer );
     }
#else
    dglTexSubImage2D(
        GL_TEXTURE_2D,
        0,
        0,
        0,
        rbTexture->width,
        rbTexture->height,
        (rbTexture->colorMode == TCR_RGBA) ? GL_RGBA : GL_RGB,
        GL_UNSIGNED_BYTE,
        data);
#endif
}

//
// RB_BindFrameBuffer
//

void RB_BindFrameBuffer(rbTexture_t *rbTexture)
{
    int unit;
    dtexture currentTexture;

    if(rbTexture->texid == 0)
    {
        dglGenTextures(1, &rbTexture->texid);
    }
    
    unit = rbState.currentUnit;
    currentTexture = rbState.textureUnits[unit].currentTexture;
#ifndef __MOBILE__    
    if(rbTexture->texid != currentTexture)
#endif
    {
        dglBindTexture(GL_TEXTURE_2D, rbTexture->texid);
        rbState.textureUnits[unit].currentTexture = rbTexture->texid;
    }
    
    RB_SetReadBuffer(GL_BACK);
    
    rbTexture->origwidth   = SDL_GetVideoSurface()->w;
    rbTexture->origheight  = SDL_GetVideoSurface()->h;
#ifdef __MOBILE__
    rbTexture->origwidth = android_screen_width;
    rbTexture->origheight = android_screen_height;
#endif
    rbTexture->width       = rbTexture->origwidth;
    rbTexture->height      = rbTexture->origheight;
    
    dglCopyTexImage2D(GL_TEXTURE_2D,
                      0,
                      GL_RGBA8,
                      0,
                      0,
                      rbTexture->origwidth,
                      rbTexture->origheight,
                      0);
    RB_SetTexParameters(rbTexture);
}

//
// RB_BindDepthBuffer
//

void RB_BindDepthBuffer(rbTexture_t *rbTexture)
{
    int unit;
    dtexture currentTexture;

    if(rbTexture->texid == 0)
    {
        dglGenTextures(1, &rbTexture->texid);
    }
    
    unit = rbState.currentUnit;
    currentTexture = rbState.textureUnits[unit].currentTexture;
#ifndef __MOBILE__    
    if(rbTexture->texid != currentTexture)
#endif
    {
        dglBindTexture(GL_TEXTURE_2D, rbTexture->texid);
        rbState.textureUnits[unit].currentTexture = rbTexture->texid;
    }
    
    rbTexture->origwidth   = SDL_GetVideoSurface()->w;
    rbTexture->origheight  = SDL_GetVideoSurface()->h;
    rbTexture->width       = rbTexture->origwidth;
    rbTexture->height      = rbTexture->origheight;
    
    dglCopyTexImage2D(GL_TEXTURE_2D,
                      0,
                      GL_DEPTH_COMPONENT,
                      0,
                      0,
                      rbTexture->origwidth,
                      rbTexture->origheight,
                      0);

    RB_SetTexParameters(rbTexture);
    dglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_NONE);
}
