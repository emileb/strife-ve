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

#ifndef __DGL_H__
#define __DGL_H__

#ifdef USE_GLES

#include <SDL.h>
#include "doomtype.h"
#include <GLES/gl.h>
#include <GLES/glext.h>

#define dglViewport(x, y, width, height) glViewport(x, y, width, height)
#define dglOrthof glOrthof
#define dglMatrixMode(mode) glMatrixMode(mode)
#define dglBegin(mode) glBegin(mode)
#define dglEnd() glEnd()
#define dglEnable(cap) glEnable(cap)
#define dglDisable(cap) glDisable(cap)
#define dglLoadIdentity() glLoadIdentity()
#define dglLoadIdentity() glLoadIdentity()
#define dglLoadMatrixf(m) glLoadMatrixf(m)
#define dglClear(mask) glClear(mask)
#define dglAlphaFunc(func, ref) glAlphaFunc(func, ref)
#define dglDepthFunc(func) glDepthFunc(func)
#define dglDepthMask(flag) glDepthMask(flag)
#define dglCullFace(mode) glCullFace(mode)
#define dglColorMask(red, green, blue, alpha) glColorMask(red, green, blue, alpha)
#define dglActiveTextureARB(texture) glActiveTexture(texture)
#define dglScissor(x, y, width, height) glScissor(x, y, width, height)
#define dglGetFloatv(pname, params) glGetFloatv(pname, params)
#define dglClearDepth(depth) glClearDepth(depth)
#define dglClearStencil(s) glClearStencil(s)
#define dglClearColor(red, green, blue, alpha) glClearColor(red, green, blue, alpha)
#define dglHint(target, mode) glHint(target, mode)
#define dglFogi(pname, param) glFogi(pname, param)
#define dglTexGeni(coord, pname, param) glTexGeni(coord, pname, param)
#define dglEnableClientState(array) glEnableClientState(array)
#define dglFinish() glFinish()
#define dglBlendFunc(sfactor, dfactor) glBlendFunc(sfactor, dfactor)
#define dglVertex3f(x, y, z) glVertex3f(x, y, z)
#define dglColor4ub(red, green, blue, alpha) glColor4ub(red, green, blue, alpha)
#define dglTexCoord2f(s, t) glTexCoord2f(s, t)
#define dglVertex2f(x, y) glVertex2f(x, y)
#define dglBindTexture(target, texture) glBindTexture(target, texture)
#define dglGenTextures(n, textures) glGenTextures(n, textures)
#define dglDeleteTextures(n, textures) glDeleteTextures(n, textures)
#define dglCopyTexImage2D(target, level, internalFormat, x, y, width, height, border) glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border)
#define dglTexParameteri(target, pname, param) glTexParameteri(target, pname, param)
#define dglGetString(name)  glGetString(name)
#define dglGetIntegerv(pname, params) glGetIntegerv(pname, params)
#define dglReadBuffer(mode) glReadBuffer(mode)
#define dglDrawBuffer(mode) glDrawBuffer(mode)
#define dglTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels)
#define dglColor3f(red, green, blue) glColor3f(red, green, blue)
#define dglTexParameterf(target, pname, param) glTexParameterf(target, pname, param)
#define dglVertex3fv(v) glVertex3fv(v)
#define dglColor4ubv(v) glColor4ubv(v)
#define dglTexCoord2fv(v) glTexCoord2fv(v)
#define dglTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels)
#define dglPushMatrix() glPushMatrix()
#define dglPopMatrix() glPopMatrix()
#define dglTexCoordPointer(size, type, stride, pointer) glTexCoordPointer(size, type, stride, pointer)
#define dglVertexPointer(size, type, stride, pointer) glVertexPointer(size, type, stride, pointer)
#define dglColorPointer(size, type, stride, pointer) glColorPointer(size, type, stride, pointer)
#define dglDrawElements(mode, count, type, indices) glDrawElements(mode, count, type, indices)
#define dglPolygonMode(face, mode) glPolygonMode(face, mode)
#define dglFlush() glFlush()
#define dglReadPixels(x, y, width, height, format, type, pixels) glReadPixels(x, y, width, height, format, type, pixels)
#define dglBindFramebuffer(target, framebuffer) glBindFramebuffer(target, framebuffer)
#define dglTranslatef(x, y, z) glTranslatef(x, y, z)
#define dglRotatef(angle, x, y, z) glRotatef(angle, x, y, z)
#define dglPolygonOffset(factor, units) glPolygonOffset(factor, units)
#define dglPixelStorei(pname, param) glPixelStorei(pname, param)
#define dglShadeModel(mode) glShadeModel(mode)
#define dglClientActiveTextureARB(texture) glClientActiveTexture(texture)
#define dglDisableClientState(array) glDisableClientState(array)

static boolean has_GL_ARB_shader_objects = false;
static boolean has_GL_ARB_framebuffer_object = false;
static boolean has_GL_EXT_texture_filter_anisotropic = false;
static boolean has_GL_ARB_texture_non_power_of_two = false;

#include "jwzgles/jwzgles.h"

#define GL_TEXTURE0_ARB GL_TEXTURE0
#define GL_CLAMP_TO_BORDER GL_CLAMP_TO_EDGE
#define GL_RGB8 GL_RGB
#define GL_RGBA8 GL_RGBA

#define GL_FRAMEBUFFER_EXT                0x8D40
#define GL_MAX_COLOR_ATTACHMENTS_EXT      0x8CDF
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_MIRRORED_REPEAT                0x8370

#define GL_DEPTH_COMPONENT 0
#define GL_TEXTURE_COMPARE_MODE 0

#define GL_NONE					0x0

extern int android_screen_width;
extern int android_screen_height;


#else

#include <SDL.h>
#include "SDL_opengl.h"
#include "doomtype.h"


//#define LOG_GLFUNC_CALLS
//#define USE_DEBUG_GLFUNCS

#ifdef USE_DEBUG_GLFUNCS
void GL_LogError(const char *message, const char *file, int line);
#endif

#define dglGetString(name)  glGetString(name)

#ifdef __cplusplus
extern "C" {
#endif

//
// Generated by dglmake
//
#ifndef USE_DEBUG_GLFUNCS

#define dglAccum(op, value) glAccum(op, value)
#define dglAlphaFunc(func, ref) glAlphaFunc(func, ref)
#define dglAreTexturesResident(n, textures, residences) glAreTexturesResident(n, textures, residences)
#define dglArrayElement(i) glArrayElement(i)
#define dglBegin(mode) glBegin(mode)
#define dglBindTexture(target, texture) glBindTexture(target, texture)
#define dglBitmap(width, height, xorig, yorig, xmove, ymove, bitmap) glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap)
#define dglBlendFunc(sfactor, dfactor) glBlendFunc(sfactor, dfactor)
#define dglCallList(list) glCallList(list)
#define dglCallLists(n, type, lists) glCallLists(n, type, lists)
#define dglClear(mask) glClear(mask)
#define dglClearAccum(red, green, blue, alpha) glClearAccum(red, green, blue, alpha)
#define dglClearColor(red, green, blue, alpha) glClearColor(red, green, blue, alpha)
#define dglClearDepth(depth) glClearDepth(depth)
#define dglClearIndex(c) glClearIndex(c)
#define dglClearStencil(s) glClearStencil(s)
#define dglClipPlane(plane, equation) glClipPlane(plane, equation)
#define dglColor3b(red, green, blue) glColor3b(red, green, blue)
#define dglColor3bv(v) glColor3bv(v)
#define dglColor3d(red, green, blue) glColor3d(red, green, blue)
#define dglColor3dv(v) glColor3dv(v)
#define dglColor3f(red, green, blue) glColor3f(red, green, blue)
#define dglColor3fv(v) glColor3fv(v)
#define dglColor3i(red, green, blue) glColor3i(red, green, blue)
#define dglColor3iv(v) glColor3iv(v)
#define dglColor3s(red, green, blue) glColor3s(red, green, blue)
#define dglColor3sv(v) glColor3sv(v)
#define dglColor3ub(red, green, blue) glColor3ub(red, green, blue)
#define dglColor3ubv(v) glColor3ubv(v)
#define dglColor3ui(red, green, blue) glColor3ui(red, green, blue)
#define dglColor3uiv(v) glColor3uiv(v)
#define dglColor3us(red, green, blue) glColor3us(red, green, blue)
#define dglColor3usv(v) glColor3usv(v)
#define dglColor4b(red, green, blue, alpha) glColor4b(red, green, blue, alpha)
#define dglColor4bv(v) glColor4bv(v)
#define dglColor4d(red, green, blue, alpha) glColor4d(red, green, blue, alpha)
#define dglColor4dv(v) glColor4dv(v)
#define dglColor4f(red, green, blue, alpha) glColor4f(red, green, blue, alpha)
#define dglColor4fv(v) glColor4fv(v)
#define dglColor4i(red, green, blue, alpha) glColor4i(red, green, blue, alpha)
#define dglColor4iv(v) glColor4iv(v)
#define dglColor4s(red, green, blue, alpha) glColor4s(red, green, blue, alpha)
#define dglColor4sv(v) glColor4sv(v)
#define dglColor4ub(red, green, blue, alpha) glColor4ub(red, green, blue, alpha)
#define dglColor4ubv(v) glColor4ubv(v)
#define dglColor4ui(red, green, blue, alpha) glColor4ui(red, green, blue, alpha)
#define dglColor4uiv(v) glColor4uiv(v)
#define dglColor4us(red, green, blue, alpha) glColor4us(red, green, blue, alpha)
#define dglColor4usv(v) glColor4usv(v)
#define dglColorMask(red, green, blue, alpha) glColorMask(red, green, blue, alpha)
#define dglColorMaterial(face, mode) glColorMaterial(face, mode)
#define dglColorPointer(size, type, stride, pointer) glColorPointer(size, type, stride, pointer)
#define dglCopyPixels(x, y, width, height, type) glCopyPixels(x, y, width, height, type)
#define dglCopyTexImage1D(target, level, internalFormat, x, y, width, border) glCopyTexImage1D(target, level, internalFormat, x, y, width, border)
#define dglCopyTexImage2D(target, level, internalFormat, x, y, width, height, border) glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border)
#define dglCopyTexSubImage1D(target, level, xoffset, x, y, width) glCopyTexSubImage1D(target, level, xoffset, x, y, width)
#define dglCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height)
#define dglCullFace(mode) glCullFace(mode)
#define dglDeleteLists(list, range) glDeleteLists(list, range)
#define dglDeleteTextures(n, textures) glDeleteTextures(n, textures)
#define dglDepthFunc(func) glDepthFunc(func)
#define dglDepthMask(flag) glDepthMask(flag)
#define dglDepthRange(zNear, zFar) glDepthRange(zNear, zFar)
#define dglDisable(cap) glDisable(cap)
#define dglDisableClientState(array) glDisableClientState(array)
#define dglDrawArrays(mode, first, count) glDrawArrays(mode, first, count)
#define dglDrawBuffer(mode) glDrawBuffer(mode)
#define dglDrawElements(mode, count, type, indices) glDrawElements(mode, count, type, indices)
#define dglDrawPixels(width, height, format, type, pixels) glDrawPixels(width, height, format, type, pixels)
#define dglEdgeFlag(flag) glEdgeFlag(flag)
#define dglEdgeFlagPointer(stride, pointer) glEdgeFlagPointer(stride, pointer)
#define dglEdgeFlagv(flag) glEdgeFlagv(flag)
#define dglEnable(cap) glEnable(cap)
#define dglEnableClientState(array) glEnableClientState(array)
#define dglEnd() glEnd()
#define dglEndList() glEndList()
#define dglEvalCoord1d(u) glEvalCoord1d(u)
#define dglEvalCoord1dv(u) glEvalCoord1dv(u)
#define dglEvalCoord1f(u) glEvalCoord1f(u)
#define dglEvalCoord1fv(u) glEvalCoord1fv(u)
#define dglEvalCoord2d(u, v) glEvalCoord2d(u, v)
#define dglEvalCoord2dv(u) glEvalCoord2dv(u)
#define dglEvalCoord2f(u, v) glEvalCoord2f(u, v)
#define dglEvalCoord2fv(u) glEvalCoord2fv(u)
#define dglEvalMesh1(mode, i1, i2) glEvalMesh1(mode, i1, i2)
#define dglEvalMesh2(mode, i1, i2, j1, j2) glEvalMesh2(mode, i1, i2, j1, j2)
#define dglEvalPoint1(i) glEvalPoint1(i)
#define dglEvalPoint2(i, j) glEvalPoint2(i, j)
#define dglFeedbackBuffer(size, type, buffer) glFeedbackBuffer(size, type, buffer)
#define dglFinish() glFinish()
#define dglFlush() glFlush()
#define dglFogf(pname, param) glFogf(pname, param)
#define dglFogfv(pname, params) glFogfv(pname, params)
#define dglFogi(pname, param) glFogi(pname, param)
#define dglFogiv(pname, params) glFogiv(pname, params)
#define dglFrontFace(mode) glFrontFace(mode)
#define dglFrustum(left, right, bottom, top, zNear, zFar) glFrustum(left, right, bottom, top, zNear, zFar)
#define dglGenLists(range) glGenLists(range)
#define dglGenTextures(n, textures) glGenTextures(n, textures)
#define dglGetBooleanv(pname, params) glGetBooleanv(pname, params)
#define dglGetClipPlane(plane, equation) glGetClipPlane(plane, equation)
#define dglGetDoublev(pname, params) glGetDoublev(pname, params)
#define dglGetError() glGetError()
#define dglGetFloatv(pname, params) glGetFloatv(pname, params)
#define dglGetIntegerv(pname, params) glGetIntegerv(pname, params)
#define dglGetLightfv(light, pname, params) glGetLightfv(light, pname, params)
#define dglGetLightiv(light, pname, params) glGetLightiv(light, pname, params)
#define dglGetMapdv(target, query, v) glGetMapdv(target, query, v)
#define dglGetMapfv(target, query, v) glGetMapfv(target, query, v)
#define dglGetMapiv(target, query, v) glGetMapiv(target, query, v)
#define dglGetMaterialfv(face, pname, params) glGetMaterialfv(face, pname, params)
#define dglGetMaterialiv(face, pname, params) glGetMaterialiv(face, pname, params)
#define dglGetPixelMapfv(map, values) glGetPixelMapfv(map, values)
#define dglGetPixelMapuiv(map, values) glGetPixelMapuiv(map, values)
#define dglGetPixelMapusv(map, values) glGetPixelMapusv(map, values)
#define dglGetPointerv(pname, params) glGetPointerv(pname, params)
#define dglGetPolygonStipple(mask) glGetPolygonStipple(mask)
#define dglGetTexEnvfv(target, pname, params) glGetTexEnvfv(target, pname, params)
#define dglGetTexEnviv(target, pname, params) glGetTexEnviv(target, pname, params)
#define dglGetTexGendv(coord, pname, params) glGetTexGendv(coord, pname, params)
#define dglGetTexGenfv(coord, pname, params) glGetTexGenfv(coord, pname, params)
#define dglGetTexGeniv(coord, pname, params) glGetTexGeniv(coord, pname, params)
#define dglGetTexImage(target, level, format, type, pixels) glGetTexImage(target, level, format, type, pixels)
#define dglGetTexLevelParameterfv(target, level, pname, params) glGetTexLevelParameterfv(target, level, pname, params)
#define dglGetTexLevelParameteriv(target, level, pname, params) glGetTexLevelParameteriv(target, level, pname, params)
#define dglGetTexParameterfv(target, pname, params) glGetTexParameterfv(target, pname, params)
#define dglGetTexParameteriv(target, pname, params) glGetTexParameteriv(target, pname, params)
#define dglHint(target, mode) glHint(target, mode)
#define dglIndexMask(mask) glIndexMask(mask)
#define dglIndexPointer(type, stride, pointer) glIndexPointer(type, stride, pointer)
#define dglIndexd(c) glIndexd(c)
#define dglIndexdv(c) glIndexdv(c)
#define dglIndexf(c) glIndexf(c)
#define dglIndexfv(c) glIndexfv(c)
#define dglIndexi(c) glIndexi(c)
#define dglIndexiv(c) glIndexiv(c)
#define dglIndexs(c) glIndexs(c)
#define dglIndexsv(c) glIndexsv(c)
#define dglIndexub(c) glIndexub(c)
#define dglIndexubv(c) glIndexubv(c)
#define dglInitNames() glInitNames()
#define dglInterleavedArrays(format, stride, pointer) glInterleavedArrays(format, stride, pointer)
#define dglIsEnabled(cap) glIsEnabled(cap)
#define dglIsList(list) glIsList(list)
#define dglIsTexture(texture) glIsTexture(texture)
#define dglLightModelf(pname, param) glLightModelf(pname, param)
#define dglLightModelfv(pname, params) glLightModelfv(pname, params)
#define dglLightModeli(pname, param) glLightModeli(pname, param)
#define dglLightModeliv(pname, params) glLightModeliv(pname, params)
#define dglLightf(light, pname, param) glLightf(light, pname, param)
#define dglLightfv(light, pname, params) glLightfv(light, pname, params)
#define dglLighti(light, pname, param) glLighti(light, pname, param)
#define dglLightiv(light, pname, params) glLightiv(light, pname, params)
#define dglLineStipple(factor, pattern) glLineStipple(factor, pattern)
#define dglLineWidth(width) glLineWidth(width)
#define dglListBase(base) glListBase(base)
#define dglLoadIdentity() glLoadIdentity()
#define dglLoadMatrixd(m) glLoadMatrixd(m)
#define dglLoadMatrixf(m) glLoadMatrixf(m)
#define dglLoadName(name) glLoadName(name)
#define dglLogicOp(opcode) glLogicOp(opcode)
#define dglMap1d(target, u1, u2, stride, order, points) glMap1d(target, u1, u2, stride, order, points)
#define dglMap1f(target, u1, u2, stride, order, points) glMap1f(target, u1, u2, stride, order, points)
#define dglMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points) glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points)
#define dglMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points) glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points)
#define dglMapGrid1d(un, u1, u2) glMapGrid1d(un, u1, u2)
#define dglMapGrid1f(un, u1, u2) glMapGrid1f(un, u1, u2)
#define dglMapGrid2d(un, u1, u2, vn, v1, v2) glMapGrid2d(un, u1, u2, vn, v1, v2)
#define dglMapGrid2f(un, u1, u2, vn, v1, v2) glMapGrid2f(un, u1, u2, vn, v1, v2)
#define dglMaterialf(face, pname, param) glMaterialf(face, pname, param)
#define dglMaterialfv(face, pname, params) glMaterialfv(face, pname, params)
#define dglMateriali(face, pname, param) glMateriali(face, pname, param)
#define dglMaterialiv(face, pname, params) glMaterialiv(face, pname, params)
#define dglMatrixMode(mode) glMatrixMode(mode)
#define dglMultMatrixd(m) glMultMatrixd(m)
#define dglMultMatrixf(m) glMultMatrixf(m)
#define dglNewList(list, mode) glNewList(list, mode)
#define dglNormal3b(nx, ny, nz) glNormal3b(nx, ny, nz)
#define dglNormal3bv(v) glNormal3bv(v)
#define dglNormal3d(nx, ny, nz) glNormal3d(nx, ny, nz)
#define dglNormal3dv(v) glNormal3dv(v)
#define dglNormal3f(nx, ny, nz) glNormal3f(nx, ny, nz)
#define dglNormal3fv(v) glNormal3fv(v)
#define dglNormal3i(nx, ny, nz) glNormal3i(nx, ny, nz)
#define dglNormal3iv(v) glNormal3iv(v)
#define dglNormal3s(nx, ny, nz) glNormal3s(nx, ny, nz)
#define dglNormal3sv(v) glNormal3sv(v)
#define dglNormalPointer(type, stride, pointer) glNormalPointer(type, stride, pointer)
#define dglOrtho(left, right, bottom, top, zNear, zFar) glOrtho(left, right, bottom, top, zNear, zFar)
#define dglPassThrough(token) glPassThrough(token)
#define dglPixelMapfv(map, mapsize, values) glPixelMapfv(map, mapsize, values)
#define dglPixelMapuiv(map, mapsize, values) glPixelMapuiv(map, mapsize, values)
#define dglPixelMapusv(map, mapsize, values) glPixelMapusv(map, mapsize, values)
#define dglPixelStoref(pname, param) glPixelStoref(pname, param)
#define dglPixelStorei(pname, param) glPixelStorei(pname, param)
#define dglPixelTransferf(pname, param) glPixelTransferf(pname, param)
#define dglPixelTransferi(pname, param) glPixelTransferi(pname, param)
#define dglPixelZoom(xfactor, yfactor) glPixelZoom(xfactor, yfactor)
#define dglPointSize(size) glPointSize(size)
#define dglPolygonMode(face, mode) glPolygonMode(face, mode)
#define dglPolygonOffset(factor, units) glPolygonOffset(factor, units)
#define dglPolygonStipple(mask) glPolygonStipple(mask)
#define dglPopAttrib() glPopAttrib()
#define dglPopClientAttrib() glPopClientAttrib()
#define dglPopMatrix() glPopMatrix()
#define dglPopName() glPopName()
#define dglPrioritizeTextures(n, textures, priorities) glPrioritizeTextures(n, textures, priorities)
#define dglPushAttrib(mask) glPushAttrib(mask)
#define dglPushClientAttrib(mask) glPushClientAttrib(mask)
#define dglPushMatrix() glPushMatrix()
#define dglPushName(name) glPushName(name)
#define dglRasterPos2d(x, y) glRasterPos2d(x, y)
#define dglRasterPos2dv(v) glRasterPos2dv(v)
#define dglRasterPos2f(x, y) glRasterPos2f(x, y)
#define dglRasterPos2fv(v) glRasterPos2fv(v)
#define dglRasterPos2i(x, y) glRasterPos2i(x, y)
#define dglRasterPos2iv(v) glRasterPos2iv(v)
#define dglRasterPos2s(x, y) glRasterPos2s(x, y)
#define dglRasterPos2sv(v) glRasterPos2sv(v)
#define dglRasterPos3d(x, y, z) glRasterPos3d(x, y, z)
#define dglRasterPos3dv(v) glRasterPos3dv(v)
#define dglRasterPos3f(x, y, z) glRasterPos3f(x, y, z)
#define dglRasterPos3fv(v) glRasterPos3fv(v)
#define dglRasterPos3i(x, y, z) glRasterPos3i(x, y, z)
#define dglRasterPos3iv(v) glRasterPos3iv(v)
#define dglRasterPos3s(x, y, z) glRasterPos3s(x, y, z)
#define dglRasterPos3sv(v) glRasterPos3sv(v)
#define dglRasterPos4d(x, y, z, w) glRasterPos4d(x, y, z, w)
#define dglRasterPos4dv(v) glRasterPos4dv(v)
#define dglRasterPos4f(x, y, z, w) glRasterPos4f(x, y, z, w)
#define dglRasterPos4fv(v) glRasterPos4fv(v)
#define dglRasterPos4i(x, y, z, w) glRasterPos4i(x, y, z, w)
#define dglRasterPos4iv(v) glRasterPos4iv(v)
#define dglRasterPos4s(x, y, z, w) glRasterPos4s(x, y, z, w)
#define dglRasterPos4sv(v) glRasterPos4sv(v)
#define dglReadBuffer(mode) glReadBuffer(mode)
#define dglReadPixels(x, y, width, height, format, type, pixels) glReadPixels(x, y, width, height, format, type, pixels)
#define dglRectd(x1, y1, x2, y2) glRectd(x1, y1, x2, y2)
#define dglRectdv(v1, v2) glRectdv(v1, v2)
#define dglRectf(x1, y1, x2, y2) glRectf(x1, y1, x2, y2)
#define dglRectfv(v1, v2) glRectfv(v1, v2)
#define dglRecti(x1, y1, x2, y2) glRecti(x1, y1, x2, y2)
#define dglRectiv(v1, v2) glRectiv(v1, v2)
#define dglRects(x1, y1, x2, y2) glRects(x1, y1, x2, y2)
#define dglRectsv(v1, v2) glRectsv(v1, v2)
#define dglRenderMode(mode) glRenderMode(mode)
#define dglRotated(angle, x, y, z) glRotated(angle, x, y, z)
#define dglRotatef(angle, x, y, z) glRotatef(angle, x, y, z)
#define dglScaled(x, y, z) glScaled(x, y, z)
#define dglScalef(x, y, z) glScalef(x, y, z)
#define dglScissor(x, y, width, height) glScissor(x, y, width, height)
#define dglSelectBuffer(size, buffer) glSelectBuffer(size, buffer)
#define dglShadeModel(mode) glShadeModel(mode)
#define dglStencilFunc(func, ref, mask) glStencilFunc(func, ref, mask)
#define dglStencilMask(mask) glStencilMask(mask)
#define dglStencilOp(fail, zfail, zpass) glStencilOp(fail, zfail, zpass)
#define dglTexCoord1d(s) glTexCoord1d(s)
#define dglTexCoord1dv(v) glTexCoord1dv(v)
#define dglTexCoord1f(s) glTexCoord1f(s)
#define dglTexCoord1fv(v) glTexCoord1fv(v)
#define dglTexCoord1i(s) glTexCoord1i(s)
#define dglTexCoord1iv(v) glTexCoord1iv(v)
#define dglTexCoord1s(s) glTexCoord1s(s)
#define dglTexCoord1sv(v) glTexCoord1sv(v)
#define dglTexCoord2d(s, t) glTexCoord2d(s, t)
#define dglTexCoord2dv(v) glTexCoord2dv(v)
#define dglTexCoord2f(s, t) glTexCoord2f(s, t)
#define dglTexCoord2fv(v) glTexCoord2fv(v)
#define dglTexCoord2i(s, t) glTexCoord2i(s, t)
#define dglTexCoord2iv(v) glTexCoord2iv(v)
#define dglTexCoord2s(s, t) glTexCoord2s(s, t)
#define dglTexCoord2sv(v) glTexCoord2sv(v)
#define dglTexCoord3d(s, t, r) glTexCoord3d(s, t, r)
#define dglTexCoord3dv(v) glTexCoord3dv(v)
#define dglTexCoord3f(s, t, r) glTexCoord3f(s, t, r)
#define dglTexCoord3fv(v) glTexCoord3fv(v)
#define dglTexCoord3i(s, t, r) glTexCoord3i(s, t, r)
#define dglTexCoord3iv(v) glTexCoord3iv(v)
#define dglTexCoord3s(s, t, r) glTexCoord3s(s, t, r)
#define dglTexCoord3sv(v) glTexCoord3sv(v)
#define dglTexCoord4d(s, t, r, q) glTexCoord4d(s, t, r, q)
#define dglTexCoord4dv(v) glTexCoord4dv(v)
#define dglTexCoord4f(s, t, r, q) glTexCoord4f(s, t, r, q)
#define dglTexCoord4fv(v) glTexCoord4fv(v)
#define dglTexCoord4i(s, t, r, q) glTexCoord4i(s, t, r, q)
#define dglTexCoord4iv(v) glTexCoord4iv(v)
#define dglTexCoord4s(s, t, r, q) glTexCoord4s(s, t, r, q)
#define dglTexCoord4sv(v) glTexCoord4sv(v)
#define dglTexCoordPointer(size, type, stride, pointer) glTexCoordPointer(size, type, stride, pointer)
#define dglTexEnvf(target, pname, param) glTexEnvf(target, pname, param)
#define dglTexEnvfv(target, pname, params) glTexEnvfv(target, pname, params)
#define dglTexEnvi(target, pname, param) glTexEnvi(target, pname, param)
#define dglTexEnviv(target, pname, params) glTexEnviv(target, pname, params)
#define dglTexGend(coord, pname, param) glTexGend(coord, pname, param)
#define dglTexGendv(coord, pname, params) glTexGendv(coord, pname, params)
#define dglTexGenf(coord, pname, param) glTexGenf(coord, pname, param)
#define dglTexGenfv(coord, pname, params) glTexGenfv(coord, pname, params)
#define dglTexGeni(coord, pname, param) glTexGeni(coord, pname, param)
#define dglTexGeniv(coord, pname, params) glTexGeniv(coord, pname, params)
#define dglTexImage1D(target, level, internalformat, width, border, format, type, pixels) glTexImage1D(target, level, internalformat, width, border, format, type, pixels)
#define dglTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels)
#define dglTexParameterf(target, pname, param) glTexParameterf(target, pname, param)
#define dglTexParameterfv(target, pname, params) glTexParameterfv(target, pname, params)
#define dglTexParameteri(target, pname, param) glTexParameteri(target, pname, param)
#define dglTexParameteriv(target, pname, params) glTexParameteriv(target, pname, params)
#define dglTexSubImage1D(target, level, xoffset, width, format, type, pixels) glTexSubImage1D(target, level, xoffset, width, format, type, pixels)
#define dglTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels)
#define dglTranslated(x, y, z) glTranslated(x, y, z)
#define dglTranslatef(x, y, z) glTranslatef(x, y, z)
#define dglVertex2d(x, y) glVertex2d(x, y)
#define dglVertex2dv(v) glVertex2dv(v)
#define dglVertex2f(x, y) glVertex2f(x, y)
#define dglVertex2fv(v) glVertex2fv(v)
#define dglVertex2i(x, y) glVertex2i(x, y)
#define dglVertex2iv(v) glVertex2iv(v)
#define dglVertex2s(x, y) glVertex2s(x, y)
#define dglVertex2sv(v) glVertex2sv(v)
#define dglVertex3d(x, y, z) glVertex3d(x, y, z)
#define dglVertex3dv(v) glVertex3dv(v)
#define dglVertex3f(x, y, z) glVertex3f(x, y, z)
#define dglVertex3fv(v) glVertex3fv(v)
#define dglVertex3i(x, y, z) glVertex3i(x, y, z)
#define dglVertex3iv(v) glVertex3iv(v)
#define dglVertex3s(x, y, z) glVertex3s(x, y, z)
#define dglVertex3sv(v) glVertex3sv(v)
#define dglVertex4d(x, y, z, w) glVertex4d(x, y, z, w)
#define dglVertex4dv(v) glVertex4dv(v)
#define dglVertex4f(x, y, z, w) glVertex4f(x, y, z, w)
#define dglVertex4fv(v) glVertex4fv(v)
#define dglVertex4i(x, y, z, w) glVertex4i(x, y, z, w)
#define dglVertex4iv(v) glVertex4iv(v)
#define dglVertex4s(x, y, z, w) glVertex4s(x, y, z, w)
#define dglVertex4sv(v) glVertex4sv(v)
#define dglVertexPointer(size, type, stride, pointer) glVertexPointer(size, type, stride, pointer)
#define dglViewport(x, y, width, height) glViewport(x, y, width, height)

#else

static __inline void glAccum_DEBUG (GLenum op, GLfloat value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glAccum(op=0x%x, value=%f)\n", file, line, op, value);
#endif
    glAccum(op, value);
    GL_LogError("glAccum", file, line);
}

static __inline void glAlphaFunc_DEBUG (GLenum func, GLclampf ref, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glAlphaFunc(func=0x%x, ref=%f)\n", file, line, func, ref);
#endif
    glAlphaFunc(func, ref);
    GL_LogError("glAlphaFunc", file, line);
}

static __inline GLboolean glAreTexturesResident_DEBUG (GLsizei n, GLuint* textures, GLboolean* residences, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glAreTexturesResident(n=0x%x, textures=%p, residences=%p)\n", file, line, n, textures, residences);
#endif
    glAreTexturesResident(n, textures, residences);
    GL_LogError("glAreTexturesResident", file, line);
}

static __inline void glArrayElement_DEBUG (GLint i, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glArrayElement(i=%i)\n", file, line, i);
#endif
    glArrayElement(i);
    GL_LogError("glArrayElement", file, line);
}

static __inline void glBegin_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBegin(mode=0x%x)\n", file, line, mode);
#endif
    glBegin(mode);
}

static __inline void glBindTexture_DEBUG (GLenum target, GLuint texture, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBindTexture(target=0x%x, texture=%i)\n", file, line, target, texture);
#endif
    glBindTexture(target, texture);
    GL_LogError("glBindTexture", file, line);
}

static __inline void glBitmap_DEBUG (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, GLubyte* bitmap, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBitmap(width=0x%x, height=0x%x, xorig=%f, yorig=%f, xmove=%f, ymove=%f, bitmap=%p)\n", file, line, width, height, xorig, yorig, xmove, ymove, bitmap);
#endif
    glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
    GL_LogError("glBitmap", file, line);
}

static __inline void glBlendFunc_DEBUG (GLenum sfactor, GLenum dfactor, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBlendFunc(sfactor=0x%x, dfactor=0x%x)\n", file, line, sfactor, dfactor);
#endif
    glBlendFunc(sfactor, dfactor);
    GL_LogError("glBlendFunc", file, line);
}

static __inline void glCallList_DEBUG (GLuint list, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCallList(list=%i)\n", file, line, list);
#endif
    glCallList(list);
    GL_LogError("glCallList", file, line);
}

static __inline void glCallLists_DEBUG (GLsizei n, GLenum type, GLvoid* lists, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCallLists(n=0x%x, type=0x%x, lists=%p)\n", file, line, n, type, lists);
#endif
    glCallLists(n, type, lists);
    GL_LogError("glCallLists", file, line);
}

static __inline void glClear_DEBUG (GLbitfield mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClear(mask=0x%x)\n", file, line, mask);
#endif
    glClear(mask);
    GL_LogError("glClear", file, line);
}

static __inline void glClearAccum_DEBUG (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClearAccum(red=%f, green=%f, blue=%f, alpha=%f)\n", file, line, red, green, blue, alpha);
#endif
    glClearAccum(red, green, blue, alpha);
    GL_LogError("glClearAccum", file, line);
}

static __inline void glClearColor_DEBUG (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClearColor(red=%f, green=%f, blue=%f, alpha=%f)\n", file, line, red, green, blue, alpha);
#endif
    glClearColor(red, green, blue, alpha);
    GL_LogError("glClearColor", file, line);
}

static __inline void glClearDepth_DEBUG (GLclampd depth, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClearDepth(depth=%f)\n", file, line, depth);
#endif
    glClearDepth(depth);
    GL_LogError("glClearDepth", file, line);
}

static __inline void glClearIndex_DEBUG (GLfloat c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClearIndex(c=%f)\n", file, line, c);
#endif
    glClearIndex(c);
    GL_LogError("glClearIndex", file, line);
}

static __inline void glClearStencil_DEBUG (GLint s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClearStencil(s=%i)\n", file, line, s);
#endif
    glClearStencil(s);
    GL_LogError("glClearStencil", file, line);
}

static __inline void glClipPlane_DEBUG (GLenum plane, GLdouble* equation, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClipPlane(plane=0x%x, equation=%p)\n", file, line, plane, equation);
#endif
    glClipPlane(plane, equation);
    GL_LogError("glClipPlane", file, line);
}

static __inline void glColor3b_DEBUG (GLbyte red, GLbyte green, GLbyte blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3b(red=%i, green=%i, blue=%i)\n", file, line, red, green, blue);
#endif
    glColor3b(red, green, blue);
    GL_LogError("glColor3b", file, line);
}

static __inline void glColor3bv_DEBUG (GLbyte* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3bv(v=%p)\n", file, line, v);
#endif
    glColor3bv(v);
    GL_LogError("glColor3bv", file, line);
}

static __inline void glColor3d_DEBUG (GLdouble red, GLdouble green, GLdouble blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3d(red=%f, green=%f, blue=%f)\n", file, line, red, green, blue);
#endif
    glColor3d(red, green, blue);
    GL_LogError("glColor3d", file, line);
}

static __inline void glColor3dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3dv(v=%p)\n", file, line, v);
#endif
    glColor3dv(v);
    GL_LogError("glColor3dv", file, line);
}

static __inline void glColor3f_DEBUG (GLfloat red, GLfloat green, GLfloat blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3f(red=%f, green=%f, blue=%f)\n", file, line, red, green, blue);
#endif
    glColor3f(red, green, blue);
    GL_LogError("glColor3f", file, line);
}

static __inline void glColor3fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3fv(v=%p)\n", file, line, v);
#endif
    glColor3fv(v);
    GL_LogError("glColor3fv", file, line);
}

static __inline void glColor3i_DEBUG (GLint red, GLint green, GLint blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3i(red=%i, green=%i, blue=%i)\n", file, line, red, green, blue);
#endif
    glColor3i(red, green, blue);
    GL_LogError("glColor3i", file, line);
}

static __inline void glColor3iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3iv(v=%p)\n", file, line, v);
#endif
    glColor3iv(v);
    GL_LogError("glColor3iv", file, line);
}

static __inline void glColor3s_DEBUG (GLshort red, GLshort green, GLshort blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3s(red=%i, green=%i, blue=%i)\n", file, line, red, green, blue);
#endif
    glColor3s(red, green, blue);
    GL_LogError("glColor3s", file, line);
}

static __inline void glColor3sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3sv(v=%p)\n", file, line, v);
#endif
    glColor3sv(v);
    GL_LogError("glColor3sv", file, line);
}

static __inline void glColor3ub_DEBUG (GLubyte red, GLubyte green, GLubyte blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3ub(red=%i, green=%i, blue=%i)\n", file, line, red, green, blue);
#endif
    glColor3ub(red, green, blue);
    GL_LogError("glColor3ub", file, line);
}

static __inline void glColor3ubv_DEBUG (GLubyte* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3ubv(v=%p)\n", file, line, v);
#endif
    glColor3ubv(v);
    GL_LogError("glColor3ubv", file, line);
}

static __inline void glColor3ui_DEBUG (GLuint red, GLuint green, GLuint blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3ui(red=%i, green=%i, blue=%i)\n", file, line, red, green, blue);
#endif
    glColor3ui(red, green, blue);
    GL_LogError("glColor3ui", file, line);
}

static __inline void glColor3uiv_DEBUG (GLuint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3uiv(v=%p)\n", file, line, v);
#endif
    glColor3uiv(v);
    GL_LogError("glColor3uiv", file, line);
}

static __inline void glColor3us_DEBUG (GLushort red, GLushort green, GLushort blue, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3us(red=%i, green=%i, blue=%i)\n", file, line, red, green, blue);
#endif
    glColor3us(red, green, blue);
    GL_LogError("glColor3us", file, line);
}

static __inline void glColor3usv_DEBUG (GLushort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor3usv(v=%p)\n", file, line, v);
#endif
    glColor3usv(v);
    GL_LogError("glColor3usv", file, line);
}

static __inline void glColor4b_DEBUG (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4b(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColor4b(red, green, blue, alpha);
    GL_LogError("glColor4b", file, line);
}

static __inline void glColor4bv_DEBUG (GLbyte* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4bv(v=%p)\n", file, line, v);
#endif
    glColor4bv(v);
    GL_LogError("glColor4bv", file, line);
}

static __inline void glColor4d_DEBUG (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4d(red=%f, green=%f, blue=%f, alpha=%f)\n", file, line, red, green, blue, alpha);
#endif
    glColor4d(red, green, blue, alpha);
    GL_LogError("glColor4d", file, line);
}

static __inline void glColor4dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4dv(v=%p)\n", file, line, v);
#endif
    glColor4dv(v);
    GL_LogError("glColor4dv", file, line);
}

static __inline void glColor4f_DEBUG (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4f(red=%f, green=%f, blue=%f, alpha=%f)\n", file, line, red, green, blue, alpha);
#endif
    glColor4f(red, green, blue, alpha);
    GL_LogError("glColor4f", file, line);
}

static __inline void glColor4fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4fv(v=%p)\n", file, line, v);
#endif
    glColor4fv(v);
    GL_LogError("glColor4fv", file, line);
}

static __inline void glColor4i_DEBUG (GLint red, GLint green, GLint blue, GLint alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4i(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColor4i(red, green, blue, alpha);
    GL_LogError("glColor4i", file, line);
}

static __inline void glColor4iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4iv(v=%p)\n", file, line, v);
#endif
    glColor4iv(v);
    GL_LogError("glColor4iv", file, line);
}

static __inline void glColor4s_DEBUG (GLshort red, GLshort green, GLshort blue, GLshort alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4s(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColor4s(red, green, blue, alpha);
    GL_LogError("glColor4s", file, line);
}

static __inline void glColor4sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4sv(v=%p)\n", file, line, v);
#endif
    glColor4sv(v);
    GL_LogError("glColor4sv", file, line);
}

static __inline void glColor4ub_DEBUG (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4ub(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColor4ub(red, green, blue, alpha);
    GL_LogError("glColor4ub", file, line);
}

static __inline void glColor4ubv_DEBUG (GLubyte* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4ubv(v=%p)\n", file, line, v);
#endif
    glColor4ubv(v);
    GL_LogError("glColor4ubv", file, line);
}

static __inline void glColor4ui_DEBUG (GLuint red, GLuint green, GLuint blue, GLuint alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4ui(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColor4ui(red, green, blue, alpha);
    GL_LogError("glColor4ui", file, line);
}

static __inline void glColor4uiv_DEBUG (GLuint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4uiv(v=%p)\n", file, line, v);
#endif
    glColor4uiv(v);
    GL_LogError("glColor4uiv", file, line);
}

static __inline void glColor4us_DEBUG (GLushort red, GLushort green, GLushort blue, GLushort alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4us(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColor4us(red, green, blue, alpha);
    GL_LogError("glColor4us", file, line);
}

static __inline void glColor4usv_DEBUG (GLushort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColor4usv(v=%p)\n", file, line, v);
#endif
    glColor4usv(v);
    GL_LogError("glColor4usv", file, line);
}

static __inline void glColorMask_DEBUG (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColorMask(red=%i, green=%i, blue=%i, alpha=%i)\n", file, line, red, green, blue, alpha);
#endif
    glColorMask(red, green, blue, alpha);
    GL_LogError("glColorMask", file, line);
}

static __inline void glColorMaterial_DEBUG (GLenum face, GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColorMaterial(face=0x%x, mode=0x%x)\n", file, line, face, mode);
#endif
    glColorMaterial(face, mode);
    GL_LogError("glColorMaterial", file, line);
}

static __inline void glColorPointer_DEBUG (GLint size, GLenum type, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glColorPointer(size=%i, type=0x%x, stride=0x%x, pointer=%p)\n", file, line, size, type, stride, pointer);
#endif
    glColorPointer(size, type, stride, pointer);
    GL_LogError("glColorPointer", file, line);
}

static __inline void glCopyPixels_DEBUG (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCopyPixels(x=%i, y=%i, width=0x%x, height=0x%x, type=0x%x)\n", file, line, x, y, width, height, type);
#endif
    glCopyPixels(x, y, width, height, type);
    GL_LogError("glCopyPixels", file, line);
}

static __inline void glCopyTexImage1D_DEBUG (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCopyTexImage1D(target=0x%x, level=%i, internalFormat=0x%x, x=%i, y=%i, width=0x%x, border=%i)\n", file, line, target, level, internalFormat, x, y, width, border);
#endif
    glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
    GL_LogError("glCopyTexImage1D", file, line);
}

static __inline void glCopyTexImage2D_DEBUG (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCopyTexImage2D(target=0x%x, level=%i, internalFormat=0x%x, x=%i, y=%i, width=0x%x, height=0x%x, border=%i)\n", file, line, target, level, internalFormat, x, y, width, height, border);
#endif
    glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
    GL_LogError("glCopyTexImage2D", file, line);
}

static __inline void glCopyTexSubImage1D_DEBUG (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCopyTexSubImage1D(target=0x%x, level=%i, xoffset=%i, x=%i, y=%i, width=0x%x)\n", file, line, target, level, xoffset, x, y, width);
#endif
    glCopyTexSubImage1D(target, level, xoffset, x, y, width);
    GL_LogError("glCopyTexSubImage1D", file, line);
}

static __inline void glCopyTexSubImage2D_DEBUG (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCopyTexSubImage2D(target=0x%x, level=%i, xoffset=%i, yoffset=%i, x=%i, y=%i, width=0x%x, height=0x%x)\n", file, line, target, level, xoffset, yoffset, x, y, width, height);
#endif
    glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    GL_LogError("glCopyTexSubImage2D", file, line);
}

static __inline void glCullFace_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCullFace(mode=0x%x)\n", file, line, mode);
#endif
    glCullFace(mode);
    GL_LogError("glCullFace", file, line);
}

static __inline void glDeleteLists_DEBUG (GLuint list, GLsizei range, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteLists(list=%i, range=0x%x)\n", file, line, list, range);
#endif
    glDeleteLists(list, range);
    GL_LogError("glDeleteLists", file, line);
}

static __inline void glDeleteTextures_DEBUG (GLsizei n, GLuint* textures, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteTextures(n=0x%x, textures=%p)\n", file, line, n, textures);
#endif
    glDeleteTextures(n, textures);
    GL_LogError("glDeleteTextures", file, line);
}

static __inline void glDepthFunc_DEBUG (GLenum func, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDepthFunc(func=0x%x)\n", file, line, func);
#endif
    glDepthFunc(func);
    GL_LogError("glDepthFunc", file, line);
}

static __inline void glDepthMask_DEBUG (GLboolean flag, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDepthMask(flag=%i)\n", file, line, flag);
#endif
    glDepthMask(flag);
    GL_LogError("glDepthMask", file, line);
}

static __inline void glDepthRange_DEBUG (GLclampd zNear, GLclampd zFar, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDepthRange(zNear=%f, zFar=%f)\n", file, line, zNear, zFar);
#endif
    glDepthRange(zNear, zFar);
    GL_LogError("glDepthRange", file, line);
}

static __inline void glDisable_DEBUG (GLenum cap, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDisable(cap=0x%x)\n", file, line, cap);
#endif
    glDisable(cap);
    GL_LogError("glDisable", file, line);
}

static __inline void glDisableClientState_DEBUG (GLenum array, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDisableClientState(array=0x%x)\n", file, line, array);
#endif
    glDisableClientState(array);
    GL_LogError("glDisableClientState", file, line);
}

static __inline void glDrawArrays_DEBUG (GLenum mode, GLint first, GLsizei count, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDrawArrays(mode=0x%x, first=%i, count=0x%x)\n", file, line, mode, first, count);
#endif
    glDrawArrays(mode, first, count);
    GL_LogError("glDrawArrays", file, line);
}

static __inline void glDrawBuffer_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDrawBuffer(mode=0x%x)\n", file, line, mode);
#endif
    glDrawBuffer(mode);
    GL_LogError("glDrawBuffer", file, line);
}

static __inline void glDrawElements_DEBUG (GLenum mode, GLsizei count, GLenum type, GLvoid* indices, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDrawElements(mode=0x%x, count=0x%x, type=0x%x, indices=%p)\n", file, line, mode, count, type, indices);
#endif
    glDrawElements(mode, count, type, indices);
    GL_LogError("glDrawElements", file, line);
}

static __inline void glDrawPixels_DEBUG (GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDrawPixels(width=0x%x, height=0x%x, format=0x%x, type=0x%x, pixels=%p)\n", file, line, width, height, format, type, pixels);
#endif
    glDrawPixels(width, height, format, type, pixels);
    GL_LogError("glDrawPixels", file, line);
}

static __inline void glEdgeFlag_DEBUG (GLboolean flag, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEdgeFlag(flag=%i)\n", file, line, flag);
#endif
    glEdgeFlag(flag);
    GL_LogError("glEdgeFlag", file, line);
}

static __inline void glEdgeFlagPointer_DEBUG (GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEdgeFlagPointer(stride=0x%x, pointer=%p)\n", file, line, stride, pointer);
#endif
    glEdgeFlagPointer(stride, pointer);
    GL_LogError("glEdgeFlagPointer", file, line);
}

static __inline void glEdgeFlagv_DEBUG (GLboolean* flag, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEdgeFlagv(flag=%p)\n", file, line, flag);
#endif
    glEdgeFlagv(flag);
    GL_LogError("glEdgeFlagv", file, line);
}

static __inline void glEnable_DEBUG (GLenum cap, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEnable(cap=0x%x)\n", file, line, cap);
#endif
    glEnable(cap);
    GL_LogError("glEnable", file, line);
}

static __inline void glEnableClientState_DEBUG (GLenum array, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEnableClientState(array=0x%x)\n", file, line, array);
#endif
    glEnableClientState(array);
    GL_LogError("glEnableClientState", file, line);
}

static __inline void glEnd_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEnd()\n", file, line);
#endif
    glEnd();
}

static __inline void glEndList_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEndList()\n", file, line);
#endif
    glEndList();
    GL_LogError("glEndList", file, line);
}

static __inline void glEvalCoord1d_DEBUG (GLdouble u, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord1d(u=%f)\n", file, line, u);
#endif
    glEvalCoord1d(u);
    GL_LogError("glEvalCoord1d", file, line);
}

static __inline void glEvalCoord1dv_DEBUG (GLdouble* u, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord1dv(u=%p)\n", file, line, u);
#endif
    glEvalCoord1dv(u);
    GL_LogError("glEvalCoord1dv", file, line);
}

static __inline void glEvalCoord1f_DEBUG (GLfloat u, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord1f(u=%f)\n", file, line, u);
#endif
    glEvalCoord1f(u);
    GL_LogError("glEvalCoord1f", file, line);
}

static __inline void glEvalCoord1fv_DEBUG (GLfloat* u, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord1fv(u=%p)\n", file, line, u);
#endif
    glEvalCoord1fv(u);
    GL_LogError("glEvalCoord1fv", file, line);
}

static __inline void glEvalCoord2d_DEBUG (GLdouble u, GLdouble v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord2d(u=%f, v=%f)\n", file, line, u, v);
#endif
    glEvalCoord2d(u, v);
    GL_LogError("glEvalCoord2d", file, line);
}

static __inline void glEvalCoord2dv_DEBUG (GLdouble* u, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord2dv(u=%p)\n", file, line, u);
#endif
    glEvalCoord2dv(u);
    GL_LogError("glEvalCoord2dv", file, line);
}

static __inline void glEvalCoord2f_DEBUG (GLfloat u, GLfloat v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord2f(u=%f, v=%f)\n", file, line, u, v);
#endif
    glEvalCoord2f(u, v);
    GL_LogError("glEvalCoord2f", file, line);
}

static __inline void glEvalCoord2fv_DEBUG (GLfloat* u, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalCoord2fv(u=%p)\n", file, line, u);
#endif
    glEvalCoord2fv(u);
    GL_LogError("glEvalCoord2fv", file, line);
}

static __inline void glEvalMesh1_DEBUG (GLenum mode, GLint i1, GLint i2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalMesh1(mode=0x%x, i1=%i, i2=%i)\n", file, line, mode, i1, i2);
#endif
    glEvalMesh1(mode, i1, i2);
    GL_LogError("glEvalMesh1", file, line);
}

static __inline void glEvalMesh2_DEBUG (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalMesh2(mode=0x%x, i1=%i, i2=%i, j1=%i, j2=%i)\n", file, line, mode, i1, i2, j1, j2);
#endif
    glEvalMesh2(mode, i1, i2, j1, j2);
    GL_LogError("glEvalMesh2", file, line);
}

static __inline void glEvalPoint1_DEBUG (GLint i, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalPoint1(i=%i)\n", file, line, i);
#endif
    glEvalPoint1(i);
    GL_LogError("glEvalPoint1", file, line);
}

static __inline void glEvalPoint2_DEBUG (GLint i, GLint j, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEvalPoint2(i=%i, j=%i)\n", file, line, i, j);
#endif
    glEvalPoint2(i, j);
    GL_LogError("glEvalPoint2", file, line);
}

static __inline void glFeedbackBuffer_DEBUG (GLsizei size, GLenum type, GLfloat* buffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFeedbackBuffer(size=0x%x, type=0x%x, buffer=%p)\n", file, line, size, type, buffer);
#endif
    glFeedbackBuffer(size, type, buffer);
    GL_LogError("glFeedbackBuffer", file, line);
}

static __inline void glFinish_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFinish()\n", file, line);
#endif
    glFinish();
    GL_LogError("glFinish", file, line);
}

static __inline void glFlush_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFlush()\n", file, line);
#endif
    glFlush();
    GL_LogError("glFlush", file, line);
}

static __inline void glFogf_DEBUG (GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogf(pname=0x%x, param=%f)\n", file, line, pname, param);
#endif
    glFogf(pname, param);
    GL_LogError("glFogf", file, line);
}

static __inline void glFogfv_DEBUG (GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogfv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glFogfv(pname, params);
    GL_LogError("glFogfv", file, line);
}

static __inline void glFogi_DEBUG (GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogi(pname=0x%x, param=%i)\n", file, line, pname, param);
#endif
    glFogi(pname, param);
    GL_LogError("glFogi", file, line);
}

static __inline void glFogiv_DEBUG (GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogiv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glFogiv(pname, params);
    GL_LogError("glFogiv", file, line);
}

static __inline void glFrontFace_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFrontFace(mode=0x%x)\n", file, line, mode);
#endif
    glFrontFace(mode);
    GL_LogError("glFrontFace", file, line);
}

static __inline void glFrustum_DEBUG (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFrustum(left=%f, right=%f, bottom=%f, top=%f, zNear=%f, zFar=%f)\n", file, line, left, right, bottom, top, zNear, zFar);
#endif
    glFrustum(left, right, bottom, top, zNear, zFar);
    GL_LogError("glFrustum", file, line);
}

static __inline GLuint glGenLists_DEBUG (GLsizei range, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenLists(range=0x%x)\n", file, line, range);
#endif
    glGenLists(range);
    GL_LogError("glGenLists", file, line);
}

static __inline void glGenTextures_DEBUG (GLsizei n, GLuint* textures, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenTextures(n=0x%x, textures=%p)\n", file, line, n, textures);
#endif
    glGenTextures(n, textures);
    GL_LogError("glGenTextures", file, line);
}

static __inline void glGetBooleanv_DEBUG (GLenum pname, GLboolean* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetBooleanv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glGetBooleanv(pname, params);
    GL_LogError("glGetBooleanv", file, line);
}

static __inline void glGetClipPlane_DEBUG (GLenum plane, GLdouble* equation, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetClipPlane(plane=0x%x, equation=%p)\n", file, line, plane, equation);
#endif
    glGetClipPlane(plane, equation);
    GL_LogError("glGetClipPlane", file, line);
}

static __inline void glGetDoublev_DEBUG (GLenum pname, GLdouble* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetDoublev(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glGetDoublev(pname, params);
    GL_LogError("glGetDoublev", file, line);
}

static __inline GLenum glGetError_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetError()\n", file, line);
#endif
    glGetError();
    GL_LogError("glGetError", file, line);
}

static __inline void glGetFloatv_DEBUG (GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetFloatv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glGetFloatv(pname, params);
    GL_LogError("glGetFloatv", file, line);
}

static __inline void glGetIntegerv_DEBUG (GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetIntegerv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glGetIntegerv(pname, params);
    GL_LogError("glGetIntegerv", file, line);
}

static __inline void glGetLightfv_DEBUG (GLenum light, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetLightfv(light=0x%x, pname=0x%x, params=%p)\n", file, line, light, pname, params);
#endif
    glGetLightfv(light, pname, params);
    GL_LogError("glGetLightfv", file, line);
}

static __inline void glGetLightiv_DEBUG (GLenum light, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetLightiv(light=0x%x, pname=0x%x, params=%p)\n", file, line, light, pname, params);
#endif
    glGetLightiv(light, pname, params);
    GL_LogError("glGetLightiv", file, line);
}

static __inline void glGetMapdv_DEBUG (GLenum target, GLenum query, GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetMapdv(target=0x%x, query=0x%x, v=%p)\n", file, line, target, query, v);
#endif
    glGetMapdv(target, query, v);
    GL_LogError("glGetMapdv", file, line);
}

static __inline void glGetMapfv_DEBUG (GLenum target, GLenum query, GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetMapfv(target=0x%x, query=0x%x, v=%p)\n", file, line, target, query, v);
#endif
    glGetMapfv(target, query, v);
    GL_LogError("glGetMapfv", file, line);
}

static __inline void glGetMapiv_DEBUG (GLenum target, GLenum query, GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetMapiv(target=0x%x, query=0x%x, v=%p)\n", file, line, target, query, v);
#endif
    glGetMapiv(target, query, v);
    GL_LogError("glGetMapiv", file, line);
}

static __inline void glGetMaterialfv_DEBUG (GLenum face, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetMaterialfv(face=0x%x, pname=0x%x, params=%p)\n", file, line, face, pname, params);
#endif
    glGetMaterialfv(face, pname, params);
    GL_LogError("glGetMaterialfv", file, line);
}

static __inline void glGetMaterialiv_DEBUG (GLenum face, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetMaterialiv(face=0x%x, pname=0x%x, params=%p)\n", file, line, face, pname, params);
#endif
    glGetMaterialiv(face, pname, params);
    GL_LogError("glGetMaterialiv", file, line);
}

static __inline void glGetPixelMapfv_DEBUG (GLenum map, GLfloat* values, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetPixelMapfv(map=0x%x, values=%p)\n", file, line, map, values);
#endif
    glGetPixelMapfv(map, values);
    GL_LogError("glGetPixelMapfv", file, line);
}

static __inline void glGetPixelMapuiv_DEBUG (GLenum map, GLuint* values, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetPixelMapuiv(map=0x%x, values=%p)\n", file, line, map, values);
#endif
    glGetPixelMapuiv(map, values);
    GL_LogError("glGetPixelMapuiv", file, line);
}

static __inline void glGetPixelMapusv_DEBUG (GLenum map, GLushort* values, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetPixelMapusv(map=0x%x, values=%p)\n", file, line, map, values);
#endif
    glGetPixelMapusv(map, values);
    GL_LogError("glGetPixelMapusv", file, line);
}

static __inline void glGetPointerv_DEBUG (GLenum pname, void* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetPointerv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glGetPointerv(pname, params);
    GL_LogError("glGetPointerv", file, line);
}

static __inline void glGetPolygonStipple_DEBUG (GLubyte* mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetPolygonStipple(mask=%p)\n", file, line, mask);
#endif
    glGetPolygonStipple(mask);
    GL_LogError("glGetPolygonStipple", file, line);
}

static __inline void glGetTexEnvfv_DEBUG (const GLenum target, const GLenum pname, const GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexEnvfv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glGetTexEnvfv(target, pname, params);
    GL_LogError("glGetTexEnvfv", file, line);
}

static __inline void glGetTexEnviv_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexEnviv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glGetTexEnviv(target, pname, params);
    GL_LogError("glGetTexEnviv", file, line);
}

static __inline void glGetTexGendv_DEBUG (GLenum coord, GLenum pname, GLdouble* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexGendv(coord=0x%x, pname=0x%x, params=%p)\n", file, line, coord, pname, params);
#endif
    glGetTexGendv(coord, pname, params);
    GL_LogError("glGetTexGendv", file, line);
}

static __inline void glGetTexGenfv_DEBUG (GLenum coord, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexGenfv(coord=0x%x, pname=0x%x, params=%p)\n", file, line, coord, pname, params);
#endif
    glGetTexGenfv(coord, pname, params);
    GL_LogError("glGetTexGenfv", file, line);
}

static __inline void glGetTexGeniv_DEBUG (GLenum coord, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexGeniv(coord=0x%x, pname=0x%x, params=%p)\n", file, line, coord, pname, params);
#endif
    glGetTexGeniv(coord, pname, params);
    GL_LogError("glGetTexGeniv", file, line);
}

static __inline void glGetTexImage_DEBUG (GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexImage(target=0x%x, level=%i, format=0x%x, type=0x%x, pixels=%p)\n", file, line, target, level, format, type, pixels);
#endif
    glGetTexImage(target, level, format, type, pixels);
    GL_LogError("glGetTexImage", file, line);
}

static __inline void glGetTexLevelParameterfv_DEBUG (GLenum target, GLint level, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexLevelParameterfv(target=0x%x, level=%i, pname=0x%x, params=%p)\n", file, line, target, level, pname, params);
#endif
    glGetTexLevelParameterfv(target, level, pname, params);
    GL_LogError("glGetTexLevelParameterfv", file, line);
}

static __inline void glGetTexLevelParameteriv_DEBUG (GLenum target, GLint level, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexLevelParameteriv(target=0x%x, level=%i, pname=0x%x, params=%p)\n", file, line, target, level, pname, params);
#endif
    glGetTexLevelParameteriv(target, level, pname, params);
    GL_LogError("glGetTexLevelParameteriv", file, line);
}

static __inline void glGetTexParameterfv_DEBUG (GLenum target, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexParameterfv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glGetTexParameterfv(target, pname, params);
    GL_LogError("glGetTexParameterfv", file, line);
}

static __inline void glGetTexParameteriv_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetTexParameteriv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glGetTexParameteriv(target, pname, params);
    GL_LogError("glGetTexParameteriv", file, line);
}

static __inline void glHint_DEBUG (GLenum target, GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glHint(target=0x%x, mode=0x%x)\n", file, line, target, mode);
#endif
    glHint(target, mode);
    GL_LogError("glHint", file, line);
}

static __inline void glIndexMask_DEBUG (GLuint mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexMask(mask=%i)\n", file, line, mask);
#endif
    glIndexMask(mask);
    GL_LogError("glIndexMask", file, line);
}

static __inline void glIndexPointer_DEBUG (GLenum type, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexPointer(type=0x%x, stride=0x%x, pointer=%p)\n", file, line, type, stride, pointer);
#endif
    glIndexPointer(type, stride, pointer);
    GL_LogError("glIndexPointer", file, line);
}

static __inline void glIndexd_DEBUG (GLdouble c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexd(c=%f)\n", file, line, c);
#endif
    glIndexd(c);
    GL_LogError("glIndexd", file, line);
}

static __inline void glIndexdv_DEBUG (GLdouble* c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexdv(c=%p)\n", file, line, c);
#endif
    glIndexdv(c);
    GL_LogError("glIndexdv", file, line);
}

static __inline void glIndexf_DEBUG (GLfloat c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexf(c=%f)\n", file, line, c);
#endif
    glIndexf(c);
    GL_LogError("glIndexf", file, line);
}

static __inline void glIndexfv_DEBUG (GLfloat* c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexfv(c=%p)\n", file, line, c);
#endif
    glIndexfv(c);
    GL_LogError("glIndexfv", file, line);
}

static __inline void glIndexi_DEBUG (GLint c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexi(c=%i)\n", file, line, c);
#endif
    glIndexi(c);
    GL_LogError("glIndexi", file, line);
}

static __inline void glIndexiv_DEBUG (GLint* c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexiv(c=%p)\n", file, line, c);
#endif
    glIndexiv(c);
    GL_LogError("glIndexiv", file, line);
}

static __inline void glIndexs_DEBUG (GLshort c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexs(c=%i)\n", file, line, c);
#endif
    glIndexs(c);
    GL_LogError("glIndexs", file, line);
}

static __inline void glIndexsv_DEBUG (GLshort* c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexsv(c=%p)\n", file, line, c);
#endif
    glIndexsv(c);
    GL_LogError("glIndexsv", file, line);
}

static __inline void glIndexub_DEBUG (GLubyte c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexub(c=%i)\n", file, line, c);
#endif
    glIndexub(c);
    GL_LogError("glIndexub", file, line);
}

static __inline void glIndexubv_DEBUG (GLubyte* c, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIndexubv(c=%p)\n", file, line, c);
#endif
    glIndexubv(c);
    GL_LogError("glIndexubv", file, line);
}

static __inline void glInitNames_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glInitNames()\n", file, line);
#endif
    glInitNames();
    GL_LogError("glInitNames", file, line);
}

static __inline void glInterleavedArrays_DEBUG (GLenum format, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glInterleavedArrays(format=0x%x, stride=0x%x, pointer=%p)\n", file, line, format, stride, pointer);
#endif
    glInterleavedArrays(format, stride, pointer);
    GL_LogError("glInterleavedArrays", file, line);
}

static __inline GLboolean glIsEnabled_DEBUG (GLenum cap, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsEnabled(cap=0x%x)\n", file, line, cap);
#endif
    glIsEnabled(cap);
    GL_LogError("glIsEnabled", file, line);
}

static __inline GLboolean glIsList_DEBUG (GLuint list, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsList(list=%i)\n", file, line, list);
#endif
    glIsList(list);
    GL_LogError("glIsList", file, line);
}

static __inline GLboolean glIsTexture_DEBUG (GLuint texture, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsTexture(texture=%i)\n", file, line, texture);
#endif
    glIsTexture(texture);
    GL_LogError("glIsTexture", file, line);
}

static __inline void glLightModelf_DEBUG (GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightModelf(pname=0x%x, param=%f)\n", file, line, pname, param);
#endif
    glLightModelf(pname, param);
    GL_LogError("glLightModelf", file, line);
}

static __inline void glLightModelfv_DEBUG (GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightModelfv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glLightModelfv(pname, params);
    GL_LogError("glLightModelfv", file, line);
}

static __inline void glLightModeli_DEBUG (GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightModeli(pname=0x%x, param=%i)\n", file, line, pname, param);
#endif
    glLightModeli(pname, param);
    GL_LogError("glLightModeli", file, line);
}

static __inline void glLightModeliv_DEBUG (GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightModeliv(pname=0x%x, params=%p)\n", file, line, pname, params);
#endif
    glLightModeliv(pname, params);
    GL_LogError("glLightModeliv", file, line);
}

static __inline void glLightf_DEBUG (GLenum light, GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightf(light=0x%x, pname=0x%x, param=%f)\n", file, line, light, pname, param);
#endif
    glLightf(light, pname, param);
    GL_LogError("glLightf", file, line);
}

static __inline void glLightfv_DEBUG (GLenum light, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightfv(light=0x%x, pname=0x%x, params=%p)\n", file, line, light, pname, params);
#endif
    glLightfv(light, pname, params);
    GL_LogError("glLightfv", file, line);
}

static __inline void glLighti_DEBUG (GLenum light, GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLighti(light=0x%x, pname=0x%x, param=%i)\n", file, line, light, pname, param);
#endif
    glLighti(light, pname, param);
    GL_LogError("glLighti", file, line);
}

static __inline void glLightiv_DEBUG (GLenum light, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLightiv(light=0x%x, pname=0x%x, params=%p)\n", file, line, light, pname, params);
#endif
    glLightiv(light, pname, params);
    GL_LogError("glLightiv", file, line);
}

static __inline void glLineStipple_DEBUG (GLint factor, GLushort pattern, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLineStipple(factor=%i, pattern=%i)\n", file, line, factor, pattern);
#endif
    glLineStipple(factor, pattern);
    GL_LogError("glLineStipple", file, line);
}

static __inline void glLineWidth_DEBUG (GLfloat width, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLineWidth(width=%f)\n", file, line, width);
#endif
    glLineWidth(width);
    GL_LogError("glLineWidth", file, line);
}

static __inline void glListBase_DEBUG (GLuint base, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glListBase(base=%i)\n", file, line, base);
#endif
    glListBase(base);
    GL_LogError("glListBase", file, line);
}

static __inline void glLoadIdentity_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLoadIdentity()\n", file, line);
#endif
    glLoadIdentity();
    GL_LogError("glLoadIdentity", file, line);
}

static __inline void glLoadMatrixd_DEBUG (GLdouble* m, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLoadMatrixd(m=%p)\n", file, line, m);
#endif
    glLoadMatrixd(m);
    GL_LogError("glLoadMatrixd", file, line);
}

static __inline void glLoadMatrixf_DEBUG (GLfloat* m, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLoadMatrixf(m=%p)\n", file, line, m);
#endif
    glLoadMatrixf(m);
    GL_LogError("glLoadMatrixf", file, line);
}

static __inline void glLoadName_DEBUG (GLuint name, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLoadName(name=%i)\n", file, line, name);
#endif
    glLoadName(name);
    GL_LogError("glLoadName", file, line);
}

static __inline void glLogicOp_DEBUG (GLenum opcode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLogicOp(opcode=0x%x)\n", file, line, opcode);
#endif
    glLogicOp(opcode);
    GL_LogError("glLogicOp", file, line);
}

static __inline void glMap1d_DEBUG (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, GLdouble* points, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMap1d(target=0x%x, u1=%f, u2=%f, stride=%i, order=%i, points=%p)\n", file, line, target, u1, u2, stride, order, points);
#endif
    glMap1d(target, u1, u2, stride, order, points);
    GL_LogError("glMap1d", file, line);
}

static __inline void glMap1f_DEBUG (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, GLfloat* points, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMap1f(target=0x%x, u1=%f, u2=%f, stride=%i, order=%i, points=%p)\n", file, line, target, u1, u2, stride, order, points);
#endif
    glMap1f(target, u1, u2, stride, order, points);
    GL_LogError("glMap1f", file, line);
}

static __inline void glMap2d_DEBUG (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble* points, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMap2d(target=0x%x, u1=%f, u2=%f, ustride=%i, uorder=%i, v1=%f, v2=%f, vstride=%i, vorder=%i, points=%p)\n", file, line, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
#endif
    glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
    GL_LogError("glMap2d", file, line);
}

static __inline void glMap2f_DEBUG (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat* points, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMap2f(target=0x%x, u1=%f, u2=%f, ustride=%i, uorder=%i, v1=%f, v2=%f, vstride=%i, vorder=%i, points=%p)\n", file, line, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
#endif
    glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
    GL_LogError("glMap2f", file, line);
}

static __inline void glMapGrid1d_DEBUG (GLint un, GLdouble u1, GLdouble u2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMapGrid1d(un=%i, u1=%f, u2=%f)\n", file, line, un, u1, u2);
#endif
    glMapGrid1d(un, u1, u2);
    GL_LogError("glMapGrid1d", file, line);
}

static __inline void glMapGrid1f_DEBUG (GLint un, GLfloat u1, GLfloat u2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMapGrid1f(un=%i, u1=%f, u2=%f)\n", file, line, un, u1, u2);
#endif
    glMapGrid1f(un, u1, u2);
    GL_LogError("glMapGrid1f", file, line);
}

static __inline void glMapGrid2d_DEBUG (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMapGrid2d(un=%i, u1=%f, u2=%f, vn=%i, v1=%f, v2=%f)\n", file, line, un, u1, u2, vn, v1, v2);
#endif
    glMapGrid2d(un, u1, u2, vn, v1, v2);
    GL_LogError("glMapGrid2d", file, line);
}

static __inline void glMapGrid2f_DEBUG (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMapGrid2f(un=%i, u1=%f, u2=%f, vn=%i, v1=%f, v2=%f)\n", file, line, un, u1, u2, vn, v1, v2);
#endif
    glMapGrid2f(un, u1, u2, vn, v1, v2);
    GL_LogError("glMapGrid2f", file, line);
}

static __inline void glMaterialf_DEBUG (GLenum face, GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMaterialf(face=0x%x, pname=0x%x, param=%f)\n", file, line, face, pname, param);
#endif
    glMaterialf(face, pname, param);
    GL_LogError("glMaterialf", file, line);
}

static __inline void glMaterialfv_DEBUG (GLenum face, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMaterialfv(face=0x%x, pname=0x%x, params=%p)\n", file, line, face, pname, params);
#endif
    glMaterialfv(face, pname, params);
    GL_LogError("glMaterialfv", file, line);
}

static __inline void glMateriali_DEBUG (GLenum face, GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMateriali(face=0x%x, pname=0x%x, param=%i)\n", file, line, face, pname, param);
#endif
    glMateriali(face, pname, param);
    GL_LogError("glMateriali", file, line);
}

static __inline void glMaterialiv_DEBUG (GLenum face, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMaterialiv(face=0x%x, pname=0x%x, params=%p)\n", file, line, face, pname, params);
#endif
    glMaterialiv(face, pname, params);
    GL_LogError("glMaterialiv", file, line);
}

static __inline void glMatrixMode_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMatrixMode(mode=0x%x)\n", file, line, mode);
#endif
    glMatrixMode(mode);
    GL_LogError("glMatrixMode", file, line);
}

static __inline void glMultMatrixd_DEBUG (GLdouble* m, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultMatrixd(m=%p)\n", file, line, m);
#endif
    glMultMatrixd(m);
    GL_LogError("glMultMatrixd", file, line);
}

static __inline void glMultMatrixf_DEBUG (GLfloat* m, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultMatrixf(m=%p)\n", file, line, m);
#endif
    glMultMatrixf(m);
    GL_LogError("glMultMatrixf", file, line);
}

static __inline void glNewList_DEBUG (GLuint list, GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNewList(list=%i, mode=0x%x)\n", file, line, list, mode);
#endif
    glNewList(list, mode);
    GL_LogError("glNewList", file, line);
}

static __inline void glNormal3b_DEBUG (GLbyte nx, GLbyte ny, GLbyte nz, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3b(nx=%i, ny=%i, nz=%i)\n", file, line, nx, ny, nz);
#endif
    glNormal3b(nx, ny, nz);
    GL_LogError("glNormal3b", file, line);
}

static __inline void glNormal3bv_DEBUG (GLbyte* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3bv(v=%p)\n", file, line, v);
#endif
    glNormal3bv(v);
    GL_LogError("glNormal3bv", file, line);
}

static __inline void glNormal3d_DEBUG (GLdouble nx, GLdouble ny, GLdouble nz, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3d(nx=%f, ny=%f, nz=%f)\n", file, line, nx, ny, nz);
#endif
    glNormal3d(nx, ny, nz);
    GL_LogError("glNormal3d", file, line);
}

static __inline void glNormal3dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3dv(v=%p)\n", file, line, v);
#endif
    glNormal3dv(v);
    GL_LogError("glNormal3dv", file, line);
}

static __inline void glNormal3f_DEBUG (GLfloat nx, GLfloat ny, GLfloat nz, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3f(nx=%f, ny=%f, nz=%f)\n", file, line, nx, ny, nz);
#endif
    glNormal3f(nx, ny, nz);
    GL_LogError("glNormal3f", file, line);
}

static __inline void glNormal3fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3fv(v=%p)\n", file, line, v);
#endif
    glNormal3fv(v);
    GL_LogError("glNormal3fv", file, line);
}

static __inline void glNormal3i_DEBUG (GLint nx, GLint ny, GLint nz, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3i(nx=%i, ny=%i, nz=%i)\n", file, line, nx, ny, nz);
#endif
    glNormal3i(nx, ny, nz);
    GL_LogError("glNormal3i", file, line);
}

static __inline void glNormal3iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3iv(v=%p)\n", file, line, v);
#endif
    glNormal3iv(v);
    GL_LogError("glNormal3iv", file, line);
}

static __inline void glNormal3s_DEBUG (GLshort nx, GLshort ny, GLshort nz, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3s(nx=%i, ny=%i, nz=%i)\n", file, line, nx, ny, nz);
#endif
    glNormal3s(nx, ny, nz);
    GL_LogError("glNormal3s", file, line);
}

static __inline void glNormal3sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormal3sv(v=%p)\n", file, line, v);
#endif
    glNormal3sv(v);
    GL_LogError("glNormal3sv", file, line);
}

static __inline void glNormalPointer_DEBUG (GLenum type, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glNormalPointer(type=0x%x, stride=0x%x, pointer=%p)\n", file, line, type, stride, pointer);
#endif
    glNormalPointer(type, stride, pointer);
    GL_LogError("glNormalPointer", file, line);
}

static __inline void glOrtho_DEBUG (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glOrtho(left=%f, right=%f, bottom=%f, top=%f, zNear=%f, zFar=%f)\n", file, line, left, right, bottom, top, zNear, zFar);
#endif
    glOrtho(left, right, bottom, top, zNear, zFar);
    GL_LogError("glOrtho", file, line);
}

static __inline void glPassThrough_DEBUG (GLfloat token, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPassThrough(token=%f)\n", file, line, token);
#endif
    glPassThrough(token);
    GL_LogError("glPassThrough", file, line);
}

static __inline void glPixelMapfv_DEBUG (GLenum map, GLsizei mapsize, GLfloat* values, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelMapfv(map=0x%x, mapsize=0x%x, values=%p)\n", file, line, map, mapsize, values);
#endif
    glPixelMapfv(map, mapsize, values);
    GL_LogError("glPixelMapfv", file, line);
}

static __inline void glPixelMapuiv_DEBUG (GLenum map, GLsizei mapsize, GLuint* values, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelMapuiv(map=0x%x, mapsize=0x%x, values=%p)\n", file, line, map, mapsize, values);
#endif
    glPixelMapuiv(map, mapsize, values);
    GL_LogError("glPixelMapuiv", file, line);
}

static __inline void glPixelMapusv_DEBUG (GLenum map, GLsizei mapsize, GLushort* values, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelMapusv(map=0x%x, mapsize=0x%x, values=%p)\n", file, line, map, mapsize, values);
#endif
    glPixelMapusv(map, mapsize, values);
    GL_LogError("glPixelMapusv", file, line);
}

static __inline void glPixelStoref_DEBUG (GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelStoref(pname=0x%x, param=%f)\n", file, line, pname, param);
#endif
    glPixelStoref(pname, param);
    GL_LogError("glPixelStoref", file, line);
}

static __inline void glPixelStorei_DEBUG (GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelStorei(pname=0x%x, param=%i)\n", file, line, pname, param);
#endif
    glPixelStorei(pname, param);
    GL_LogError("glPixelStorei", file, line);
}

static __inline void glPixelTransferf_DEBUG (GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelTransferf(pname=0x%x, param=%f)\n", file, line, pname, param);
#endif
    glPixelTransferf(pname, param);
    GL_LogError("glPixelTransferf", file, line);
}

static __inline void glPixelTransferi_DEBUG (GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelTransferi(pname=0x%x, param=%i)\n", file, line, pname, param);
#endif
    glPixelTransferi(pname, param);
    GL_LogError("glPixelTransferi", file, line);
}

static __inline void glPixelZoom_DEBUG (GLfloat xfactor, GLfloat yfactor, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPixelZoom(xfactor=%f, yfactor=%f)\n", file, line, xfactor, yfactor);
#endif
    glPixelZoom(xfactor, yfactor);
    GL_LogError("glPixelZoom", file, line);
}

static __inline void glPointSize_DEBUG (GLfloat size, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPointSize(size=%f)\n", file, line, size);
#endif
    glPointSize(size);
    GL_LogError("glPointSize", file, line);
}

static __inline void glPolygonMode_DEBUG (GLenum face, GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPolygonMode(face=0x%x, mode=0x%x)\n", file, line, face, mode);
#endif
    glPolygonMode(face, mode);
    GL_LogError("glPolygonMode", file, line);
}

static __inline void glPolygonOffset_DEBUG (GLfloat factor, GLfloat units, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPolygonOffset(factor=%f, units=%f)\n", file, line, factor, units);
#endif
    glPolygonOffset(factor, units);
    GL_LogError("glPolygonOffset", file, line);
}

static __inline void glPolygonStipple_DEBUG (GLubyte* mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPolygonStipple(mask=%p)\n", file, line, mask);
#endif
    glPolygonStipple(mask);
    GL_LogError("glPolygonStipple", file, line);
}

static __inline void glPopAttrib_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPopAttrib()\n", file, line);
#endif
    glPopAttrib();
    GL_LogError("glPopAttrib", file, line);
}

static __inline void glPopClientAttrib_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPopClientAttrib()\n", file, line);
#endif
    glPopClientAttrib();
    GL_LogError("glPopClientAttrib", file, line);
}

static __inline void glPopMatrix_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPopMatrix()\n", file, line);
#endif
    glPopMatrix();
    GL_LogError("glPopMatrix", file, line);
}

static __inline void glPopName_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPopName()\n", file, line);
#endif
    glPopName();
    GL_LogError("glPopName", file, line);
}

static __inline void glPrioritizeTextures_DEBUG (GLsizei n, GLuint* textures, GLclampf* priorities, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPrioritizeTextures(n=0x%x, textures=%p, priorities=%p)\n", file, line, n, textures, priorities);
#endif
    glPrioritizeTextures(n, textures, priorities);
    GL_LogError("glPrioritizeTextures", file, line);
}

static __inline void glPushAttrib_DEBUG (GLbitfield mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPushAttrib(mask=0x%x)\n", file, line, mask);
#endif
    glPushAttrib(mask);
    GL_LogError("glPushAttrib", file, line);
}

static __inline void glPushClientAttrib_DEBUG (GLbitfield mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPushClientAttrib(mask=0x%x)\n", file, line, mask);
#endif
    glPushClientAttrib(mask);
    GL_LogError("glPushClientAttrib", file, line);
}

static __inline void glPushMatrix_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPushMatrix()\n", file, line);
#endif
    glPushMatrix();
    GL_LogError("glPushMatrix", file, line);
}

static __inline void glPushName_DEBUG (GLuint name, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glPushName(name=%i)\n", file, line, name);
#endif
    glPushName(name);
    GL_LogError("glPushName", file, line);
}

static __inline void glRasterPos2d_DEBUG (GLdouble x, GLdouble y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2d(x=%f, y=%f)\n", file, line, x, y);
#endif
    glRasterPos2d(x, y);
    GL_LogError("glRasterPos2d", file, line);
}

static __inline void glRasterPos2dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2dv(v=%p)\n", file, line, v);
#endif
    glRasterPos2dv(v);
    GL_LogError("glRasterPos2dv", file, line);
}

static __inline void glRasterPos2f_DEBUG (GLfloat x, GLfloat y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2f(x=%f, y=%f)\n", file, line, x, y);
#endif
    glRasterPos2f(x, y);
    GL_LogError("glRasterPos2f", file, line);
}

static __inline void glRasterPos2fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2fv(v=%p)\n", file, line, v);
#endif
    glRasterPos2fv(v);
    GL_LogError("glRasterPos2fv", file, line);
}

static __inline void glRasterPos2i_DEBUG (GLint x, GLint y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2i(x=%i, y=%i)\n", file, line, x, y);
#endif
    glRasterPos2i(x, y);
    GL_LogError("glRasterPos2i", file, line);
}

static __inline void glRasterPos2iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2iv(v=%p)\n", file, line, v);
#endif
    glRasterPos2iv(v);
    GL_LogError("glRasterPos2iv", file, line);
}

static __inline void glRasterPos2s_DEBUG (GLshort x, GLshort y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2s(x=%i, y=%i)\n", file, line, x, y);
#endif
    glRasterPos2s(x, y);
    GL_LogError("glRasterPos2s", file, line);
}

static __inline void glRasterPos2sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos2sv(v=%p)\n", file, line, v);
#endif
    glRasterPos2sv(v);
    GL_LogError("glRasterPos2sv", file, line);
}

static __inline void glRasterPos3d_DEBUG (GLdouble x, GLdouble y, GLdouble z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3d(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glRasterPos3d(x, y, z);
    GL_LogError("glRasterPos3d", file, line);
}

static __inline void glRasterPos3dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3dv(v=%p)\n", file, line, v);
#endif
    glRasterPos3dv(v);
    GL_LogError("glRasterPos3dv", file, line);
}

static __inline void glRasterPos3f_DEBUG (GLfloat x, GLfloat y, GLfloat z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3f(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glRasterPos3f(x, y, z);
    GL_LogError("glRasterPos3f", file, line);
}

static __inline void glRasterPos3fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3fv(v=%p)\n", file, line, v);
#endif
    glRasterPos3fv(v);
    GL_LogError("glRasterPos3fv", file, line);
}

static __inline void glRasterPos3i_DEBUG (GLint x, GLint y, GLint z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3i(x=%i, y=%i, z=%i)\n", file, line, x, y, z);
#endif
    glRasterPos3i(x, y, z);
    GL_LogError("glRasterPos3i", file, line);
}

static __inline void glRasterPos3iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3iv(v=%p)\n", file, line, v);
#endif
    glRasterPos3iv(v);
    GL_LogError("glRasterPos3iv", file, line);
}

static __inline void glRasterPos3s_DEBUG (GLshort x, GLshort y, GLshort z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3s(x=%i, y=%i, z=%i)\n", file, line, x, y, z);
#endif
    glRasterPos3s(x, y, z);
    GL_LogError("glRasterPos3s", file, line);
}

static __inline void glRasterPos3sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos3sv(v=%p)\n", file, line, v);
#endif
    glRasterPos3sv(v);
    GL_LogError("glRasterPos3sv", file, line);
}

static __inline void glRasterPos4d_DEBUG (GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4d(x=%f, y=%f, z=%f, w=%f)\n", file, line, x, y, z, w);
#endif
    glRasterPos4d(x, y, z, w);
    GL_LogError("glRasterPos4d", file, line);
}

static __inline void glRasterPos4dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4dv(v=%p)\n", file, line, v);
#endif
    glRasterPos4dv(v);
    GL_LogError("glRasterPos4dv", file, line);
}

static __inline void glRasterPos4f_DEBUG (GLfloat x, GLfloat y, GLfloat z, GLfloat w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4f(x=%f, y=%f, z=%f, w=%f)\n", file, line, x, y, z, w);
#endif
    glRasterPos4f(x, y, z, w);
    GL_LogError("glRasterPos4f", file, line);
}

static __inline void glRasterPos4fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4fv(v=%p)\n", file, line, v);
#endif
    glRasterPos4fv(v);
    GL_LogError("glRasterPos4fv", file, line);
}

static __inline void glRasterPos4i_DEBUG (GLint x, GLint y, GLint z, GLint w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4i(x=%i, y=%i, z=%i, w=%i)\n", file, line, x, y, z, w);
#endif
    glRasterPos4i(x, y, z, w);
    GL_LogError("glRasterPos4i", file, line);
}

static __inline void glRasterPos4iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4iv(v=%p)\n", file, line, v);
#endif
    glRasterPos4iv(v);
    GL_LogError("glRasterPos4iv", file, line);
}

static __inline void glRasterPos4s_DEBUG (GLshort x, GLshort y, GLshort z, GLshort w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4s(x=%i, y=%i, z=%i, w=%i)\n", file, line, x, y, z, w);
#endif
    glRasterPos4s(x, y, z, w);
    GL_LogError("glRasterPos4s", file, line);
}

static __inline void glRasterPos4sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRasterPos4sv(v=%p)\n", file, line, v);
#endif
    glRasterPos4sv(v);
    GL_LogError("glRasterPos4sv", file, line);
}

static __inline void glReadBuffer_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glReadBuffer(mode=0x%x)\n", file, line, mode);
#endif
    glReadBuffer(mode);
    GL_LogError("glReadBuffer", file, line);
}

static __inline void glReadPixels_DEBUG (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glReadPixels(x=%i, y=%i, width=0x%x, height=0x%x, format=0x%x, type=0x%x, pixels=%p)\n", file, line, x, y, width, height, format, type, pixels);
#endif
    glReadPixels(x, y, width, height, format, type, pixels);
    GL_LogError("glReadPixels", file, line);
}

static __inline void glRectd_DEBUG (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRectd(x1=%f, y1=%f, x2=%f, y2=%f)\n", file, line, x1, y1, x2, y2);
#endif
    glRectd(x1, y1, x2, y2);
    GL_LogError("glRectd", file, line);
}

static __inline void glRectdv_DEBUG (GLdouble* v1, GLdouble* v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRectdv(v1=%p, v2=%p)\n", file, line, v1, v2);
#endif
    glRectdv(v1, v2);
    GL_LogError("glRectdv", file, line);
}

static __inline void glRectf_DEBUG (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRectf(x1=%f, y1=%f, x2=%f, y2=%f)\n", file, line, x1, y1, x2, y2);
#endif
    glRectf(x1, y1, x2, y2);
    GL_LogError("glRectf", file, line);
}

static __inline void glRectfv_DEBUG (GLfloat* v1, GLfloat* v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRectfv(v1=%p, v2=%p)\n", file, line, v1, v2);
#endif
    glRectfv(v1, v2);
    GL_LogError("glRectfv", file, line);
}

static __inline void glRecti_DEBUG (GLint x1, GLint y1, GLint x2, GLint y2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRecti(x1=%i, y1=%i, x2=%i, y2=%i)\n", file, line, x1, y1, x2, y2);
#endif
    glRecti(x1, y1, x2, y2);
    GL_LogError("glRecti", file, line);
}

static __inline void glRectiv_DEBUG (GLint* v1, GLint* v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRectiv(v1=%p, v2=%p)\n", file, line, v1, v2);
#endif
    glRectiv(v1, v2);
    GL_LogError("glRectiv", file, line);
}

static __inline void glRects_DEBUG (GLshort x1, GLshort y1, GLshort x2, GLshort y2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRects(x1=%i, y1=%i, x2=%i, y2=%i)\n", file, line, x1, y1, x2, y2);
#endif
    glRects(x1, y1, x2, y2);
    GL_LogError("glRects", file, line);
}

static __inline void glRectsv_DEBUG (GLshort* v1, GLshort* v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRectsv(v1=%p, v2=%p)\n", file, line, v1, v2);
#endif
    glRectsv(v1, v2);
    GL_LogError("glRectsv", file, line);
}

static __inline GLint glRenderMode_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRenderMode(mode=0x%x)\n", file, line, mode);
#endif
    glRenderMode(mode);
    GL_LogError("glRenderMode", file, line);
}

static __inline void glRotated_DEBUG (GLdouble angle, GLdouble x, GLdouble y, GLdouble z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRotated(angle=%f, x=%f, y=%f, z=%f)\n", file, line, angle, x, y, z);
#endif
    glRotated(angle, x, y, z);
    GL_LogError("glRotated", file, line);
}

static __inline void glRotatef_DEBUG (GLfloat angle, GLfloat x, GLfloat y, GLfloat z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRotatef(angle=%f, x=%f, y=%f, z=%f)\n", file, line, angle, x, y, z);
#endif
    glRotatef(angle, x, y, z);
    GL_LogError("glRotatef", file, line);
}

static __inline void glScaled_DEBUG (GLdouble x, GLdouble y, GLdouble z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glScaled(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glScaled(x, y, z);
    GL_LogError("glScaled", file, line);
}

static __inline void glScalef_DEBUG (GLfloat x, GLfloat y, GLfloat z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glScalef(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glScalef(x, y, z);
    GL_LogError("glScalef", file, line);
}

static __inline void glScissor_DEBUG (GLint x, GLint y, GLsizei width, GLsizei height, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glScissor(x=%i, y=%i, width=0x%x, height=0x%x)\n", file, line, x, y, width, height);
#endif
    glScissor(x, y, width, height);
    GL_LogError("glScissor", file, line);
}

static __inline void glSelectBuffer_DEBUG (GLsizei size, GLuint* buffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glSelectBuffer(size=0x%x, buffer=%p)\n", file, line, size, buffer);
#endif
    glSelectBuffer(size, buffer);
    GL_LogError("glSelectBuffer", file, line);
}

static __inline void glShadeModel_DEBUG (GLenum mode, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glShadeModel(mode=0x%x)\n", file, line, mode);
#endif
    glShadeModel(mode);
    GL_LogError("glShadeModel", file, line);
}

static __inline void glStencilFunc_DEBUG (GLenum func, GLint ref, GLuint mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glStencilFunc(func=0x%x, ref=%i, mask=%i)\n", file, line, func, ref, mask);
#endif
    glStencilFunc(func, ref, mask);
    GL_LogError("glStencilFunc", file, line);
}

static __inline void glStencilMask_DEBUG (GLuint mask, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glStencilMask(mask=%i)\n", file, line, mask);
#endif
    glStencilMask(mask);
    GL_LogError("glStencilMask", file, line);
}

static __inline void glStencilOp_DEBUG (GLenum fail, GLenum zfail, GLenum zpass, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glStencilOp(fail=0x%x, zfail=0x%x, zpass=0x%x)\n", file, line, fail, zfail, zpass);
#endif
    glStencilOp(fail, zfail, zpass);
    GL_LogError("glStencilOp", file, line);
}

static __inline void glTexCoord1d_DEBUG (GLdouble s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1d(s=%f)\n", file, line, s);
#endif
    glTexCoord1d(s);
    GL_LogError("glTexCoord1d", file, line);
}

static __inline void glTexCoord1dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1dv(v=%p)\n", file, line, v);
#endif
    glTexCoord1dv(v);
    GL_LogError("glTexCoord1dv", file, line);
}

static __inline void glTexCoord1f_DEBUG (GLfloat s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1f(s=%f)\n", file, line, s);
#endif
    glTexCoord1f(s);
    GL_LogError("glTexCoord1f", file, line);
}

static __inline void glTexCoord1fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1fv(v=%p)\n", file, line, v);
#endif
    glTexCoord1fv(v);
    GL_LogError("glTexCoord1fv", file, line);
}

static __inline void glTexCoord1i_DEBUG (GLint s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1i(s=%i)\n", file, line, s);
#endif
    glTexCoord1i(s);
    GL_LogError("glTexCoord1i", file, line);
}

static __inline void glTexCoord1iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1iv(v=%p)\n", file, line, v);
#endif
    glTexCoord1iv(v);
    GL_LogError("glTexCoord1iv", file, line);
}

static __inline void glTexCoord1s_DEBUG (GLshort s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1s(s=%i)\n", file, line, s);
#endif
    glTexCoord1s(s);
    GL_LogError("glTexCoord1s", file, line);
}

static __inline void glTexCoord1sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord1sv(v=%p)\n", file, line, v);
#endif
    glTexCoord1sv(v);
    GL_LogError("glTexCoord1sv", file, line);
}

static __inline void glTexCoord2d_DEBUG (GLdouble s, GLdouble t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2d(s=%f, t=%f)\n", file, line, s, t);
#endif
    glTexCoord2d(s, t);
    GL_LogError("glTexCoord2d", file, line);
}

static __inline void glTexCoord2dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2dv(v=%p)\n", file, line, v);
#endif
    glTexCoord2dv(v);
    GL_LogError("glTexCoord2dv", file, line);
}

static __inline void glTexCoord2f_DEBUG (GLfloat s, GLfloat t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2f(s=%f, t=%f)\n", file, line, s, t);
#endif
    glTexCoord2f(s, t);
    GL_LogError("glTexCoord2f", file, line);
}

static __inline void glTexCoord2fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2fv(v=%p)\n", file, line, v);
#endif
    glTexCoord2fv(v);
    GL_LogError("glTexCoord2fv", file, line);
}

static __inline void glTexCoord2i_DEBUG (GLint s, GLint t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2i(s=%i, t=%i)\n", file, line, s, t);
#endif
    glTexCoord2i(s, t);
    GL_LogError("glTexCoord2i", file, line);
}

static __inline void glTexCoord2iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2iv(v=%p)\n", file, line, v);
#endif
    glTexCoord2iv(v);
    GL_LogError("glTexCoord2iv", file, line);
}

static __inline void glTexCoord2s_DEBUG (GLshort s, GLshort t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2s(s=%i, t=%i)\n", file, line, s, t);
#endif
    glTexCoord2s(s, t);
    GL_LogError("glTexCoord2s", file, line);
}

static __inline void glTexCoord2sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord2sv(v=%p)\n", file, line, v);
#endif
    glTexCoord2sv(v);
    GL_LogError("glTexCoord2sv", file, line);
}

static __inline void glTexCoord3d_DEBUG (GLdouble s, GLdouble t, GLdouble r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3d(s=%f, t=%f, r=%f)\n", file, line, s, t, r);
#endif
    glTexCoord3d(s, t, r);
    GL_LogError("glTexCoord3d", file, line);
}

static __inline void glTexCoord3dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3dv(v=%p)\n", file, line, v);
#endif
    glTexCoord3dv(v);
    GL_LogError("glTexCoord3dv", file, line);
}

static __inline void glTexCoord3f_DEBUG (GLfloat s, GLfloat t, GLfloat r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3f(s=%f, t=%f, r=%f)\n", file, line, s, t, r);
#endif
    glTexCoord3f(s, t, r);
    GL_LogError("glTexCoord3f", file, line);
}

static __inline void glTexCoord3fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3fv(v=%p)\n", file, line, v);
#endif
    glTexCoord3fv(v);
    GL_LogError("glTexCoord3fv", file, line);
}

static __inline void glTexCoord3i_DEBUG (GLint s, GLint t, GLint r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3i(s=%i, t=%i, r=%i)\n", file, line, s, t, r);
#endif
    glTexCoord3i(s, t, r);
    GL_LogError("glTexCoord3i", file, line);
}

static __inline void glTexCoord3iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3iv(v=%p)\n", file, line, v);
#endif
    glTexCoord3iv(v);
    GL_LogError("glTexCoord3iv", file, line);
}

static __inline void glTexCoord3s_DEBUG (GLshort s, GLshort t, GLshort r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3s(s=%i, t=%i, r=%i)\n", file, line, s, t, r);
#endif
    glTexCoord3s(s, t, r);
    GL_LogError("glTexCoord3s", file, line);
}

static __inline void glTexCoord3sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord3sv(v=%p)\n", file, line, v);
#endif
    glTexCoord3sv(v);
    GL_LogError("glTexCoord3sv", file, line);
}

static __inline void glTexCoord4d_DEBUG (GLdouble s, GLdouble t, GLdouble r, GLdouble q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4d(s=%f, t=%f, r=%f, q=%f)\n", file, line, s, t, r, q);
#endif
    glTexCoord4d(s, t, r, q);
    GL_LogError("glTexCoord4d", file, line);
}

static __inline void glTexCoord4dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4dv(v=%p)\n", file, line, v);
#endif
    glTexCoord4dv(v);
    GL_LogError("glTexCoord4dv", file, line);
}

static __inline void glTexCoord4f_DEBUG (GLfloat s, GLfloat t, GLfloat r, GLfloat q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4f(s=%f, t=%f, r=%f, q=%f)\n", file, line, s, t, r, q);
#endif
    glTexCoord4f(s, t, r, q);
    GL_LogError("glTexCoord4f", file, line);
}

static __inline void glTexCoord4fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4fv(v=%p)\n", file, line, v);
#endif
    glTexCoord4fv(v);
    GL_LogError("glTexCoord4fv", file, line);
}

static __inline void glTexCoord4i_DEBUG (GLint s, GLint t, GLint r, GLint q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4i(s=%i, t=%i, r=%i, q=%i)\n", file, line, s, t, r, q);
#endif
    glTexCoord4i(s, t, r, q);
    GL_LogError("glTexCoord4i", file, line);
}

static __inline void glTexCoord4iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4iv(v=%p)\n", file, line, v);
#endif
    glTexCoord4iv(v);
    GL_LogError("glTexCoord4iv", file, line);
}

static __inline void glTexCoord4s_DEBUG (GLshort s, GLshort t, GLshort r, GLshort q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4s(s=%i, t=%i, r=%i, q=%i)\n", file, line, s, t, r, q);
#endif
    glTexCoord4s(s, t, r, q);
    GL_LogError("glTexCoord4s", file, line);
}

static __inline void glTexCoord4sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoord4sv(v=%p)\n", file, line, v);
#endif
    glTexCoord4sv(v);
    GL_LogError("glTexCoord4sv", file, line);
}

static __inline void glTexCoordPointer_DEBUG (GLint size, GLenum type, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexCoordPointer(size=%i, type=0x%x, stride=0x%x, pointer=%p)\n", file, line, size, type, stride, pointer);
#endif
    glTexCoordPointer(size, type, stride, pointer);
    GL_LogError("glTexCoordPointer", file, line);
}

static __inline void glTexEnvf_DEBUG (GLenum target, GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexEnvf(target=0x%x, pname=0x%x, param=%f)\n", file, line, target, pname, param);
#endif
    glTexEnvf(target, pname, param);
    GL_LogError("glTexEnvf", file, line);
}

static __inline void glTexEnvfv_DEBUG (GLenum target, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexEnvfv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glTexEnvfv(target, pname, params);
    GL_LogError("glTexEnvfv", file, line);
}

static __inline void glTexEnvi_DEBUG (GLenum target, GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexEnvi(target=0x%x, pname=0x%x, param=%i)\n", file, line, target, pname, param);
#endif
    glTexEnvi(target, pname, param);
    GL_LogError("glTexEnvi", file, line);
}

static __inline void glTexEnviv_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexEnviv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glTexEnviv(target, pname, params);
    GL_LogError("glTexEnviv", file, line);
}

static __inline void glTexGend_DEBUG (GLenum coord, GLenum pname, GLdouble param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexGend(coord=0x%x, pname=0x%x, param=%f)\n", file, line, coord, pname, param);
#endif
    glTexGend(coord, pname, param);
    GL_LogError("glTexGend", file, line);
}

static __inline void glTexGendv_DEBUG (GLenum coord, GLenum pname, GLdouble* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexGendv(coord=0x%x, pname=0x%x, params=%p)\n", file, line, coord, pname, params);
#endif
    glTexGendv(coord, pname, params);
    GL_LogError("glTexGendv", file, line);
}

static __inline void glTexGenf_DEBUG (GLenum coord, GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexGenf(coord=0x%x, pname=0x%x, param=%f)\n", file, line, coord, pname, param);
#endif
    glTexGenf(coord, pname, param);
    GL_LogError("glTexGenf", file, line);
}

static __inline void glTexGenfv_DEBUG (GLenum coord, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexGenfv(coord=0x%x, pname=0x%x, params=%p)\n", file, line, coord, pname, params);
#endif
    glTexGenfv(coord, pname, params);
    GL_LogError("glTexGenfv", file, line);
}

static __inline void glTexGeni_DEBUG (GLenum coord, GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexGeni(coord=0x%x, pname=0x%x, param=%i)\n", file, line, coord, pname, param);
#endif
    glTexGeni(coord, pname, param);
    GL_LogError("glTexGeni", file, line);
}

static __inline void glTexGeniv_DEBUG (GLenum coord, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexGeniv(coord=0x%x, pname=0x%x, params=%p)\n", file, line, coord, pname, params);
#endif
    glTexGeniv(coord, pname, params);
    GL_LogError("glTexGeniv", file, line);
}

static __inline void glTexImage1D_DEBUG (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexImage1D(target=0x%x, level=%i, internalformat=%i, width=0x%x, border=%i, format=0x%x, type=0x%x, pixels=%p)\n", file, line, target, level, internalformat, width, border, format, type, pixels);
#endif
    glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
    GL_LogError("glTexImage1D", file, line);
}

static __inline void glTexImage2D_DEBUG (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexImage2D(target=0x%x, level=%i, internalformat=%i, width=0x%x, height=0x%x, border=%i, format=0x%x, type=0x%x, pixels=%p)\n", file, line, target, level, internalformat, width, height, border, format, type, pixels);
#endif
    glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    GL_LogError("glTexImage2D", file, line);
}

static __inline void glTexParameterf_DEBUG (GLenum target, GLenum pname, GLfloat param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexParameterf(target=0x%x, pname=0x%x, param=%f)\n", file, line, target, pname, param);
#endif
    glTexParameterf(target, pname, param);
    GL_LogError("glTexParameterf", file, line);
}

static __inline void glTexParameterfv_DEBUG (GLenum target, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexParameterfv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glTexParameterfv(target, pname, params);
    GL_LogError("glTexParameterfv", file, line);
}

static __inline void glTexParameteri_DEBUG (GLenum target, GLenum pname, GLint param, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexParameteri(target=0x%x, pname=0x%x, param=%i)\n", file, line, target, pname, param);
#endif
    glTexParameteri(target, pname, param);
    GL_LogError("glTexParameteri", file, line);
}

static __inline void glTexParameteriv_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexParameteriv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    glTexParameteriv(target, pname, params);
    GL_LogError("glTexParameteriv", file, line);
}

static __inline void glTexSubImage1D_DEBUG (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexSubImage1D(target=0x%x, level=%i, xoffset=%i, width=0x%x, format=0x%x, type=0x%x, pixels=%p)\n", file, line, target, level, xoffset, width, format, type, pixels);
#endif
    glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
    GL_LogError("glTexSubImage1D", file, line);
}

static __inline void glTexSubImage2D_DEBUG (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTexSubImage2D(target=0x%x, level=%i, xoffset=%i, yoffset=%i, width=0x%x, height=0x%x, format=0x%x, type=0x%x, pixels=%p)\n", file, line, target, level, xoffset, yoffset, width, height, format, type, pixels);
#endif
    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
    GL_LogError("glTexSubImage2D", file, line);
}

static __inline void glTranslated_DEBUG (GLdouble x, GLdouble y, GLdouble z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTranslated(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glTranslated(x, y, z);
    GL_LogError("glTranslated", file, line);
}

static __inline void glTranslatef_DEBUG (GLfloat x, GLfloat y, GLfloat z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glTranslatef(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glTranslatef(x, y, z);
    GL_LogError("glTranslatef", file, line);
}

static __inline void glVertex2d_DEBUG (GLdouble x, GLdouble y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2d(x=%f, y=%f)\n", file, line, x, y);
#endif
    glVertex2d(x, y);
    GL_LogError("glVertex2d", file, line);
}

static __inline void glVertex2dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2dv(v=%p)\n", file, line, v);
#endif
    glVertex2dv(v);
    GL_LogError("glVertex2dv", file, line);
}

static __inline void glVertex2f_DEBUG (GLfloat x, GLfloat y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2f(x=%f, y=%f)\n", file, line, x, y);
#endif
    glVertex2f(x, y);
    GL_LogError("glVertex2f", file, line);
}

static __inline void glVertex2fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2fv(v=%p)\n", file, line, v);
#endif
    glVertex2fv(v);
    GL_LogError("glVertex2fv", file, line);
}

static __inline void glVertex2i_DEBUG (GLint x, GLint y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2i(x=%i, y=%i)\n", file, line, x, y);
#endif
    glVertex2i(x, y);
    GL_LogError("glVertex2i", file, line);
}

static __inline void glVertex2iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2iv(v=%p)\n", file, line, v);
#endif
    glVertex2iv(v);
    GL_LogError("glVertex2iv", file, line);
}

static __inline void glVertex2s_DEBUG (GLshort x, GLshort y, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2s(x=%i, y=%i)\n", file, line, x, y);
#endif
    glVertex2s(x, y);
    GL_LogError("glVertex2s", file, line);
}

static __inline void glVertex2sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex2sv(v=%p)\n", file, line, v);
#endif
    glVertex2sv(v);
    GL_LogError("glVertex2sv", file, line);
}

static __inline void glVertex3d_DEBUG (GLdouble x, GLdouble y, GLdouble z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3d(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glVertex3d(x, y, z);
    GL_LogError("glVertex3d", file, line);
}

static __inline void glVertex3dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3dv(v=%p)\n", file, line, v);
#endif
    glVertex3dv(v);
    GL_LogError("glVertex3dv", file, line);
}

static __inline void glVertex3f_DEBUG (GLfloat x, GLfloat y, GLfloat z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3f(x=%f, y=%f, z=%f)\n", file, line, x, y, z);
#endif
    glVertex3f(x, y, z);
    GL_LogError("glVertex3f", file, line);
}

static __inline void glVertex3fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3fv(v=%p)\n", file, line, v);
#endif
    glVertex3fv(v);
    GL_LogError("glVertex3fv", file, line);
}

static __inline void glVertex3i_DEBUG (GLint x, GLint y, GLint z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3i(x=%i, y=%i, z=%i)\n", file, line, x, y, z);
#endif
    glVertex3i(x, y, z);
    GL_LogError("glVertex3i", file, line);
}

static __inline void glVertex3iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3iv(v=%p)\n", file, line, v);
#endif
    glVertex3iv(v);
    GL_LogError("glVertex3iv", file, line);
}

static __inline void glVertex3s_DEBUG (GLshort x, GLshort y, GLshort z, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3s(x=%i, y=%i, z=%i)\n", file, line, x, y, z);
#endif
    glVertex3s(x, y, z);
    GL_LogError("glVertex3s", file, line);
}

static __inline void glVertex3sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex3sv(v=%p)\n", file, line, v);
#endif
    glVertex3sv(v);
    GL_LogError("glVertex3sv", file, line);
}

static __inline void glVertex4d_DEBUG (GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4d(x=%f, y=%f, z=%f, w=%f)\n", file, line, x, y, z, w);
#endif
    glVertex4d(x, y, z, w);
    GL_LogError("glVertex4d", file, line);
}

static __inline void glVertex4dv_DEBUG (GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4dv(v=%p)\n", file, line, v);
#endif
    glVertex4dv(v);
    GL_LogError("glVertex4dv", file, line);
}

static __inline void glVertex4f_DEBUG (GLfloat x, GLfloat y, GLfloat z, GLfloat w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4f(x=%f, y=%f, z=%f, w=%f)\n", file, line, x, y, z, w);
#endif
    glVertex4f(x, y, z, w);
    GL_LogError("glVertex4f", file, line);
}

static __inline void glVertex4fv_DEBUG (GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4fv(v=%p)\n", file, line, v);
#endif
    glVertex4fv(v);
    GL_LogError("glVertex4fv", file, line);
}

static __inline void glVertex4i_DEBUG (GLint x, GLint y, GLint z, GLint w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4i(x=%i, y=%i, z=%i, w=%i)\n", file, line, x, y, z, w);
#endif
    glVertex4i(x, y, z, w);
    GL_LogError("glVertex4i", file, line);
}

static __inline void glVertex4iv_DEBUG (GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4iv(v=%p)\n", file, line, v);
#endif
    glVertex4iv(v);
    GL_LogError("glVertex4iv", file, line);
}

static __inline void glVertex4s_DEBUG (GLshort x, GLshort y, GLshort z, GLshort w, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4s(x=%i, y=%i, z=%i, w=%i)\n", file, line, x, y, z, w);
#endif
    glVertex4s(x, y, z, w);
    GL_LogError("glVertex4s", file, line);
}

static __inline void glVertex4sv_DEBUG (GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertex4sv(v=%p)\n", file, line, v);
#endif
    glVertex4sv(v);
    GL_LogError("glVertex4sv", file, line);
}

static __inline void glVertexPointer_DEBUG (GLint size, GLenum type, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glVertexPointer(size=%i, type=0x%x, stride=0x%x, pointer=%p)\n", file, line, size, type, stride, pointer);
#endif
    glVertexPointer(size, type, stride, pointer);
    GL_LogError("glVertexPointer", file, line);
}

static __inline void glViewport_DEBUG (GLint x, GLint y, GLsizei width, GLsizei height, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glViewport(x=%i, y=%i, width=0x%x, height=0x%x)\n", file, line, x, y, width, height);
#endif
    glViewport(x, y, width, height);
    GL_LogError("glViewport", file, line);
}


#define dglAccum(op, value) glAccum_DEBUG(op, value, __FILE__, __LINE__)
#define dglAlphaFunc(func, ref) glAlphaFunc_DEBUG(func, ref, __FILE__, __LINE__)
#define dglAreTexturesResident(n, textures, residences) glAreTexturesResident_DEBUG(n, textures, residences, __FILE__, __LINE__)
#define dglArrayElement(i) glArrayElement_DEBUG(i, __FILE__, __LINE__)
#define dglBegin(mode) glBegin_DEBUG(mode, __FILE__, __LINE__)
#define dglBindTexture(target, texture) glBindTexture_DEBUG(target, texture, __FILE__, __LINE__)
#define dglBitmap(width, height, xorig, yorig, xmove, ymove, bitmap) glBitmap_DEBUG(width, height, xorig, yorig, xmove, ymove, bitmap, __FILE__, __LINE__)
#define dglBlendFunc(sfactor, dfactor) glBlendFunc_DEBUG(sfactor, dfactor, __FILE__, __LINE__)
#define dglCallList(list) glCallList_DEBUG(list, __FILE__, __LINE__)
#define dglCallLists(n, type, lists) glCallLists_DEBUG(n, type, lists, __FILE__, __LINE__)
#define dglClear(mask) glClear_DEBUG(mask, __FILE__, __LINE__)
#define dglClearAccum(red, green, blue, alpha) glClearAccum_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglClearColor(red, green, blue, alpha) glClearColor_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglClearDepth(depth) glClearDepth_DEBUG(depth, __FILE__, __LINE__)
#define dglClearIndex(c) glClearIndex_DEBUG(c, __FILE__, __LINE__)
#define dglClearStencil(s) glClearStencil_DEBUG(s, __FILE__, __LINE__)
#define dglClipPlane(plane, equation) glClipPlane_DEBUG(plane, equation, __FILE__, __LINE__)
#define dglColor3b(red, green, blue) glColor3b_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3bv(v) glColor3bv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3d(red, green, blue) glColor3d_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3dv(v) glColor3dv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3f(red, green, blue) glColor3f_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3fv(v) glColor3fv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3i(red, green, blue) glColor3i_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3iv(v) glColor3iv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3s(red, green, blue) glColor3s_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3sv(v) glColor3sv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3ub(red, green, blue) glColor3ub_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3ubv(v) glColor3ubv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3ui(red, green, blue) glColor3ui_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3uiv(v) glColor3uiv_DEBUG(v, __FILE__, __LINE__)
#define dglColor3us(red, green, blue) glColor3us_DEBUG(red, green, blue, __FILE__, __LINE__)
#define dglColor3usv(v) glColor3usv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4b(red, green, blue, alpha) glColor4b_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4bv(v) glColor4bv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4d(red, green, blue, alpha) glColor4d_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4dv(v) glColor4dv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4f(red, green, blue, alpha) glColor4f_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4fv(v) glColor4fv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4i(red, green, blue, alpha) glColor4i_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4iv(v) glColor4iv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4s(red, green, blue, alpha) glColor4s_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4sv(v) glColor4sv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4ub(red, green, blue, alpha) glColor4ub_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4ubv(v) glColor4ubv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4ui(red, green, blue, alpha) glColor4ui_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4uiv(v) glColor4uiv_DEBUG(v, __FILE__, __LINE__)
#define dglColor4us(red, green, blue, alpha) glColor4us_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColor4usv(v) glColor4usv_DEBUG(v, __FILE__, __LINE__)
#define dglColorMask(red, green, blue, alpha) glColorMask_DEBUG(red, green, blue, alpha, __FILE__, __LINE__)
#define dglColorMaterial(face, mode) glColorMaterial_DEBUG(face, mode, __FILE__, __LINE__)
#define dglColorPointer(size, type, stride, pointer) glColorPointer_DEBUG(size, type, stride, pointer, __FILE__, __LINE__)
#define dglCopyPixels(x, y, width, height, type) glCopyPixels_DEBUG(x, y, width, height, type, __FILE__, __LINE__)
#define dglCopyTexImage1D(target, level, internalFormat, x, y, width, border) glCopyTexImage1D_DEBUG(target, level, internalFormat, x, y, width, border, __FILE__, __LINE__)
#define dglCopyTexImage2D(target, level, internalFormat, x, y, width, height, border) glCopyTexImage2D_DEBUG(target, level, internalFormat, x, y, width, height, border, __FILE__, __LINE__)
#define dglCopyTexSubImage1D(target, level, xoffset, x, y, width) glCopyTexSubImage1D_DEBUG(target, level, xoffset, x, y, width, __FILE__, __LINE__)
#define dglCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) glCopyTexSubImage2D_DEBUG(target, level, xoffset, yoffset, x, y, width, height, __FILE__, __LINE__)
#define dglCullFace(mode) glCullFace_DEBUG(mode, __FILE__, __LINE__)
#define dglDeleteLists(list, range) glDeleteLists_DEBUG(list, range, __FILE__, __LINE__)
#define dglDeleteTextures(n, textures) glDeleteTextures_DEBUG(n, textures, __FILE__, __LINE__)
#define dglDepthFunc(func) glDepthFunc_DEBUG(func, __FILE__, __LINE__)
#define dglDepthMask(flag) glDepthMask_DEBUG(flag, __FILE__, __LINE__)
#define dglDepthRange(zNear, zFar) glDepthRange_DEBUG(zNear, zFar, __FILE__, __LINE__)
#define dglDisable(cap) glDisable_DEBUG(cap, __FILE__, __LINE__)
#define dglDisableClientState(array) glDisableClientState_DEBUG(array, __FILE__, __LINE__)
#define dglDrawArrays(mode, first, count) glDrawArrays_DEBUG(mode, first, count, __FILE__, __LINE__)
#define dglDrawBuffer(mode) glDrawBuffer_DEBUG(mode, __FILE__, __LINE__)
#define dglDrawElements(mode, count, type, indices) glDrawElements_DEBUG(mode, count, type, indices, __FILE__, __LINE__)
#define dglDrawPixels(width, height, format, type, pixels) glDrawPixels_DEBUG(width, height, format, type, pixels, __FILE__, __LINE__)
#define dglEdgeFlag(flag) glEdgeFlag_DEBUG(flag, __FILE__, __LINE__)
#define dglEdgeFlagPointer(stride, pointer) glEdgeFlagPointer_DEBUG(stride, pointer, __FILE__, __LINE__)
#define dglEdgeFlagv(flag) glEdgeFlagv_DEBUG(flag, __FILE__, __LINE__)
#define dglEnable(cap) glEnable_DEBUG(cap, __FILE__, __LINE__)
#define dglEnableClientState(array) glEnableClientState_DEBUG(array, __FILE__, __LINE__)
#define dglEnd() glEnd_DEBUG(__FILE__, __LINE__)
#define dglEndList() glEndList_DEBUG(__FILE__, __LINE__)
#define dglEvalCoord1d(u) glEvalCoord1d_DEBUG(u, __FILE__, __LINE__)
#define dglEvalCoord1dv(u) glEvalCoord1dv_DEBUG(u, __FILE__, __LINE__)
#define dglEvalCoord1f(u) glEvalCoord1f_DEBUG(u, __FILE__, __LINE__)
#define dglEvalCoord1fv(u) glEvalCoord1fv_DEBUG(u, __FILE__, __LINE__)
#define dglEvalCoord2d(u, v) glEvalCoord2d_DEBUG(u, v, __FILE__, __LINE__)
#define dglEvalCoord2dv(u) glEvalCoord2dv_DEBUG(u, __FILE__, __LINE__)
#define dglEvalCoord2f(u, v) glEvalCoord2f_DEBUG(u, v, __FILE__, __LINE__)
#define dglEvalCoord2fv(u) glEvalCoord2fv_DEBUG(u, __FILE__, __LINE__)
#define dglEvalMesh1(mode, i1, i2) glEvalMesh1_DEBUG(mode, i1, i2, __FILE__, __LINE__)
#define dglEvalMesh2(mode, i1, i2, j1, j2) glEvalMesh2_DEBUG(mode, i1, i2, j1, j2, __FILE__, __LINE__)
#define dglEvalPoint1(i) glEvalPoint1_DEBUG(i, __FILE__, __LINE__)
#define dglEvalPoint2(i, j) glEvalPoint2_DEBUG(i, j, __FILE__, __LINE__)
#define dglFeedbackBuffer(size, type, buffer) glFeedbackBuffer_DEBUG(size, type, buffer, __FILE__, __LINE__)
#define dglFinish() glFinish_DEBUG(__FILE__, __LINE__)
#define dglFlush() glFlush_DEBUG(__FILE__, __LINE__)
#define dglFogf(pname, param) glFogf_DEBUG(pname, param, __FILE__, __LINE__)
#define dglFogfv(pname, params) glFogfv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglFogi(pname, param) glFogi_DEBUG(pname, param, __FILE__, __LINE__)
#define dglFogiv(pname, params) glFogiv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglFrontFace(mode) glFrontFace_DEBUG(mode, __FILE__, __LINE__)
#define dglFrustum(left, right, bottom, top, zNear, zFar) glFrustum_DEBUG(left, right, bottom, top, zNear, zFar, __FILE__, __LINE__)
#define dglGenLists(range) glGenLists_DEBUG(range, __FILE__, __LINE__)
#define dglGenTextures(n, textures) glGenTextures_DEBUG(n, textures, __FILE__, __LINE__)
#define dglGetBooleanv(pname, params) glGetBooleanv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglGetClipPlane(plane, equation) glGetClipPlane_DEBUG(plane, equation, __FILE__, __LINE__)
#define dglGetDoublev(pname, params) glGetDoublev_DEBUG(pname, params, __FILE__, __LINE__)
#define dglGetError() glGetError_DEBUG(__FILE__, __LINE__)
#define dglGetFloatv(pname, params) glGetFloatv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglGetIntegerv(pname, params) glGetIntegerv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglGetLightfv(light, pname, params) glGetLightfv_DEBUG(light, pname, params, __FILE__, __LINE__)
#define dglGetLightiv(light, pname, params) glGetLightiv_DEBUG(light, pname, params, __FILE__, __LINE__)
#define dglGetMapdv(target, query, v) glGetMapdv_DEBUG(target, query, v, __FILE__, __LINE__)
#define dglGetMapfv(target, query, v) glGetMapfv_DEBUG(target, query, v, __FILE__, __LINE__)
#define dglGetMapiv(target, query, v) glGetMapiv_DEBUG(target, query, v, __FILE__, __LINE__)
#define dglGetMaterialfv(face, pname, params) glGetMaterialfv_DEBUG(face, pname, params, __FILE__, __LINE__)
#define dglGetMaterialiv(face, pname, params) glGetMaterialiv_DEBUG(face, pname, params, __FILE__, __LINE__)
#define dglGetPixelMapfv(map, values) glGetPixelMapfv_DEBUG(map, values, __FILE__, __LINE__)
#define dglGetPixelMapuiv(map, values) glGetPixelMapuiv_DEBUG(map, values, __FILE__, __LINE__)
#define dglGetPixelMapusv(map, values) glGetPixelMapusv_DEBUG(map, values, __FILE__, __LINE__)
#define dglGetPointerv(pname, params) glGetPointerv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglGetPolygonStipple(mask) glGetPolygonStipple_DEBUG(mask, __FILE__, __LINE__)
#define dglGetTexEnvfv(target, pname, params) glGetTexEnvfv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglGetTexEnviv(target, pname, params) glGetTexEnviv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglGetTexGendv(coord, pname, params) glGetTexGendv_DEBUG(coord, pname, params, __FILE__, __LINE__)
#define dglGetTexGenfv(coord, pname, params) glGetTexGenfv_DEBUG(coord, pname, params, __FILE__, __LINE__)
#define dglGetTexGeniv(coord, pname, params) glGetTexGeniv_DEBUG(coord, pname, params, __FILE__, __LINE__)
#define dglGetTexImage(target, level, format, type, pixels) glGetTexImage_DEBUG(target, level, format, type, pixels, __FILE__, __LINE__)
#define dglGetTexLevelParameterfv(target, level, pname, params) glGetTexLevelParameterfv_DEBUG(target, level, pname, params, __FILE__, __LINE__)
#define dglGetTexLevelParameteriv(target, level, pname, params) glGetTexLevelParameteriv_DEBUG(target, level, pname, params, __FILE__, __LINE__)
#define dglGetTexParameterfv(target, pname, params) glGetTexParameterfv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglGetTexParameteriv(target, pname, params) glGetTexParameteriv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglHint(target, mode) glHint_DEBUG(target, mode, __FILE__, __LINE__)
#define dglIndexMask(mask) glIndexMask_DEBUG(mask, __FILE__, __LINE__)
#define dglIndexPointer(type, stride, pointer) glIndexPointer_DEBUG(type, stride, pointer, __FILE__, __LINE__)
#define dglIndexd(c) glIndexd_DEBUG(c, __FILE__, __LINE__)
#define dglIndexdv(c) glIndexdv_DEBUG(c, __FILE__, __LINE__)
#define dglIndexf(c) glIndexf_DEBUG(c, __FILE__, __LINE__)
#define dglIndexfv(c) glIndexfv_DEBUG(c, __FILE__, __LINE__)
#define dglIndexi(c) glIndexi_DEBUG(c, __FILE__, __LINE__)
#define dglIndexiv(c) glIndexiv_DEBUG(c, __FILE__, __LINE__)
#define dglIndexs(c) glIndexs_DEBUG(c, __FILE__, __LINE__)
#define dglIndexsv(c) glIndexsv_DEBUG(c, __FILE__, __LINE__)
#define dglIndexub(c) glIndexub_DEBUG(c, __FILE__, __LINE__)
#define dglIndexubv(c) glIndexubv_DEBUG(c, __FILE__, __LINE__)
#define dglInitNames() glInitNames_DEBUG(__FILE__, __LINE__)
#define dglInterleavedArrays(format, stride, pointer) glInterleavedArrays_DEBUG(format, stride, pointer, __FILE__, __LINE__)
#define dglIsEnabled(cap) glIsEnabled_DEBUG(cap, __FILE__, __LINE__)
#define dglIsList(list) glIsList_DEBUG(list, __FILE__, __LINE__)
#define dglIsTexture(texture) glIsTexture_DEBUG(texture, __FILE__, __LINE__)
#define dglLightModelf(pname, param) glLightModelf_DEBUG(pname, param, __FILE__, __LINE__)
#define dglLightModelfv(pname, params) glLightModelfv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglLightModeli(pname, param) glLightModeli_DEBUG(pname, param, __FILE__, __LINE__)
#define dglLightModeliv(pname, params) glLightModeliv_DEBUG(pname, params, __FILE__, __LINE__)
#define dglLightf(light, pname, param) glLightf_DEBUG(light, pname, param, __FILE__, __LINE__)
#define dglLightfv(light, pname, params) glLightfv_DEBUG(light, pname, params, __FILE__, __LINE__)
#define dglLighti(light, pname, param) glLighti_DEBUG(light, pname, param, __FILE__, __LINE__)
#define dglLightiv(light, pname, params) glLightiv_DEBUG(light, pname, params, __FILE__, __LINE__)
#define dglLineStipple(factor, pattern) glLineStipple_DEBUG(factor, pattern, __FILE__, __LINE__)
#define dglLineWidth(width) glLineWidth_DEBUG(width, __FILE__, __LINE__)
#define dglListBase(base) glListBase_DEBUG(base, __FILE__, __LINE__)
#define dglLoadIdentity() glLoadIdentity_DEBUG(__FILE__, __LINE__)
#define dglLoadMatrixd(m) glLoadMatrixd_DEBUG(m, __FILE__, __LINE__)
#define dglLoadMatrixf(m) glLoadMatrixf_DEBUG(m, __FILE__, __LINE__)
#define dglLoadName(name) glLoadName_DEBUG(name, __FILE__, __LINE__)
#define dglLogicOp(opcode) glLogicOp_DEBUG(opcode, __FILE__, __LINE__)
#define dglMap1d(target, u1, u2, stride, order, points) glMap1d_DEBUG(target, u1, u2, stride, order, points, __FILE__, __LINE__)
#define dglMap1f(target, u1, u2, stride, order, points) glMap1f_DEBUG(target, u1, u2, stride, order, points, __FILE__, __LINE__)
#define dglMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points) glMap2d_DEBUG(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points, __FILE__, __LINE__)
#define dglMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points) glMap2f_DEBUG(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points, __FILE__, __LINE__)
#define dglMapGrid1d(un, u1, u2) glMapGrid1d_DEBUG(un, u1, u2, __FILE__, __LINE__)
#define dglMapGrid1f(un, u1, u2) glMapGrid1f_DEBUG(un, u1, u2, __FILE__, __LINE__)
#define dglMapGrid2d(un, u1, u2, vn, v1, v2) glMapGrid2d_DEBUG(un, u1, u2, vn, v1, v2, __FILE__, __LINE__)
#define dglMapGrid2f(un, u1, u2, vn, v1, v2) glMapGrid2f_DEBUG(un, u1, u2, vn, v1, v2, __FILE__, __LINE__)
#define dglMaterialf(face, pname, param) glMaterialf_DEBUG(face, pname, param, __FILE__, __LINE__)
#define dglMaterialfv(face, pname, params) glMaterialfv_DEBUG(face, pname, params, __FILE__, __LINE__)
#define dglMateriali(face, pname, param) glMateriali_DEBUG(face, pname, param, __FILE__, __LINE__)
#define dglMaterialiv(face, pname, params) glMaterialiv_DEBUG(face, pname, params, __FILE__, __LINE__)
#define dglMatrixMode(mode) glMatrixMode_DEBUG(mode, __FILE__, __LINE__)
#define dglMultMatrixd(m) glMultMatrixd_DEBUG(m, __FILE__, __LINE__)
#define dglMultMatrixf(m) glMultMatrixf_DEBUG(m, __FILE__, __LINE__)
#define dglNewList(list, mode) glNewList_DEBUG(list, mode, __FILE__, __LINE__)
#define dglNormal3b(nx, ny, nz) glNormal3b_DEBUG(nx, ny, nz, __FILE__, __LINE__)
#define dglNormal3bv(v) glNormal3bv_DEBUG(v, __FILE__, __LINE__)
#define dglNormal3d(nx, ny, nz) glNormal3d_DEBUG(nx, ny, nz, __FILE__, __LINE__)
#define dglNormal3dv(v) glNormal3dv_DEBUG(v, __FILE__, __LINE__)
#define dglNormal3f(nx, ny, nz) glNormal3f_DEBUG(nx, ny, nz, __FILE__, __LINE__)
#define dglNormal3fv(v) glNormal3fv_DEBUG(v, __FILE__, __LINE__)
#define dglNormal3i(nx, ny, nz) glNormal3i_DEBUG(nx, ny, nz, __FILE__, __LINE__)
#define dglNormal3iv(v) glNormal3iv_DEBUG(v, __FILE__, __LINE__)
#define dglNormal3s(nx, ny, nz) glNormal3s_DEBUG(nx, ny, nz, __FILE__, __LINE__)
#define dglNormal3sv(v) glNormal3sv_DEBUG(v, __FILE__, __LINE__)
#define dglNormalPointer(type, stride, pointer) glNormalPointer_DEBUG(type, stride, pointer, __FILE__, __LINE__)
#define dglOrtho(left, right, bottom, top, zNear, zFar) glOrtho_DEBUG(left, right, bottom, top, zNear, zFar, __FILE__, __LINE__)
#define dglPassThrough(token) glPassThrough_DEBUG(token, __FILE__, __LINE__)
#define dglPixelMapfv(map, mapsize, values) glPixelMapfv_DEBUG(map, mapsize, values, __FILE__, __LINE__)
#define dglPixelMapuiv(map, mapsize, values) glPixelMapuiv_DEBUG(map, mapsize, values, __FILE__, __LINE__)
#define dglPixelMapusv(map, mapsize, values) glPixelMapusv_DEBUG(map, mapsize, values, __FILE__, __LINE__)
#define dglPixelStoref(pname, param) glPixelStoref_DEBUG(pname, param, __FILE__, __LINE__)
#define dglPixelStorei(pname, param) glPixelStorei_DEBUG(pname, param, __FILE__, __LINE__)
#define dglPixelTransferf(pname, param) glPixelTransferf_DEBUG(pname, param, __FILE__, __LINE__)
#define dglPixelTransferi(pname, param) glPixelTransferi_DEBUG(pname, param, __FILE__, __LINE__)
#define dglPixelZoom(xfactor, yfactor) glPixelZoom_DEBUG(xfactor, yfactor, __FILE__, __LINE__)
#define dglPointSize(size) glPointSize_DEBUG(size, __FILE__, __LINE__)
#define dglPolygonMode(face, mode) glPolygonMode_DEBUG(face, mode, __FILE__, __LINE__)
#define dglPolygonOffset(factor, units) glPolygonOffset_DEBUG(factor, units, __FILE__, __LINE__)
#define dglPolygonStipple(mask) glPolygonStipple_DEBUG(mask, __FILE__, __LINE__)
#define dglPopAttrib() glPopAttrib_DEBUG(__FILE__, __LINE__)
#define dglPopClientAttrib() glPopClientAttrib_DEBUG(__FILE__, __LINE__)
#define dglPopMatrix() glPopMatrix_DEBUG(__FILE__, __LINE__)
#define dglPopName() glPopName_DEBUG(__FILE__, __LINE__)
#define dglPrioritizeTextures(n, textures, priorities) glPrioritizeTextures_DEBUG(n, textures, priorities, __FILE__, __LINE__)
#define dglPushAttrib(mask) glPushAttrib_DEBUG(mask, __FILE__, __LINE__)
#define dglPushClientAttrib(mask) glPushClientAttrib_DEBUG(mask, __FILE__, __LINE__)
#define dglPushMatrix() glPushMatrix_DEBUG(__FILE__, __LINE__)
#define dglPushName(name) glPushName_DEBUG(name, __FILE__, __LINE__)
#define dglRasterPos2d(x, y) glRasterPos2d_DEBUG(x, y, __FILE__, __LINE__)
#define dglRasterPos2dv(v) glRasterPos2dv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos2f(x, y) glRasterPos2f_DEBUG(x, y, __FILE__, __LINE__)
#define dglRasterPos2fv(v) glRasterPos2fv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos2i(x, y) glRasterPos2i_DEBUG(x, y, __FILE__, __LINE__)
#define dglRasterPos2iv(v) glRasterPos2iv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos2s(x, y) glRasterPos2s_DEBUG(x, y, __FILE__, __LINE__)
#define dglRasterPos2sv(v) glRasterPos2sv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos3d(x, y, z) glRasterPos3d_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglRasterPos3dv(v) glRasterPos3dv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos3f(x, y, z) glRasterPos3f_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglRasterPos3fv(v) glRasterPos3fv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos3i(x, y, z) glRasterPos3i_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglRasterPos3iv(v) glRasterPos3iv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos3s(x, y, z) glRasterPos3s_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglRasterPos3sv(v) glRasterPos3sv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos4d(x, y, z, w) glRasterPos4d_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglRasterPos4dv(v) glRasterPos4dv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos4f(x, y, z, w) glRasterPos4f_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglRasterPos4fv(v) glRasterPos4fv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos4i(x, y, z, w) glRasterPos4i_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglRasterPos4iv(v) glRasterPos4iv_DEBUG(v, __FILE__, __LINE__)
#define dglRasterPos4s(x, y, z, w) glRasterPos4s_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglRasterPos4sv(v) glRasterPos4sv_DEBUG(v, __FILE__, __LINE__)
#define dglReadBuffer(mode) glReadBuffer_DEBUG(mode, __FILE__, __LINE__)
#define dglReadPixels(x, y, width, height, format, type, pixels) glReadPixels_DEBUG(x, y, width, height, format, type, pixels, __FILE__, __LINE__)
#define dglRectd(x1, y1, x2, y2) glRectd_DEBUG(x1, y1, x2, y2, __FILE__, __LINE__)
#define dglRectdv(v1, v2) glRectdv_DEBUG(v1, v2, __FILE__, __LINE__)
#define dglRectf(x1, y1, x2, y2) glRectf_DEBUG(x1, y1, x2, y2, __FILE__, __LINE__)
#define dglRectfv(v1, v2) glRectfv_DEBUG(v1, v2, __FILE__, __LINE__)
#define dglRecti(x1, y1, x2, y2) glRecti_DEBUG(x1, y1, x2, y2, __FILE__, __LINE__)
#define dglRectiv(v1, v2) glRectiv_DEBUG(v1, v2, __FILE__, __LINE__)
#define dglRects(x1, y1, x2, y2) glRects_DEBUG(x1, y1, x2, y2, __FILE__, __LINE__)
#define dglRectsv(v1, v2) glRectsv_DEBUG(v1, v2, __FILE__, __LINE__)
#define dglRenderMode(mode) glRenderMode_DEBUG(mode, __FILE__, __LINE__)
#define dglRotated(angle, x, y, z) glRotated_DEBUG(angle, x, y, z, __FILE__, __LINE__)
#define dglRotatef(angle, x, y, z) glRotatef_DEBUG(angle, x, y, z, __FILE__, __LINE__)
#define dglScaled(x, y, z) glScaled_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglScalef(x, y, z) glScalef_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglScissor(x, y, width, height) glScissor_DEBUG(x, y, width, height, __FILE__, __LINE__)
#define dglSelectBuffer(size, buffer) glSelectBuffer_DEBUG(size, buffer, __FILE__, __LINE__)
#define dglShadeModel(mode) glShadeModel_DEBUG(mode, __FILE__, __LINE__)
#define dglStencilFunc(func, ref, mask) glStencilFunc_DEBUG(func, ref, mask, __FILE__, __LINE__)
#define dglStencilMask(mask) glStencilMask_DEBUG(mask, __FILE__, __LINE__)
#define dglStencilOp(fail, zfail, zpass) glStencilOp_DEBUG(fail, zfail, zpass, __FILE__, __LINE__)
#define dglTexCoord1d(s) glTexCoord1d_DEBUG(s, __FILE__, __LINE__)
#define dglTexCoord1dv(v) glTexCoord1dv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord1f(s) glTexCoord1f_DEBUG(s, __FILE__, __LINE__)
#define dglTexCoord1fv(v) glTexCoord1fv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord1i(s) glTexCoord1i_DEBUG(s, __FILE__, __LINE__)
#define dglTexCoord1iv(v) glTexCoord1iv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord1s(s) glTexCoord1s_DEBUG(s, __FILE__, __LINE__)
#define dglTexCoord1sv(v) glTexCoord1sv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord2d(s, t) glTexCoord2d_DEBUG(s, t, __FILE__, __LINE__)
#define dglTexCoord2dv(v) glTexCoord2dv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord2f(s, t) glTexCoord2f_DEBUG(s, t, __FILE__, __LINE__)
#define dglTexCoord2fv(v) glTexCoord2fv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord2i(s, t) glTexCoord2i_DEBUG(s, t, __FILE__, __LINE__)
#define dglTexCoord2iv(v) glTexCoord2iv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord2s(s, t) glTexCoord2s_DEBUG(s, t, __FILE__, __LINE__)
#define dglTexCoord2sv(v) glTexCoord2sv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord3d(s, t, r) glTexCoord3d_DEBUG(s, t, r, __FILE__, __LINE__)
#define dglTexCoord3dv(v) glTexCoord3dv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord3f(s, t, r) glTexCoord3f_DEBUG(s, t, r, __FILE__, __LINE__)
#define dglTexCoord3fv(v) glTexCoord3fv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord3i(s, t, r) glTexCoord3i_DEBUG(s, t, r, __FILE__, __LINE__)
#define dglTexCoord3iv(v) glTexCoord3iv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord3s(s, t, r) glTexCoord3s_DEBUG(s, t, r, __FILE__, __LINE__)
#define dglTexCoord3sv(v) glTexCoord3sv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord4d(s, t, r, q) glTexCoord4d_DEBUG(s, t, r, q, __FILE__, __LINE__)
#define dglTexCoord4dv(v) glTexCoord4dv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord4f(s, t, r, q) glTexCoord4f_DEBUG(s, t, r, q, __FILE__, __LINE__)
#define dglTexCoord4fv(v) glTexCoord4fv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord4i(s, t, r, q) glTexCoord4i_DEBUG(s, t, r, q, __FILE__, __LINE__)
#define dglTexCoord4iv(v) glTexCoord4iv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoord4s(s, t, r, q) glTexCoord4s_DEBUG(s, t, r, q, __FILE__, __LINE__)
#define dglTexCoord4sv(v) glTexCoord4sv_DEBUG(v, __FILE__, __LINE__)
#define dglTexCoordPointer(size, type, stride, pointer) glTexCoordPointer_DEBUG(size, type, stride, pointer, __FILE__, __LINE__)
#define dglTexEnvf(target, pname, param) glTexEnvf_DEBUG(target, pname, param, __FILE__, __LINE__)
#define dglTexEnvfv(target, pname, params) glTexEnvfv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglTexEnvi(target, pname, param) glTexEnvi_DEBUG(target, pname, param, __FILE__, __LINE__)
#define dglTexEnviv(target, pname, params) glTexEnviv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglTexGend(coord, pname, param) glTexGend_DEBUG(coord, pname, param, __FILE__, __LINE__)
#define dglTexGendv(coord, pname, params) glTexGendv_DEBUG(coord, pname, params, __FILE__, __LINE__)
#define dglTexGenf(coord, pname, param) glTexGenf_DEBUG(coord, pname, param, __FILE__, __LINE__)
#define dglTexGenfv(coord, pname, params) glTexGenfv_DEBUG(coord, pname, params, __FILE__, __LINE__)
#define dglTexGeni(coord, pname, param) glTexGeni_DEBUG(coord, pname, param, __FILE__, __LINE__)
#define dglTexGeniv(coord, pname, params) glTexGeniv_DEBUG(coord, pname, params, __FILE__, __LINE__)
#define dglTexImage1D(target, level, internalformat, width, border, format, type, pixels) glTexImage1D_DEBUG(target, level, internalformat, width, border, format, type, pixels, __FILE__, __LINE__)
#define dglTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) glTexImage2D_DEBUG(target, level, internalformat, width, height, border, format, type, pixels, __FILE__, __LINE__)
#define dglTexParameterf(target, pname, param) glTexParameterf_DEBUG(target, pname, param, __FILE__, __LINE__)
#define dglTexParameterfv(target, pname, params) glTexParameterfv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglTexParameteri(target, pname, param) glTexParameteri_DEBUG(target, pname, param, __FILE__, __LINE__)
#define dglTexParameteriv(target, pname, params) glTexParameteriv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglTexSubImage1D(target, level, xoffset, width, format, type, pixels) glTexSubImage1D_DEBUG(target, level, xoffset, width, format, type, pixels, __FILE__, __LINE__)
#define dglTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) glTexSubImage2D_DEBUG(target, level, xoffset, yoffset, width, height, format, type, pixels, __FILE__, __LINE__)
#define dglTranslated(x, y, z) glTranslated_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglTranslatef(x, y, z) glTranslatef_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglVertex2d(x, y) glVertex2d_DEBUG(x, y, __FILE__, __LINE__)
#define dglVertex2dv(v) glVertex2dv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex2f(x, y) glVertex2f_DEBUG(x, y, __FILE__, __LINE__)
#define dglVertex2fv(v) glVertex2fv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex2i(x, y) glVertex2i_DEBUG(x, y, __FILE__, __LINE__)
#define dglVertex2iv(v) glVertex2iv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex2s(x, y) glVertex2s_DEBUG(x, y, __FILE__, __LINE__)
#define dglVertex2sv(v) glVertex2sv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex3d(x, y, z) glVertex3d_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglVertex3dv(v) glVertex3dv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex3f(x, y, z) glVertex3f_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglVertex3fv(v) glVertex3fv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex3i(x, y, z) glVertex3i_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglVertex3iv(v) glVertex3iv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex3s(x, y, z) glVertex3s_DEBUG(x, y, z, __FILE__, __LINE__)
#define dglVertex3sv(v) glVertex3sv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex4d(x, y, z, w) glVertex4d_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglVertex4dv(v) glVertex4dv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex4f(x, y, z, w) glVertex4f_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglVertex4fv(v) glVertex4fv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex4i(x, y, z, w) glVertex4i_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglVertex4iv(v) glVertex4iv_DEBUG(v, __FILE__, __LINE__)
#define dglVertex4s(x, y, z, w) glVertex4s_DEBUG(x, y, z, w, __FILE__, __LINE__)
#define dglVertex4sv(v) glVertex4sv_DEBUG(v, __FILE__, __LINE__)
#define dglVertexPointer(size, type, stride, pointer) glVertexPointer_DEBUG(size, type, stride, pointer, __FILE__, __LINE__)
#define dglViewport(x, y, width, height) glViewport_DEBUG(x, y, width, height, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_ARB_multitexture
//
extern boolean has_GL_ARB_multitexture;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLACTIVETEXTUREARBPROC) (GLenum texture);
typedef void (APIENTRYP PFNGLCLIENTACTIVETEXTUREARBPROC) (GLenum texture);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1DARBPROC) (GLenum target, GLdouble s);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1DVARBPROC) (GLenum target, const GLdouble* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1FARBPROC) (GLenum target, GLfloat s);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1FVARBPROC) (GLenum target, const GLfloat* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1IARBPROC) (GLenum target, GLint s);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1IVARBPROC) (GLenum target, const GLint* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1SARBPROC) (GLenum target, GLshort s);
typedef void (APIENTRYP PFNGLMULTITEXCOORD1SVARBPROC) (GLenum target, const GLshort* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2DARBPROC) (GLenum target, GLdouble s, GLdouble t);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2DVARBPROC) (GLenum target, const GLdouble* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2FARBPROC) (GLenum target, GLfloat s, GLfloat t);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2FVARBPROC) (GLenum target, const GLfloat* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2IARBPROC) (GLenum target, GLint s, GLint t);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2IVARBPROC) (GLenum target, const GLint* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2SARBPROC) (GLenum target, GLshort s, GLshort t);
typedef void (APIENTRYP PFNGLMULTITEXCOORD2SVARBPROC) (GLenum target, const GLshort* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3DARBPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3DVARBPROC) (GLenum target, const GLdouble* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3FARBPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3FVARBPROC) (GLenum target, const GLfloat* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3IARBPROC) (GLenum target, GLint s, GLint t, GLint r);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3IVARBPROC) (GLenum target, const GLint* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3SARBPROC) (GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (APIENTRYP PFNGLMULTITEXCOORD3SVARBPROC) (GLenum target, const GLshort* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4DARBPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4DVARBPROC) (GLenum target, const GLdouble* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4FARBPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4FVARBPROC) (GLenum target, const GLfloat* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4IARBPROC) (GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4IVARBPROC) (GLenum target, const GLint* v);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4SARBPROC) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (APIENTRYP PFNGLMULTITEXCOORD4SVARBPROC) (GLenum target, const GLshort* v);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLACTIVETEXTUREARBPROC _glActiveTextureARB;
extern PFNGLCLIENTACTIVETEXTUREARBPROC _glClientActiveTextureARB;
extern PFNGLMULTITEXCOORD1DARBPROC _glMultiTexCoord1dARB;
extern PFNGLMULTITEXCOORD1DVARBPROC _glMultiTexCoord1dvARB;
extern PFNGLMULTITEXCOORD1FARBPROC _glMultiTexCoord1fARB;
extern PFNGLMULTITEXCOORD1FVARBPROC _glMultiTexCoord1fvARB;
extern PFNGLMULTITEXCOORD1IARBPROC _glMultiTexCoord1iARB;
extern PFNGLMULTITEXCOORD1IVARBPROC _glMultiTexCoord1ivARB;
extern PFNGLMULTITEXCOORD1SARBPROC _glMultiTexCoord1sARB;
extern PFNGLMULTITEXCOORD1SVARBPROC _glMultiTexCoord1svARB;
extern PFNGLMULTITEXCOORD2DARBPROC _glMultiTexCoord2dARB;
extern PFNGLMULTITEXCOORD2DVARBPROC _glMultiTexCoord2dvARB;
extern PFNGLMULTITEXCOORD2FARBPROC _glMultiTexCoord2fARB;
extern PFNGLMULTITEXCOORD2FVARBPROC _glMultiTexCoord2fvARB;
extern PFNGLMULTITEXCOORD2IARBPROC _glMultiTexCoord2iARB;
extern PFNGLMULTITEXCOORD2IVARBPROC _glMultiTexCoord2ivARB;
extern PFNGLMULTITEXCOORD2SARBPROC _glMultiTexCoord2sARB;
extern PFNGLMULTITEXCOORD2SVARBPROC _glMultiTexCoord2svARB;
extern PFNGLMULTITEXCOORD3DARBPROC _glMultiTexCoord3dARB;
extern PFNGLMULTITEXCOORD3DVARBPROC _glMultiTexCoord3dvARB;
extern PFNGLMULTITEXCOORD3FARBPROC _glMultiTexCoord3fARB;
extern PFNGLMULTITEXCOORD3FVARBPROC _glMultiTexCoord3fvARB;
extern PFNGLMULTITEXCOORD3IARBPROC _glMultiTexCoord3iARB;
extern PFNGLMULTITEXCOORD3IVARBPROC _glMultiTexCoord3ivARB;
extern PFNGLMULTITEXCOORD3SARBPROC _glMultiTexCoord3sARB;
extern PFNGLMULTITEXCOORD3SVARBPROC _glMultiTexCoord3svARB;
extern PFNGLMULTITEXCOORD4DARBPROC _glMultiTexCoord4dARB;
extern PFNGLMULTITEXCOORD4DVARBPROC _glMultiTexCoord4dvARB;
extern PFNGLMULTITEXCOORD4FARBPROC _glMultiTexCoord4fARB;
extern PFNGLMULTITEXCOORD4FVARBPROC _glMultiTexCoord4fvARB;
extern PFNGLMULTITEXCOORD4IARBPROC _glMultiTexCoord4iARB;
extern PFNGLMULTITEXCOORD4IVARBPROC _glMultiTexCoord4ivARB;
extern PFNGLMULTITEXCOORD4SARBPROC _glMultiTexCoord4sARB;
extern PFNGLMULTITEXCOORD4SVARBPROC _glMultiTexCoord4svARB;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_multitexture_Define() \
boolean has_GL_ARB_multitexture = false; \
PFNGLACTIVETEXTUREARBPROC _glActiveTextureARB = NULL; \
PFNGLCLIENTACTIVETEXTUREARBPROC _glClientActiveTextureARB = NULL; \
PFNGLMULTITEXCOORD1DARBPROC _glMultiTexCoord1dARB = NULL; \
PFNGLMULTITEXCOORD1DVARBPROC _glMultiTexCoord1dvARB = NULL; \
PFNGLMULTITEXCOORD1FARBPROC _glMultiTexCoord1fARB = NULL; \
PFNGLMULTITEXCOORD1FVARBPROC _glMultiTexCoord1fvARB = NULL; \
PFNGLMULTITEXCOORD1IARBPROC _glMultiTexCoord1iARB = NULL; \
PFNGLMULTITEXCOORD1IVARBPROC _glMultiTexCoord1ivARB = NULL; \
PFNGLMULTITEXCOORD1SARBPROC _glMultiTexCoord1sARB = NULL; \
PFNGLMULTITEXCOORD1SVARBPROC _glMultiTexCoord1svARB = NULL; \
PFNGLMULTITEXCOORD2DARBPROC _glMultiTexCoord2dARB = NULL; \
PFNGLMULTITEXCOORD2DVARBPROC _glMultiTexCoord2dvARB = NULL; \
PFNGLMULTITEXCOORD2FARBPROC _glMultiTexCoord2fARB = NULL; \
PFNGLMULTITEXCOORD2FVARBPROC _glMultiTexCoord2fvARB = NULL; \
PFNGLMULTITEXCOORD2IARBPROC _glMultiTexCoord2iARB = NULL; \
PFNGLMULTITEXCOORD2IVARBPROC _glMultiTexCoord2ivARB = NULL; \
PFNGLMULTITEXCOORD2SARBPROC _glMultiTexCoord2sARB = NULL; \
PFNGLMULTITEXCOORD2SVARBPROC _glMultiTexCoord2svARB = NULL; \
PFNGLMULTITEXCOORD3DARBPROC _glMultiTexCoord3dARB = NULL; \
PFNGLMULTITEXCOORD3DVARBPROC _glMultiTexCoord3dvARB = NULL; \
PFNGLMULTITEXCOORD3FARBPROC _glMultiTexCoord3fARB = NULL; \
PFNGLMULTITEXCOORD3FVARBPROC _glMultiTexCoord3fvARB = NULL; \
PFNGLMULTITEXCOORD3IARBPROC _glMultiTexCoord3iARB = NULL; \
PFNGLMULTITEXCOORD3IVARBPROC _glMultiTexCoord3ivARB = NULL; \
PFNGLMULTITEXCOORD3SARBPROC _glMultiTexCoord3sARB = NULL; \
PFNGLMULTITEXCOORD3SVARBPROC _glMultiTexCoord3svARB = NULL; \
PFNGLMULTITEXCOORD4DARBPROC _glMultiTexCoord4dARB = NULL; \
PFNGLMULTITEXCOORD4DVARBPROC _glMultiTexCoord4dvARB = NULL; \
PFNGLMULTITEXCOORD4FARBPROC _glMultiTexCoord4fARB = NULL; \
PFNGLMULTITEXCOORD4FVARBPROC _glMultiTexCoord4fvARB = NULL; \
PFNGLMULTITEXCOORD4IARBPROC _glMultiTexCoord4iARB = NULL; \
PFNGLMULTITEXCOORD4IVARBPROC _glMultiTexCoord4ivARB = NULL; \
PFNGLMULTITEXCOORD4SARBPROC _glMultiTexCoord4sARB = NULL; \
PFNGLMULTITEXCOORD4SVARBPROC _glMultiTexCoord4svARB = NULL
#else
#define GL_ARB_multitexture_Define() boolean has_GL_ARB_multitexture = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_multitexture_Init() \
has_GL_ARB_multitexture = GL_CheckExtension("GL_ARB_multitexture"); \
_glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC)GL_RegisterProc("glActiveTextureARB"); \
_glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC)GL_RegisterProc("glClientActiveTextureARB"); \
_glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC)GL_RegisterProc("glMultiTexCoord1dARB"); \
_glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC)GL_RegisterProc("glMultiTexCoord1dvARB"); \
_glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC)GL_RegisterProc("glMultiTexCoord1fARB"); \
_glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC)GL_RegisterProc("glMultiTexCoord1fvARB"); \
_glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC)GL_RegisterProc("glMultiTexCoord1iARB"); \
_glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC)GL_RegisterProc("glMultiTexCoord1ivARB"); \
_glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC)GL_RegisterProc("glMultiTexCoord1sARB"); \
_glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC)GL_RegisterProc("glMultiTexCoord1svARB"); \
_glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC)GL_RegisterProc("glMultiTexCoord2dARB"); \
_glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC)GL_RegisterProc("glMultiTexCoord2dvARB"); \
_glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC)GL_RegisterProc("glMultiTexCoord2fARB"); \
_glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC)GL_RegisterProc("glMultiTexCoord2fvARB"); \
_glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC)GL_RegisterProc("glMultiTexCoord2iARB"); \
_glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC)GL_RegisterProc("glMultiTexCoord2ivARB"); \
_glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC)GL_RegisterProc("glMultiTexCoord2sARB"); \
_glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC)GL_RegisterProc("glMultiTexCoord2svARB"); \
_glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC)GL_RegisterProc("glMultiTexCoord3dARB"); \
_glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC)GL_RegisterProc("glMultiTexCoord3dvARB"); \
_glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC)GL_RegisterProc("glMultiTexCoord3fARB"); \
_glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC)GL_RegisterProc("glMultiTexCoord3fvARB"); \
_glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC)GL_RegisterProc("glMultiTexCoord3iARB"); \
_glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC)GL_RegisterProc("glMultiTexCoord3ivARB"); \
_glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC)GL_RegisterProc("glMultiTexCoord3sARB"); \
_glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC)GL_RegisterProc("glMultiTexCoord3svARB"); \
_glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC)GL_RegisterProc("glMultiTexCoord4dARB"); \
_glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC)GL_RegisterProc("glMultiTexCoord4dvARB"); \
_glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC)GL_RegisterProc("glMultiTexCoord4fARB"); \
_glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC)GL_RegisterProc("glMultiTexCoord4fvARB"); \
_glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC)GL_RegisterProc("glMultiTexCoord4iARB"); \
_glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC)GL_RegisterProc("glMultiTexCoord4ivARB"); \
_glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC)GL_RegisterProc("glMultiTexCoord4sARB"); \
_glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC)GL_RegisterProc("glMultiTexCoord4svARB")
#else
#define GL_ARB_multitexture_Init() has_GL_ARB_multitexture = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglActiveTextureARB(texture) _glActiveTextureARB(texture)
#define dglClientActiveTextureARB(texture) _glClientActiveTextureARB(texture)
#define dglMultiTexCoord1dARB(target, s) _glMultiTexCoord1dARB(target, s)
#define dglMultiTexCoord1dvARB(target, v) _glMultiTexCoord1dvARB(target, v)
#define dglMultiTexCoord1fARB(target, s) _glMultiTexCoord1fARB(target, s)
#define dglMultiTexCoord1fvARB(target, v) _glMultiTexCoord1fvARB(target, v)
#define dglMultiTexCoord1iARB(target, s) _glMultiTexCoord1iARB(target, s)
#define dglMultiTexCoord1ivARB(target, v) _glMultiTexCoord1ivARB(target, v)
#define dglMultiTexCoord1sARB(target, s) _glMultiTexCoord1sARB(target, s)
#define dglMultiTexCoord1svARB(target, v) _glMultiTexCoord1svARB(target, v)
#define dglMultiTexCoord2dARB(target, s, t) _glMultiTexCoord2dARB(target, s, t)
#define dglMultiTexCoord2dvARB(target, v) _glMultiTexCoord2dvARB(target, v)
#define dglMultiTexCoord2fARB(target, s, t) _glMultiTexCoord2fARB(target, s, t)
#define dglMultiTexCoord2fvARB(target, v) _glMultiTexCoord2fvARB(target, v)
#define dglMultiTexCoord2iARB(target, s, t) _glMultiTexCoord2iARB(target, s, t)
#define dglMultiTexCoord2ivARB(target, v) _glMultiTexCoord2ivARB(target, v)
#define dglMultiTexCoord2sARB(target, s, t) _glMultiTexCoord2sARB(target, s, t)
#define dglMultiTexCoord2svARB(target, v) _glMultiTexCoord2svARB(target, v)
#define dglMultiTexCoord3dARB(target, s, t, r) _glMultiTexCoord3dARB(target, s, t, r)
#define dglMultiTexCoord3dvARB(target, v) _glMultiTexCoord3dvARB(target, v)
#define dglMultiTexCoord3fARB(target, s, t, r) _glMultiTexCoord3fARB(target, s, t, r)
#define dglMultiTexCoord3fvARB(target, v) _glMultiTexCoord3fvARB(target, v)
#define dglMultiTexCoord3iARB(target, s, t, r) _glMultiTexCoord3iARB(target, s, t, r)
#define dglMultiTexCoord3ivARB(target, v) _glMultiTexCoord3ivARB(target, v)
#define dglMultiTexCoord3sARB(target, s, t, r) _glMultiTexCoord3sARB(target, s, t, r)
#define dglMultiTexCoord3svARB(target, v) _glMultiTexCoord3svARB(target, v)
#define dglMultiTexCoord4dARB(target, s, t, r, q) _glMultiTexCoord4dARB(target, s, t, r, q)
#define dglMultiTexCoord4dvARB(target, v) _glMultiTexCoord4dvARB(target, v)
#define dglMultiTexCoord4fARB(target, s, t, r, q) _glMultiTexCoord4fARB(target, s, t, r, q)
#define dglMultiTexCoord4fvARB(target, v) _glMultiTexCoord4fvARB(target, v)
#define dglMultiTexCoord4iARB(target, s, t, r, q) _glMultiTexCoord4iARB(target, s, t, r, q)
#define dglMultiTexCoord4ivARB(target, v) _glMultiTexCoord4ivARB(target, v)
#define dglMultiTexCoord4sARB(target, s, t, r, q) _glMultiTexCoord4sARB(target, s, t, r, q)
#define dglMultiTexCoord4svARB(target, v) _glMultiTexCoord4svARB(target, v)

#else

static __inline void glActiveTextureARB_DEBUG (GLenum texture, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glActiveTextureARB(texture=0x%x)\n", file, line, texture);
#endif
    _glActiveTextureARB(texture);
    GL_LogError("glActiveTextureARB", file, line);
}

static __inline void glClientActiveTextureARB_DEBUG (GLenum texture, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glClientActiveTextureARB(texture=0x%x)\n", file, line, texture);
#endif
    _glClientActiveTextureARB(texture);
    GL_LogError("glClientActiveTextureARB", file, line);
}

static __inline void glMultiTexCoord1dARB_DEBUG (GLenum target, GLdouble s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1dARB(target=0x%x, s=%f)\n", file, line, target, s);
#endif
    _glMultiTexCoord1dARB(target, s);
    GL_LogError("glMultiTexCoord1dARB", file, line);
}

static __inline void glMultiTexCoord1dvARB_DEBUG (GLenum target, GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1dvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord1dvARB(target, v);
    GL_LogError("glMultiTexCoord1dvARB", file, line);
}

static __inline void glMultiTexCoord1fARB_DEBUG (GLenum target, GLfloat s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1fARB(target=0x%x, s=%f)\n", file, line, target, s);
#endif
    _glMultiTexCoord1fARB(target, s);
    GL_LogError("glMultiTexCoord1fARB", file, line);
}

static __inline void glMultiTexCoord1fvARB_DEBUG (GLenum target, GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1fvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord1fvARB(target, v);
    GL_LogError("glMultiTexCoord1fvARB", file, line);
}

static __inline void glMultiTexCoord1iARB_DEBUG (GLenum target, GLint s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1iARB(target=0x%x, s=%i)\n", file, line, target, s);
#endif
    _glMultiTexCoord1iARB(target, s);
    GL_LogError("glMultiTexCoord1iARB", file, line);
}

static __inline void glMultiTexCoord1ivARB_DEBUG (GLenum target, GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1ivARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord1ivARB(target, v);
    GL_LogError("glMultiTexCoord1ivARB", file, line);
}

static __inline void glMultiTexCoord1sARB_DEBUG (GLenum target, GLshort s, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1sARB(target=0x%x, s=%i)\n", file, line, target, s);
#endif
    _glMultiTexCoord1sARB(target, s);
    GL_LogError("glMultiTexCoord1sARB", file, line);
}

static __inline void glMultiTexCoord1svARB_DEBUG (GLenum target, GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord1svARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord1svARB(target, v);
    GL_LogError("glMultiTexCoord1svARB", file, line);
}

static __inline void glMultiTexCoord2dARB_DEBUG (GLenum target, GLdouble s, GLdouble t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2dARB(target=0x%x, s=%f, t=%f)\n", file, line, target, s, t);
#endif
    _glMultiTexCoord2dARB(target, s, t);
    GL_LogError("glMultiTexCoord2dARB", file, line);
}

static __inline void glMultiTexCoord2dvARB_DEBUG (GLenum target, GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2dvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord2dvARB(target, v);
    GL_LogError("glMultiTexCoord2dvARB", file, line);
}

static __inline void glMultiTexCoord2fARB_DEBUG (GLenum target, GLfloat s, GLfloat t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2fARB(target=0x%x, s=%f, t=%f)\n", file, line, target, s, t);
#endif
    _glMultiTexCoord2fARB(target, s, t);
    GL_LogError("glMultiTexCoord2fARB", file, line);
}

static __inline void glMultiTexCoord2fvARB_DEBUG (GLenum target, GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2fvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord2fvARB(target, v);
    GL_LogError("glMultiTexCoord2fvARB", file, line);
}

static __inline void glMultiTexCoord2iARB_DEBUG (GLenum target, GLint s, GLint t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2iARB(target=0x%x, s=%i, t=%i)\n", file, line, target, s, t);
#endif
    _glMultiTexCoord2iARB(target, s, t);
    GL_LogError("glMultiTexCoord2iARB", file, line);
}

static __inline void glMultiTexCoord2ivARB_DEBUG (GLenum target, GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2ivARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord2ivARB(target, v);
    GL_LogError("glMultiTexCoord2ivARB", file, line);
}

static __inline void glMultiTexCoord2sARB_DEBUG (GLenum target, GLshort s, GLshort t, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2sARB(target=0x%x, s=%i, t=%i)\n", file, line, target, s, t);
#endif
    _glMultiTexCoord2sARB(target, s, t);
    GL_LogError("glMultiTexCoord2sARB", file, line);
}

static __inline void glMultiTexCoord2svARB_DEBUG (GLenum target, GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord2svARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord2svARB(target, v);
    GL_LogError("glMultiTexCoord2svARB", file, line);
}

static __inline void glMultiTexCoord3dARB_DEBUG (GLenum target, GLdouble s, GLdouble t, GLdouble r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3dARB(target=0x%x, s=%f, t=%f, r=%f)\n", file, line, target, s, t, r);
#endif
    _glMultiTexCoord3dARB(target, s, t, r);
    GL_LogError("glMultiTexCoord3dARB", file, line);
}

static __inline void glMultiTexCoord3dvARB_DEBUG (GLenum target, GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3dvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord3dvARB(target, v);
    GL_LogError("glMultiTexCoord3dvARB", file, line);
}

static __inline void glMultiTexCoord3fARB_DEBUG (GLenum target, GLfloat s, GLfloat t, GLfloat r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3fARB(target=0x%x, s=%f, t=%f, r=%f)\n", file, line, target, s, t, r);
#endif
    _glMultiTexCoord3fARB(target, s, t, r);
    GL_LogError("glMultiTexCoord3fARB", file, line);
}

static __inline void glMultiTexCoord3fvARB_DEBUG (GLenum target, GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3fvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord3fvARB(target, v);
    GL_LogError("glMultiTexCoord3fvARB", file, line);
}

static __inline void glMultiTexCoord3iARB_DEBUG (GLenum target, GLint s, GLint t, GLint r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3iARB(target=0x%x, s=%i, t=%i, r=%i)\n", file, line, target, s, t, r);
#endif
    _glMultiTexCoord3iARB(target, s, t, r);
    GL_LogError("glMultiTexCoord3iARB", file, line);
}

static __inline void glMultiTexCoord3ivARB_DEBUG (GLenum target, GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3ivARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord3ivARB(target, v);
    GL_LogError("glMultiTexCoord3ivARB", file, line);
}

static __inline void glMultiTexCoord3sARB_DEBUG (GLenum target, GLshort s, GLshort t, GLshort r, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3sARB(target=0x%x, s=%i, t=%i, r=%i)\n", file, line, target, s, t, r);
#endif
    _glMultiTexCoord3sARB(target, s, t, r);
    GL_LogError("glMultiTexCoord3sARB", file, line);
}

static __inline void glMultiTexCoord3svARB_DEBUG (GLenum target, GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord3svARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord3svARB(target, v);
    GL_LogError("glMultiTexCoord3svARB", file, line);
}

static __inline void glMultiTexCoord4dARB_DEBUG (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4dARB(target=0x%x, s=%f, t=%f, r=%f, q=%f)\n", file, line, target, s, t, r, q);
#endif
    _glMultiTexCoord4dARB(target, s, t, r, q);
    GL_LogError("glMultiTexCoord4dARB", file, line);
}

static __inline void glMultiTexCoord4dvARB_DEBUG (GLenum target, GLdouble* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4dvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord4dvARB(target, v);
    GL_LogError("glMultiTexCoord4dvARB", file, line);
}

static __inline void glMultiTexCoord4fARB_DEBUG (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4fARB(target=0x%x, s=%f, t=%f, r=%f, q=%f)\n", file, line, target, s, t, r, q);
#endif
    _glMultiTexCoord4fARB(target, s, t, r, q);
    GL_LogError("glMultiTexCoord4fARB", file, line);
}

static __inline void glMultiTexCoord4fvARB_DEBUG (GLenum target, GLfloat* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4fvARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord4fvARB(target, v);
    GL_LogError("glMultiTexCoord4fvARB", file, line);
}

static __inline void glMultiTexCoord4iARB_DEBUG (GLenum target, GLint s, GLint t, GLint r, GLint q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4iARB(target=0x%x, s=%i, t=%i, r=%i, q=%i)\n", file, line, target, s, t, r, q);
#endif
    _glMultiTexCoord4iARB(target, s, t, r, q);
    GL_LogError("glMultiTexCoord4iARB", file, line);
}

static __inline void glMultiTexCoord4ivARB_DEBUG (GLenum target, GLint* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4ivARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord4ivARB(target, v);
    GL_LogError("glMultiTexCoord4ivARB", file, line);
}

static __inline void glMultiTexCoord4sARB_DEBUG (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4sARB(target=0x%x, s=%i, t=%i, r=%i, q=%i)\n", file, line, target, s, t, r, q);
#endif
    _glMultiTexCoord4sARB(target, s, t, r, q);
    GL_LogError("glMultiTexCoord4sARB", file, line);
}

static __inline void glMultiTexCoord4svARB_DEBUG (GLenum target, GLshort* v, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiTexCoord4svARB(target=0x%x, v=%p)\n", file, line, target, v);
#endif
    _glMultiTexCoord4svARB(target, v);
    GL_LogError("glMultiTexCoord4svARB", file, line);
}


#define dglActiveTextureARB(texture) glActiveTextureARB_DEBUG(texture, __FILE__, __LINE__)
#define dglClientActiveTextureARB(texture) glClientActiveTextureARB_DEBUG(texture, __FILE__, __LINE__)
#define dglMultiTexCoord1dARB(target, s) glMultiTexCoord1dARB_DEBUG(target, s, __FILE__, __LINE__)
#define dglMultiTexCoord1dvARB(target, v) glMultiTexCoord1dvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord1fARB(target, s) glMultiTexCoord1fARB_DEBUG(target, s, __FILE__, __LINE__)
#define dglMultiTexCoord1fvARB(target, v) glMultiTexCoord1fvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord1iARB(target, s) glMultiTexCoord1iARB_DEBUG(target, s, __FILE__, __LINE__)
#define dglMultiTexCoord1ivARB(target, v) glMultiTexCoord1ivARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord1sARB(target, s) glMultiTexCoord1sARB_DEBUG(target, s, __FILE__, __LINE__)
#define dglMultiTexCoord1svARB(target, v) glMultiTexCoord1svARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord2dARB(target, s, t) glMultiTexCoord2dARB_DEBUG(target, s, t, __FILE__, __LINE__)
#define dglMultiTexCoord2dvARB(target, v) glMultiTexCoord2dvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord2fARB(target, s, t) glMultiTexCoord2fARB_DEBUG(target, s, t, __FILE__, __LINE__)
#define dglMultiTexCoord2fvARB(target, v) glMultiTexCoord2fvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord2iARB(target, s, t) glMultiTexCoord2iARB_DEBUG(target, s, t, __FILE__, __LINE__)
#define dglMultiTexCoord2ivARB(target, v) glMultiTexCoord2ivARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord2sARB(target, s, t) glMultiTexCoord2sARB_DEBUG(target, s, t, __FILE__, __LINE__)
#define dglMultiTexCoord2svARB(target, v) glMultiTexCoord2svARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord3dARB(target, s, t, r) glMultiTexCoord3dARB_DEBUG(target, s, t, r, __FILE__, __LINE__)
#define dglMultiTexCoord3dvARB(target, v) glMultiTexCoord3dvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord3fARB(target, s, t, r) glMultiTexCoord3fARB_DEBUG(target, s, t, r, __FILE__, __LINE__)
#define dglMultiTexCoord3fvARB(target, v) glMultiTexCoord3fvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord3iARB(target, s, t, r) glMultiTexCoord3iARB_DEBUG(target, s, t, r, __FILE__, __LINE__)
#define dglMultiTexCoord3ivARB(target, v) glMultiTexCoord3ivARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord3sARB(target, s, t, r) glMultiTexCoord3sARB_DEBUG(target, s, t, r, __FILE__, __LINE__)
#define dglMultiTexCoord3svARB(target, v) glMultiTexCoord3svARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord4dARB(target, s, t, r, q) glMultiTexCoord4dARB_DEBUG(target, s, t, r, q, __FILE__, __LINE__)
#define dglMultiTexCoord4dvARB(target, v) glMultiTexCoord4dvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord4fARB(target, s, t, r, q) glMultiTexCoord4fARB_DEBUG(target, s, t, r, q, __FILE__, __LINE__)
#define dglMultiTexCoord4fvARB(target, v) glMultiTexCoord4fvARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord4iARB(target, s, t, r, q) glMultiTexCoord4iARB_DEBUG(target, s, t, r, q, __FILE__, __LINE__)
#define dglMultiTexCoord4ivARB(target, v) glMultiTexCoord4ivARB_DEBUG(target, v, __FILE__, __LINE__)
#define dglMultiTexCoord4sARB(target, s, t, r, q) glMultiTexCoord4sARB_DEBUG(target, s, t, r, q, __FILE__, __LINE__)
#define dglMultiTexCoord4svARB(target, v) glMultiTexCoord4svARB_DEBUG(target, v, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_EXT_compiled_vertex_array
//
extern boolean has_GL_EXT_compiled_vertex_array;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLLOCKARRAYSEXTPROC) (GLint first, GLsizei count);
typedef void (APIENTRYP PFNGLUNLOCKARRAYSEXTPROC) (void);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLLOCKARRAYSEXTPROC _glLockArraysEXT;
extern PFNGLUNLOCKARRAYSEXTPROC _glUnlockArraysEXT;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_compiled_vertex_array_Define() \
boolean has_GL_EXT_compiled_vertex_array = false; \
PFNGLLOCKARRAYSEXTPROC _glLockArraysEXT = NULL; \
PFNGLUNLOCKARRAYSEXTPROC _glUnlockArraysEXT = NULL
#else
#define GL_EXT_compiled_vertex_array_Define() boolean has_GL_EXT_compiled_vertex_array = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_compiled_vertex_array_Init() \
has_GL_EXT_compiled_vertex_array = GL_CheckExtension("GL_EXT_compiled_vertex_array"); \
_glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC)GL_RegisterProc("glLockArraysEXT"); \
_glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC)GL_RegisterProc("glUnlockArraysEXT")
#else
#define GL_EXT_compiled_vertex_array_Init() has_GL_EXT_compiled_vertex_array = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglLockArraysEXT(first, count) _glLockArraysEXT(first, count)
#define dglUnlockArraysEXT() _glUnlockArraysEXT()

#else

static __inline void glLockArraysEXT_DEBUG (GLint first, GLsizei count, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLockArraysEXT(first=%i, count=0x%x)\n", file, line, first, count);
#endif
    _glLockArraysEXT(first, count);
    GL_LogError("glLockArraysEXT", file, line);
}

static __inline void glUnlockArraysEXT_DEBUG (const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUnlockArraysEXT()\n", file, line);
#endif
    _glUnlockArraysEXT();
    GL_LogError("glUnlockArraysEXT", file, line);
}


#define dglLockArraysEXT(first, count) glLockArraysEXT_DEBUG(first, count, __FILE__, __LINE__)
#define dglUnlockArraysEXT() glUnlockArraysEXT_DEBUG(__FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_EXT_multi_draw_arrays
//
extern boolean has_GL_EXT_multi_draw_arrays;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) (GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLMULTIDRAWARRAYSEXTPROC _glMultiDrawArraysEXT;
extern PFNGLMULTIDRAWELEMENTSEXTPROC _glMultiDrawElementsEXT;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_multi_draw_arrays_Define() \
boolean has_GL_EXT_multi_draw_arrays = false; \
PFNGLMULTIDRAWARRAYSEXTPROC _glMultiDrawArraysEXT = NULL; \
PFNGLMULTIDRAWELEMENTSEXTPROC _glMultiDrawElementsEXT = NULL
#else
#define GL_EXT_multi_draw_arrays_Define() boolean has_GL_EXT_multi_draw_arrays = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_multi_draw_arrays_Init() \
has_GL_EXT_multi_draw_arrays = GL_CheckExtension("GL_EXT_multi_draw_arrays"); \
_glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC)GL_RegisterProc("glMultiDrawArraysEXT"); \
_glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)GL_RegisterProc("glMultiDrawElementsEXT")
#else
#define GL_EXT_multi_draw_arrays_Init() has_GL_EXT_multi_draw_arrays = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglMultiDrawArraysEXT(mode, first, count, primcount) _glMultiDrawArraysEXT(mode, first, count, primcount)
#define dglMultiDrawElementsEXT(mode, count, type, indices, primcount) _glMultiDrawElementsEXT(mode, count, type, indices, primcount)

#else

static __inline void glMultiDrawArraysEXT_DEBUG (GLenum mode, GLint* first, GLsizei* count, GLsizei primcount, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiDrawArraysEXT(mode=0x%x, first=%p, count=%p, primcount=0x%x)\n", file, line, mode, first, count, primcount);
#endif
    _glMultiDrawArraysEXT(mode, first, count, primcount);
    GL_LogError("glMultiDrawArraysEXT", file, line);
}

static __inline void glMultiDrawElementsEXT_DEBUG (GLenum mode, GLsizei* count, GLenum type, void* indices, GLsizei primcount, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMultiDrawElementsEXT(mode=0x%x, count=%p, type=0x%x, indices=%p, primcount=0x%x)\n", file, line, mode, count, type, indices, primcount);
#endif
    _glMultiDrawElementsEXT(mode, count, type, indices, primcount);
    GL_LogError("glMultiDrawElementsEXT", file, line);
}


#define dglMultiDrawArraysEXT(mode, first, count, primcount) glMultiDrawArraysEXT_DEBUG(mode, first, count, primcount, __FILE__, __LINE__)
#define dglMultiDrawElementsEXT(mode, count, type, indices, primcount) glMultiDrawElementsEXT_DEBUG(mode, count, type, indices, primcount, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_EXT_fog_coord
//
extern boolean has_GL_EXT_fog_coord;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLFOGCOORDFEXTPROC) (GLfloat coord);
typedef void (APIENTRYP PFNGLFOGCOORDFVEXTPROC) (const GLfloat* coord);
typedef void (APIENTRYP PFNGLFOGCOORDDEXTPROC) (GLdouble coord);
typedef void (APIENTRYP PFNGLFOGCOORDDVEXTPROC) (const GLdouble* coord);
typedef void (APIENTRYP PFNGLFOGCOORDPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid* pointer);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLFOGCOORDFEXTPROC _glFogCoordfEXT;
extern PFNGLFOGCOORDFVEXTPROC _glFogCoordfvEXT;
extern PFNGLFOGCOORDDEXTPROC _glFogCoorddEXT;
extern PFNGLFOGCOORDDVEXTPROC _glFogCoorddvEXT;
extern PFNGLFOGCOORDPOINTEREXTPROC _glFogCoordPointerEXT;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_fog_coord_Define() \
boolean has_GL_EXT_fog_coord = false; \
PFNGLFOGCOORDFEXTPROC _glFogCoordfEXT = NULL; \
PFNGLFOGCOORDFVEXTPROC _glFogCoordfvEXT = NULL; \
PFNGLFOGCOORDDEXTPROC _glFogCoorddEXT = NULL; \
PFNGLFOGCOORDDVEXTPROC _glFogCoorddvEXT = NULL; \
PFNGLFOGCOORDPOINTEREXTPROC _glFogCoordPointerEXT = NULL
#else
#define GL_EXT_fog_coord_Define() boolean has_GL_EXT_fog_coord = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_fog_coord_Init() \
has_GL_EXT_fog_coord = GL_CheckExtension("GL_EXT_fog_coord"); \
_glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC)GL_RegisterProc("glFogCoordfEXT"); \
_glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC)GL_RegisterProc("glFogCoordfvEXT"); \
_glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC)GL_RegisterProc("glFogCoorddEXT"); \
_glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC)GL_RegisterProc("glFogCoorddvEXT"); \
_glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC)GL_RegisterProc("glFogCoordPointerEXT")
#else
#define GL_EXT_fog_coord_Init() has_GL_EXT_fog_coord = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglFogCoordfEXT(coord) _glFogCoordfEXT(coord)
#define dglFogCoordfvEXT(coord) _glFogCoordfvEXT(coord)
#define dglFogCoorddEXT(coord) _glFogCoorddEXT(coord)
#define dglFogCoorddvEXT(coord) _glFogCoorddvEXT(coord)
#define dglFogCoordPointerEXT(type, stride, pointer) _glFogCoordPointerEXT(type, stride, pointer)

#else

static __inline void glFogCoordfEXT_DEBUG (GLfloat coord, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogCoordfEXT(coord=%f)\n", file, line, coord);
#endif
    _glFogCoordfEXT(coord);
    GL_LogError("glFogCoordfEXT", file, line);
}

static __inline void glFogCoordfvEXT_DEBUG (GLfloat* coord, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogCoordfvEXT(coord=%p)\n", file, line, coord);
#endif
    _glFogCoordfvEXT(coord);
    GL_LogError("glFogCoordfvEXT", file, line);
}

static __inline void glFogCoorddEXT_DEBUG (GLdouble coord, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogCoorddEXT(coord=%f)\n", file, line, coord);
#endif
    _glFogCoorddEXT(coord);
    GL_LogError("glFogCoorddEXT", file, line);
}

static __inline void glFogCoorddvEXT_DEBUG (GLdouble* coord, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogCoorddvEXT(coord=%p)\n", file, line, coord);
#endif
    _glFogCoorddvEXT(coord);
    GL_LogError("glFogCoorddvEXT", file, line);
}

static __inline void glFogCoordPointerEXT_DEBUG (GLenum type, GLsizei stride, GLvoid* pointer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFogCoordPointerEXT(type=0x%x, stride=0x%x, pointer=%p)\n", file, line, type, stride, pointer);
#endif
    _glFogCoordPointerEXT(type, stride, pointer);
    GL_LogError("glFogCoordPointerEXT", file, line);
}


#define dglFogCoordfEXT(coord) glFogCoordfEXT_DEBUG(coord, __FILE__, __LINE__)
#define dglFogCoordfvEXT(coord) glFogCoordfvEXT_DEBUG(coord, __FILE__, __LINE__)
#define dglFogCoorddEXT(coord) glFogCoorddEXT_DEBUG(coord, __FILE__, __LINE__)
#define dglFogCoorddvEXT(coord) glFogCoorddvEXT_DEBUG(coord, __FILE__, __LINE__)
#define dglFogCoordPointerEXT(type, stride, pointer) glFogCoordPointerEXT_DEBUG(type, stride, pointer, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_ARB_vertex_buffer_object
//
extern boolean has_GL_ARB_vertex_buffer_object;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLBINDBUFFERARBPROC) (GLenum target, GLuint buffer);
typedef void (APIENTRYP PFNGLDELETEBUFFERSARBPROC) (GLsizei n, const GLuint* buffers);
typedef void (APIENTRYP PFNGLGENBUFFERSARBPROC) (GLsizei n, GLuint* buffers);
typedef GLboolean (APIENTRYP PFNGLISBUFFERARBPROC) (GLuint buffer);
typedef void (APIENTRYP PFNGLBUFFERDATAARBPROC) (GLenum target, GLsizeiptrARB size, const GLvoid* data, GLenum usage);
typedef void (APIENTRYP PFNGLBUFFERSUBDATAARBPROC) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid* data);
typedef void (APIENTRYP PFNGLGETBUFFERSUBDATAARBPROC) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid* data);
typedef GLvoid* (APIENTRYP PFNGLMAPBUFFERARBPROC) (GLenum target, GLenum access);
typedef GLboolean (APIENTRYP PFNGLUNMAPBUFFERARBPROC) (GLenum target);
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERIVARBPROC) (GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRYP PFNGLGETBUFFERPOINTERVARBPROC) (GLenum target, GLenum pname, GLvoid** params);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLBINDBUFFERARBPROC _glBindBufferARB;
extern PFNGLDELETEBUFFERSARBPROC _glDeleteBuffersARB;
extern PFNGLGENBUFFERSARBPROC _glGenBuffersARB;
extern PFNGLISBUFFERARBPROC _glIsBufferARB;
extern PFNGLBUFFERDATAARBPROC _glBufferDataARB;
extern PFNGLBUFFERSUBDATAARBPROC _glBufferSubDataARB;
extern PFNGLGETBUFFERSUBDATAARBPROC _glGetBufferSubDataARB;
extern PFNGLMAPBUFFERARBPROC _glMapBufferARB;
extern PFNGLUNMAPBUFFERARBPROC _glUnmapBufferARB;
extern PFNGLGETBUFFERPARAMETERIVARBPROC _glGetBufferParameterivARB;
extern PFNGLGETBUFFERPOINTERVARBPROC _glGetBufferPointervARB;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_vertex_buffer_object_Define() \
boolean has_GL_ARB_vertex_buffer_object = false; \
PFNGLBINDBUFFERARBPROC _glBindBufferARB = NULL; \
PFNGLDELETEBUFFERSARBPROC _glDeleteBuffersARB = NULL; \
PFNGLGENBUFFERSARBPROC _glGenBuffersARB = NULL; \
PFNGLISBUFFERARBPROC _glIsBufferARB = NULL; \
PFNGLBUFFERDATAARBPROC _glBufferDataARB = NULL; \
PFNGLBUFFERSUBDATAARBPROC _glBufferSubDataARB = NULL; \
PFNGLGETBUFFERSUBDATAARBPROC _glGetBufferSubDataARB = NULL; \
PFNGLMAPBUFFERARBPROC _glMapBufferARB = NULL; \
PFNGLUNMAPBUFFERARBPROC _glUnmapBufferARB = NULL; \
PFNGLGETBUFFERPARAMETERIVARBPROC _glGetBufferParameterivARB = NULL; \
PFNGLGETBUFFERPOINTERVARBPROC _glGetBufferPointervARB = NULL
#else
#define GL_ARB_vertex_buffer_object_Define() boolean has_GL_ARB_vertex_buffer_object = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_vertex_buffer_object_Init() \
has_GL_ARB_vertex_buffer_object = GL_CheckExtension("GL_ARB_vertex_buffer_object"); \
_glBindBufferARB = (PFNGLBINDBUFFERARBPROC)GL_RegisterProc("glBindBufferARB"); \
_glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC)GL_RegisterProc("glDeleteBuffersARB"); \
_glGenBuffersARB = (PFNGLGENBUFFERSARBPROC)GL_RegisterProc("glGenBuffersARB"); \
_glIsBufferARB = (PFNGLISBUFFERARBPROC)GL_RegisterProc("glIsBufferARB"); \
_glBufferDataARB = (PFNGLBUFFERDATAARBPROC)GL_RegisterProc("glBufferDataARB"); \
_glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC)GL_RegisterProc("glBufferSubDataARB"); \
_glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC)GL_RegisterProc("glGetBufferSubDataARB"); \
_glMapBufferARB = (PFNGLMAPBUFFERARBPROC)GL_RegisterProc("glMapBufferARB"); \
_glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC)GL_RegisterProc("glUnmapBufferARB"); \
_glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC)GL_RegisterProc("glGetBufferParameterivARB"); \
_glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC)GL_RegisterProc("glGetBufferPointervARB")
#else
#define GL_ARB_vertex_buffer_object_Init() has_GL_ARB_vertex_buffer_object = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglBindBufferARB(target, buffer) _glBindBufferARB(target, buffer)
#define dglDeleteBuffersARB(n, buffers) _glDeleteBuffersARB(n, buffers)
#define dglGenBuffersARB(n, buffers) _glGenBuffersARB(n, buffers)
#define dglIsBufferARB(buffer) _glIsBufferARB(buffer)
#define dglBufferDataARB(target, size, data, usage) _glBufferDataARB(target, size, data, usage)
#define dglBufferSubDataARB(target, offset, size, data) _glBufferSubDataARB(target, offset, size, data)
#define dglGetBufferSubDataARB(target, offset, size, data) _glGetBufferSubDataARB(target, offset, size, data)
#define dglMapBufferARB(target, access) _glMapBufferARB(target, access)
#define dglUnmapBufferARB(target) _glUnmapBufferARB(target)
#define dglGetBufferParameterivARB(target, pname, params) _glGetBufferParameterivARB(target, pname, params)
#define dglGetBufferPointervARB(target, pname, params) _glGetBufferPointervARB(target, pname, params)

#else

static __inline void glBindBufferARB_DEBUG (GLenum target, GLuint buffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBindBufferARB(target=0x%x, buffer=%i)\n", file, line, target, buffer);
#endif
    _glBindBufferARB(target, buffer);
    GL_LogError("glBindBufferARB", file, line);
}

static __inline void glDeleteBuffersARB_DEBUG (GLsizei n, GLuint* buffers, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteBuffersARB(n=0x%x, buffers=%p)\n", file, line, n, buffers);
#endif
    _glDeleteBuffersARB(n, buffers);
    GL_LogError("glDeleteBuffersARB", file, line);
}

static __inline void glGenBuffersARB_DEBUG (GLsizei n, GLuint* buffers, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenBuffersARB(n=0x%x, buffers=%p)\n", file, line, n, buffers);
#endif
    _glGenBuffersARB(n, buffers);
    GL_LogError("glGenBuffersARB", file, line);
}

static __inline GLboolean glIsBufferARB_DEBUG (GLuint buffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsBufferARB(buffer=%i)\n", file, line, buffer);
#endif
    _glIsBufferARB(buffer);
    GL_LogError("glIsBufferARB", file, line);
}

static __inline void glBufferDataARB_DEBUG (GLenum target, GLsizeiptrARB size, GLvoid* data, GLenum usage, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBufferDataARB(target=0x%x, size=, data=%p, usage=0x%x)\n", file, line, target, size, data, usage);
#endif
    _glBufferDataARB(target, size, data, usage);
    GL_LogError("glBufferDataARB", file, line);
}

static __inline void glBufferSubDataARB_DEBUG (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid* data, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBufferSubDataARB(target=0x%x, offset=, size=, data=%p)\n", file, line, target, offset, size, data);
#endif
    _glBufferSubDataARB(target, offset, size, data);
    GL_LogError("glBufferSubDataARB", file, line);
}

static __inline void glGetBufferSubDataARB_DEBUG (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid* data, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetBufferSubDataARB(target=0x%x, offset=, size=, data=%p)\n", file, line, target, offset, size, data);
#endif
    _glGetBufferSubDataARB(target, offset, size, data);
    GL_LogError("glGetBufferSubDataARB", file, line);
}

static __inline void glMapBufferARB_DEBUG (GLenum target, GLenum access, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glMapBufferARB(target=0x%x, access=0x%x)\n", file, line, target, access);
#endif
    _glMapBufferARB(target, access);
    GL_LogError("glMapBufferARB", file, line);
}

static __inline GLboolean glUnmapBufferARB_DEBUG (GLenum target, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUnmapBufferARB(target=0x%x)\n", file, line, target);
#endif
    _glUnmapBufferARB(target);
    GL_LogError("glUnmapBufferARB", file, line);
}

static __inline void glGetBufferParameterivARB_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetBufferParameterivARB(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    _glGetBufferParameterivARB(target, pname, params);
    GL_LogError("glGetBufferParameterivARB", file, line);
}

static __inline void glGetBufferPointervARB_DEBUG (GLenum target, GLenum pname, void* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetBufferPointervARB(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    _glGetBufferPointervARB(target, pname, params);
    GL_LogError("glGetBufferPointervARB", file, line);
}


#define dglBindBufferARB(target, buffer) glBindBufferARB_DEBUG(target, buffer, __FILE__, __LINE__)
#define dglDeleteBuffersARB(n, buffers) glDeleteBuffersARB_DEBUG(n, buffers, __FILE__, __LINE__)
#define dglGenBuffersARB(n, buffers) glGenBuffersARB_DEBUG(n, buffers, __FILE__, __LINE__)
#define dglIsBufferARB(buffer) glIsBufferARB_DEBUG(buffer, __FILE__, __LINE__)
#define dglBufferDataARB(target, size, data, usage) glBufferDataARB_DEBUG(target, size, data, usage, __FILE__, __LINE__)
#define dglBufferSubDataARB(target, offset, size, data) glBufferSubDataARB_DEBUG(target, offset, size, data, __FILE__, __LINE__)
#define dglGetBufferSubDataARB(target, offset, size, data) glGetBufferSubDataARB_DEBUG(target, offset, size, data, __FILE__, __LINE__)
#define dglMapBufferARB(target, access) glMapBufferARB_DEBUG(target, access, __FILE__, __LINE__)
#define dglUnmapBufferARB(target) glUnmapBufferARB_DEBUG(target, __FILE__, __LINE__)
#define dglGetBufferParameterivARB(target, pname, params) glGetBufferParameterivARB_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglGetBufferPointervARB(target, pname, params) glGetBufferPointervARB_DEBUG(target, pname, params, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_ARB_texture_non_power_of_two
//
extern boolean has_GL_ARB_texture_non_power_of_two;

#ifndef __IPHONEOS__
#define GL_ARB_texture_non_power_of_two_Define() \
boolean has_GL_ARB_texture_non_power_of_two = false;
#else
#define GL_ARB_texture_non_power_of_two_Define() boolean has_GL_ARB_texture_non_power_of_two = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_texture_non_power_of_two_Init() \
has_GL_ARB_texture_non_power_of_two = GL_CheckExtension("GL_ARB_texture_non_power_of_two");
#else
#define GL_ARB_texture_non_power_of_two_Init() has_GL_ARB_texture_non_power_of_two = true;
#endif // __IPHONEOS__

//
// GL_ARB_texture_env_combine
//
extern boolean has_GL_ARB_texture_env_combine;

#ifndef __IPHONEOS__
#define GL_ARB_texture_env_combine_Define() \
boolean has_GL_ARB_texture_env_combine = false;
#else
#define GL_ARB_texture_env_combine_Define() boolean has_GL_ARB_texture_env_combine = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_texture_env_combine_Init() \
has_GL_ARB_texture_env_combine = GL_CheckExtension("GL_ARB_texture_env_combine");
#else
#define GL_ARB_texture_env_combine_Init() has_GL_ARB_texture_env_combine = true;
#endif // __IPHONEOS__

//
// GL_EXT_texture_env_combine
//
extern boolean has_GL_EXT_texture_env_combine;

#ifndef __IPHONEOS__
#define GL_EXT_texture_env_combine_Define() \
boolean has_GL_EXT_texture_env_combine = false;
#else
#define GL_EXT_texture_env_combine_Define() boolean has_GL_EXT_texture_env_combine = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_texture_env_combine_Init() \
has_GL_EXT_texture_env_combine = GL_CheckExtension("GL_EXT_texture_env_combine");
#else
#define GL_EXT_texture_env_combine_Init() has_GL_EXT_texture_env_combine = true;
#endif // __IPHONEOS__

//
// GL_EXT_texture_filter_anisotropic
//
extern boolean has_GL_EXT_texture_filter_anisotropic;

#ifndef __IPHONEOS__
#define GL_EXT_texture_filter_anisotropic_Define() \
boolean has_GL_EXT_texture_filter_anisotropic = false;
#else
#define GL_EXT_texture_filter_anisotropic_Define() boolean has_GL_EXT_texture_filter_anisotropic = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_texture_filter_anisotropic_Init() \
has_GL_EXT_texture_filter_anisotropic = GL_CheckExtension("GL_EXT_texture_filter_anisotropic");
#else
#define GL_EXT_texture_filter_anisotropic_Init() has_GL_EXT_texture_filter_anisotropic = true;
#endif // __IPHONEOS__

//
// GL_ARB_shader_objects
//
extern boolean has_GL_ARB_shader_objects;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLDELETEOBJECTARBPROC) (GLhandleARB obj);
typedef GLhandleARB (APIENTRYP PFNGLGETHANDLEARBPROC) (GLenum pname);
typedef void (APIENTRYP PFNGLDETACHOBJECTARBPROC) (GLhandleARB containerObj, GLhandleARB attachedObj);
typedef GLhandleARB (APIENTRYP PFNGLCREATESHADEROBJECTARBPROC) (GLenum shaderType);
typedef void (APIENTRYP PFNGLSHADERSOURCEARBPROC) (GLhandleARB shaderObj, GLsizei count, const GLcharARB** string, const GLint* length);
typedef void (APIENTRYP PFNGLCOMPILESHADERARBPROC) (GLhandleARB shaderObj);
typedef GLhandleARB (APIENTRYP PFNGLCREATEPROGRAMOBJECTARBPROC) (void);
typedef void (APIENTRYP PFNGLATTACHOBJECTARBPROC) (GLhandleARB containerObj, GLhandleARB obj);
typedef void (APIENTRYP PFNGLLINKPROGRAMARBPROC) (GLhandleARB programObj);
typedef void (APIENTRYP PFNGLUSEPROGRAMOBJECTARBPROC) (GLhandleARB programObj);
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMARBPROC) (GLhandleARB programObj);
typedef void (APIENTRYP PFNGLUNIFORM1FARBPROC) (GLint location, GLfloat v0);
typedef void (APIENTRYP PFNGLUNIFORM2FARBPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRYP PFNGLUNIFORM3FARBPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRYP PFNGLUNIFORM4FARBPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRYP PFNGLUNIFORM1IARBPROC) (GLint location, GLint v0);
typedef void (APIENTRYP PFNGLUNIFORM2IARBPROC) (GLint location, GLint v0, GLint v1);
typedef void (APIENTRYP PFNGLUNIFORM3IARBPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRYP PFNGLUNIFORM4IARBPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRYP PFNGLUNIFORM1FVARBPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRYP PFNGLUNIFORM2FVARBPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRYP PFNGLUNIFORM3FVARBPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRYP PFNGLUNIFORM4FVARBPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRYP PFNGLUNIFORM1IVARBPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRYP PFNGLUNIFORM2IVARBPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRYP PFNGLUNIFORM3IVARBPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRYP PFNGLUNIFORM4IVARBPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRYP PFNGLGETOBJECTPARAMETERFVARBPROC) (GLhandleARB obj, GLenum pname, GLfloat* params);
typedef void (APIENTRYP PFNGLGETOBJECTPARAMETERIVARBPROC) (GLhandleARB obj, GLenum pname, GLint* params);
typedef void (APIENTRYP PFNGLGETINFOLOGARBPROC) (GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* infoLog);
typedef void (APIENTRYP PFNGLGETATTACHEDOBJECTSARBPROC) (GLhandleARB containerObj, GLsizei maxCount, GLsizei* count, GLhandleARB* obj);
typedef GLint (APIENTRYP PFNGLGETUNIFORMLOCATIONARBPROC) (GLhandleARB programObj, const GLcharARB* name);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMARBPROC) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLcharARB* name);
typedef void (APIENTRYP PFNGLGETUNIFORMFVARBPROC) (GLhandleARB programObj, GLint location, GLfloat* params);
typedef void (APIENTRYP PFNGLGETUNIFORMIVARBPROC) (GLhandleARB programObj, GLint location, GLint* params);
typedef void (APIENTRYP PFNGLGETSHADERSOURCEARBPROC) (GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* source);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLDELETEOBJECTARBPROC _glDeleteObjectARB;
extern PFNGLGETHANDLEARBPROC _glGetHandleARB;
extern PFNGLDETACHOBJECTARBPROC _glDetachObjectARB;
extern PFNGLCREATESHADEROBJECTARBPROC _glCreateShaderObjectARB;
extern PFNGLSHADERSOURCEARBPROC _glShaderSourceARB;
extern PFNGLCOMPILESHADERARBPROC _glCompileShaderARB;
extern PFNGLCREATEPROGRAMOBJECTARBPROC _glCreateProgramObjectARB;
extern PFNGLATTACHOBJECTARBPROC _glAttachObjectARB;
extern PFNGLLINKPROGRAMARBPROC _glLinkProgramARB;
extern PFNGLUSEPROGRAMOBJECTARBPROC _glUseProgramObjectARB;
extern PFNGLVALIDATEPROGRAMARBPROC _glValidateProgramARB;
extern PFNGLUNIFORM1FARBPROC _glUniform1fARB;
extern PFNGLUNIFORM2FARBPROC _glUniform2fARB;
extern PFNGLUNIFORM3FARBPROC _glUniform3fARB;
extern PFNGLUNIFORM4FARBPROC _glUniform4fARB;
extern PFNGLUNIFORM1IARBPROC _glUniform1iARB;
extern PFNGLUNIFORM2IARBPROC _glUniform2iARB;
extern PFNGLUNIFORM3IARBPROC _glUniform3iARB;
extern PFNGLUNIFORM4IARBPROC _glUniform4iARB;
extern PFNGLUNIFORM1FVARBPROC _glUniform1fvARB;
extern PFNGLUNIFORM2FVARBPROC _glUniform2fvARB;
extern PFNGLUNIFORM3FVARBPROC _glUniform3fvARB;
extern PFNGLUNIFORM4FVARBPROC _glUniform4fvARB;
extern PFNGLUNIFORM1IVARBPROC _glUniform1ivARB;
extern PFNGLUNIFORM2IVARBPROC _glUniform2ivARB;
extern PFNGLUNIFORM3IVARBPROC _glUniform3ivARB;
extern PFNGLUNIFORM4IVARBPROC _glUniform4ivARB;
extern PFNGLUNIFORMMATRIX2FVARBPROC _glUniformMatrix2fvARB;
extern PFNGLUNIFORMMATRIX3FVARBPROC _glUniformMatrix3fvARB;
extern PFNGLUNIFORMMATRIX4FVARBPROC _glUniformMatrix4fvARB;
extern PFNGLGETOBJECTPARAMETERFVARBPROC _glGetObjectParameterfvARB;
extern PFNGLGETOBJECTPARAMETERIVARBPROC _glGetObjectParameterivARB;
extern PFNGLGETINFOLOGARBPROC _glGetInfoLogARB;
extern PFNGLGETATTACHEDOBJECTSARBPROC _glGetAttachedObjectsARB;
extern PFNGLGETUNIFORMLOCATIONARBPROC _glGetUniformLocationARB;
extern PFNGLGETACTIVEUNIFORMARBPROC _glGetActiveUniformARB;
extern PFNGLGETUNIFORMFVARBPROC _glGetUniformfvARB;
extern PFNGLGETUNIFORMIVARBPROC _glGetUniformivARB;
extern PFNGLGETSHADERSOURCEARBPROC _glGetShaderSourceARB;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_shader_objects_Define() \
boolean has_GL_ARB_shader_objects = false; \
PFNGLDELETEOBJECTARBPROC _glDeleteObjectARB = NULL; \
PFNGLGETHANDLEARBPROC _glGetHandleARB = NULL; \
PFNGLDETACHOBJECTARBPROC _glDetachObjectARB = NULL; \
PFNGLCREATESHADEROBJECTARBPROC _glCreateShaderObjectARB = NULL; \
PFNGLSHADERSOURCEARBPROC _glShaderSourceARB = NULL; \
PFNGLCOMPILESHADERARBPROC _glCompileShaderARB = NULL; \
PFNGLCREATEPROGRAMOBJECTARBPROC _glCreateProgramObjectARB = NULL; \
PFNGLATTACHOBJECTARBPROC _glAttachObjectARB = NULL; \
PFNGLLINKPROGRAMARBPROC _glLinkProgramARB = NULL; \
PFNGLUSEPROGRAMOBJECTARBPROC _glUseProgramObjectARB = NULL; \
PFNGLVALIDATEPROGRAMARBPROC _glValidateProgramARB = NULL; \
PFNGLUNIFORM1FARBPROC _glUniform1fARB = NULL; \
PFNGLUNIFORM2FARBPROC _glUniform2fARB = NULL; \
PFNGLUNIFORM3FARBPROC _glUniform3fARB = NULL; \
PFNGLUNIFORM4FARBPROC _glUniform4fARB = NULL; \
PFNGLUNIFORM1IARBPROC _glUniform1iARB = NULL; \
PFNGLUNIFORM2IARBPROC _glUniform2iARB = NULL; \
PFNGLUNIFORM3IARBPROC _glUniform3iARB = NULL; \
PFNGLUNIFORM4IARBPROC _glUniform4iARB = NULL; \
PFNGLUNIFORM1FVARBPROC _glUniform1fvARB = NULL; \
PFNGLUNIFORM2FVARBPROC _glUniform2fvARB = NULL; \
PFNGLUNIFORM3FVARBPROC _glUniform3fvARB = NULL; \
PFNGLUNIFORM4FVARBPROC _glUniform4fvARB = NULL; \
PFNGLUNIFORM1IVARBPROC _glUniform1ivARB = NULL; \
PFNGLUNIFORM2IVARBPROC _glUniform2ivARB = NULL; \
PFNGLUNIFORM3IVARBPROC _glUniform3ivARB = NULL; \
PFNGLUNIFORM4IVARBPROC _glUniform4ivARB = NULL; \
PFNGLUNIFORMMATRIX2FVARBPROC _glUniformMatrix2fvARB = NULL; \
PFNGLUNIFORMMATRIX3FVARBPROC _glUniformMatrix3fvARB = NULL; \
PFNGLUNIFORMMATRIX4FVARBPROC _glUniformMatrix4fvARB = NULL; \
PFNGLGETOBJECTPARAMETERFVARBPROC _glGetObjectParameterfvARB = NULL; \
PFNGLGETOBJECTPARAMETERIVARBPROC _glGetObjectParameterivARB = NULL; \
PFNGLGETINFOLOGARBPROC _glGetInfoLogARB = NULL; \
PFNGLGETATTACHEDOBJECTSARBPROC _glGetAttachedObjectsARB = NULL; \
PFNGLGETUNIFORMLOCATIONARBPROC _glGetUniformLocationARB = NULL; \
PFNGLGETACTIVEUNIFORMARBPROC _glGetActiveUniformARB = NULL; \
PFNGLGETUNIFORMFVARBPROC _glGetUniformfvARB = NULL; \
PFNGLGETUNIFORMIVARBPROC _glGetUniformivARB = NULL; \
PFNGLGETSHADERSOURCEARBPROC _glGetShaderSourceARB = NULL
#else
#define GL_ARB_shader_objects_Define() boolean has_GL_ARB_shader_objects = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_shader_objects_Init() \
has_GL_ARB_shader_objects = GL_CheckExtension("GL_ARB_shader_objects"); \
_glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC)GL_RegisterProc("glDeleteObjectARB"); \
_glGetHandleARB = (PFNGLGETHANDLEARBPROC)GL_RegisterProc("glGetHandleARB"); \
_glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC)GL_RegisterProc("glDetachObjectARB"); \
_glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC)GL_RegisterProc("glCreateShaderObjectARB"); \
_glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC)GL_RegisterProc("glShaderSourceARB"); \
_glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC)GL_RegisterProc("glCompileShaderARB"); \
_glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC)GL_RegisterProc("glCreateProgramObjectARB"); \
_glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC)GL_RegisterProc("glAttachObjectARB"); \
_glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC)GL_RegisterProc("glLinkProgramARB"); \
_glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC)GL_RegisterProc("glUseProgramObjectARB"); \
_glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC)GL_RegisterProc("glValidateProgramARB"); \
_glUniform1fARB = (PFNGLUNIFORM1FARBPROC)GL_RegisterProc("glUniform1fARB"); \
_glUniform2fARB = (PFNGLUNIFORM2FARBPROC)GL_RegisterProc("glUniform2fARB"); \
_glUniform3fARB = (PFNGLUNIFORM3FARBPROC)GL_RegisterProc("glUniform3fARB"); \
_glUniform4fARB = (PFNGLUNIFORM4FARBPROC)GL_RegisterProc("glUniform4fARB"); \
_glUniform1iARB = (PFNGLUNIFORM1IARBPROC)GL_RegisterProc("glUniform1iARB"); \
_glUniform2iARB = (PFNGLUNIFORM2IARBPROC)GL_RegisterProc("glUniform2iARB"); \
_glUniform3iARB = (PFNGLUNIFORM3IARBPROC)GL_RegisterProc("glUniform3iARB"); \
_glUniform4iARB = (PFNGLUNIFORM4IARBPROC)GL_RegisterProc("glUniform4iARB"); \
_glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC)GL_RegisterProc("glUniform1fvARB"); \
_glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC)GL_RegisterProc("glUniform2fvARB"); \
_glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC)GL_RegisterProc("glUniform3fvARB"); \
_glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC)GL_RegisterProc("glUniform4fvARB"); \
_glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC)GL_RegisterProc("glUniform1ivARB"); \
_glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC)GL_RegisterProc("glUniform2ivARB"); \
_glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC)GL_RegisterProc("glUniform3ivARB"); \
_glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC)GL_RegisterProc("glUniform4ivARB"); \
_glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC)GL_RegisterProc("glUniformMatrix2fvARB"); \
_glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC)GL_RegisterProc("glUniformMatrix3fvARB"); \
_glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC)GL_RegisterProc("glUniformMatrix4fvARB"); \
_glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC)GL_RegisterProc("glGetObjectParameterfvARB"); \
_glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)GL_RegisterProc("glGetObjectParameterivARB"); \
_glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC)GL_RegisterProc("glGetInfoLogARB"); \
_glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC)GL_RegisterProc("glGetAttachedObjectsARB"); \
_glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC)GL_RegisterProc("glGetUniformLocationARB"); \
_glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC)GL_RegisterProc("glGetActiveUniformARB"); \
_glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC)GL_RegisterProc("glGetUniformfvARB"); \
_glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC)GL_RegisterProc("glGetUniformivARB"); \
_glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC)GL_RegisterProc("glGetShaderSourceARB")
#else
#define GL_ARB_shader_objects_Init() has_GL_ARB_shader_objects = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglDeleteObjectARB(obj) _glDeleteObjectARB(obj)
#define dglGetHandleARB(pname) _glGetHandleARB(pname)
#define dglDetachObjectARB(containerObj, attachedObj) _glDetachObjectARB(containerObj, attachedObj)
#define dglCreateShaderObjectARB(shaderType) _glCreateShaderObjectARB(shaderType)
#define dglShaderSourceARB(shaderObj, count, string, length) _glShaderSourceARB(shaderObj, count, string, length)
#define dglCompileShaderARB(shaderObj) _glCompileShaderARB(shaderObj)
#define dglCreateProgramObjectARB() _glCreateProgramObjectARB()
#define dglAttachObjectARB(containerObj, obj) _glAttachObjectARB(containerObj, obj)
#define dglLinkProgramARB(programObj) _glLinkProgramARB(programObj)
#define dglUseProgramObjectARB(programObj) _glUseProgramObjectARB(programObj)
#define dglValidateProgramARB(programObj) _glValidateProgramARB(programObj)
#define dglUniform1fARB(location, v0) _glUniform1fARB(location, v0)
#define dglUniform2fARB(location, v0, v1) _glUniform2fARB(location, v0, v1)
#define dglUniform3fARB(location, v0, v1, v2) _glUniform3fARB(location, v0, v1, v2)
#define dglUniform4fARB(location, v0, v1, v2, v3) _glUniform4fARB(location, v0, v1, v2, v3)
#define dglUniform1iARB(location, v0) _glUniform1iARB(location, v0)
#define dglUniform2iARB(location, v0, v1) _glUniform2iARB(location, v0, v1)
#define dglUniform3iARB(location, v0, v1, v2) _glUniform3iARB(location, v0, v1, v2)
#define dglUniform4iARB(location, v0, v1, v2, v3) _glUniform4iARB(location, v0, v1, v2, v3)
#define dglUniform1fvARB(location, count, value) _glUniform1fvARB(location, count, value)
#define dglUniform2fvARB(location, count, value) _glUniform2fvARB(location, count, value)
#define dglUniform3fvARB(location, count, value) _glUniform3fvARB(location, count, value)
#define dglUniform4fvARB(location, count, value) _glUniform4fvARB(location, count, value)
#define dglUniform1ivARB(location, count, value) _glUniform1ivARB(location, count, value)
#define dglUniform2ivARB(location, count, value) _glUniform2ivARB(location, count, value)
#define dglUniform3ivARB(location, count, value) _glUniform3ivARB(location, count, value)
#define dglUniform4ivARB(location, count, value) _glUniform4ivARB(location, count, value)
#define dglUniformMatrix2fvARB(location, count, transpose, value) _glUniformMatrix2fvARB(location, count, transpose, value)
#define dglUniformMatrix3fvARB(location, count, transpose, value) _glUniformMatrix3fvARB(location, count, transpose, value)
#define dglUniformMatrix4fvARB(location, count, transpose, value) _glUniformMatrix4fvARB(location, count, transpose, value)
#define dglGetObjectParameterfvARB(obj, pname, params) _glGetObjectParameterfvARB(obj, pname, params)
#define dglGetObjectParameterivARB(obj, pname, params) _glGetObjectParameterivARB(obj, pname, params)
#define dglGetInfoLogARB(obj, maxLength, length, infoLog) _glGetInfoLogARB(obj, maxLength, length, infoLog)
#define dglGetAttachedObjectsARB(containerObj, maxCount, count, obj) _glGetAttachedObjectsARB(containerObj, maxCount, count, obj)
#define dglGetUniformLocationARB(programObj, name) _glGetUniformLocationARB(programObj, name)
#define dglGetActiveUniformARB(programObj, index, maxLength, length, size, type, name) _glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name)
#define dglGetUniformfvARB(programObj, location, params) _glGetUniformfvARB(programObj, location, params)
#define dglGetUniformivARB(programObj, location, params) _glGetUniformivARB(programObj, location, params)
#define dglGetShaderSourceARB(obj, maxLength, length, source) _glGetShaderSourceARB(obj, maxLength, length, source)

#else

static __inline void glDeleteObjectARB_DEBUG (GLhandleARB obj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteObjectARB(obj=%i)\n", file, line, obj);
#endif
    _glDeleteObjectARB(obj);
    GL_LogError("glDeleteObjectARB", file, line);
}

static __inline GLhandleARB glGetHandleARB_DEBUG (GLenum pname, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetHandleARB(pname=0x%x)\n", file, line, pname);
#endif
    _glGetHandleARB(pname);
    GL_LogError("glGetHandleARB", file, line);
}

static __inline void glDetachObjectARB_DEBUG (GLhandleARB containerObj, GLhandleARB attachedObj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDetachObjectARB(containerObj=%i, attachedObj=%i)\n", file, line, containerObj, attachedObj);
#endif
    _glDetachObjectARB(containerObj, attachedObj);
    GL_LogError("glDetachObjectARB", file, line);
}

static __inline GLhandleARB glCreateShaderObjectARB_DEBUG (GLenum shaderType, const char* file, int line)
{
    GLhandleARB t;
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCreateShaderObjectARB(shaderType=0x%x)\n", file, line, shaderType);
#endif
    t = _glCreateShaderObjectARB(shaderType);
    GL_LogError("glCreateShaderObjectARB", file, line);
    return t;
}

static __inline void glShaderSourceARB_DEBUG (GLhandleARB shaderObj, GLsizei count, void* string, GLint* length, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glShaderSourceARB(shaderObj=%i, count=0x%x, string=%p, length=%p)\n", file, line, shaderObj, count, string, length);
#endif
    _glShaderSourceARB(shaderObj, count, string, length);
    GL_LogError("glShaderSourceARB", file, line);
}

static __inline void glCompileShaderARB_DEBUG (GLhandleARB shaderObj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCompileShaderARB(shaderObj=%i)\n", file, line, shaderObj);
#endif
    _glCompileShaderARB(shaderObj);
    GL_LogError("glCompileShaderARB", file, line);
}

static __inline GLhandleARB glCreateProgramObjectARB_DEBUG (const char* file, int line)
{
    GLhandleARB t;
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCreateProgramObjectARB()\n", file, line);
#endif
    t = _glCreateProgramObjectARB();
    GL_LogError("glCreateProgramObjectARB", file, line);
    return t;
}

static __inline void glAttachObjectARB_DEBUG (GLhandleARB containerObj, GLhandleARB obj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glAttachObjectARB(containerObj=%i, obj=%i)\n", file, line, containerObj, obj);
#endif
    _glAttachObjectARB(containerObj, obj);
    GL_LogError("glAttachObjectARB", file, line);
}

static __inline void glLinkProgramARB_DEBUG (GLhandleARB programObj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glLinkProgramARB(programObj=%i)\n", file, line, programObj);
#endif
    _glLinkProgramARB(programObj);
    GL_LogError("glLinkProgramARB", file, line);
}

static __inline void glUseProgramObjectARB_DEBUG (GLhandleARB programObj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUseProgramObjectARB(programObj=%i)\n", file, line, programObj);
#endif
    _glUseProgramObjectARB(programObj);
    GL_LogError("glUseProgramObjectARB", file, line);
}

static __inline void glValidateProgramARB_DEBUG (GLhandleARB programObj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glValidateProgramARB(programObj=%i)\n", file, line, programObj);
#endif
    _glValidateProgramARB(programObj);
    GL_LogError("glValidateProgramARB", file, line);
}

static __inline void glUniform1fARB_DEBUG (GLint location, GLfloat v0, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform1fARB(location=%i, v0=%f)\n", file, line, location, v0);
#endif
    _glUniform1fARB(location, v0);
    GL_LogError("glUniform1fARB", file, line);
}

static __inline void glUniform2fARB_DEBUG (GLint location, GLfloat v0, GLfloat v1, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform2fARB(location=%i, v0=%f, v1=%f)\n", file, line, location, v0, v1);
#endif
    _glUniform2fARB(location, v0, v1);
    GL_LogError("glUniform2fARB", file, line);
}

static __inline void glUniform3fARB_DEBUG (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform3fARB(location=%i, v0=%f, v1=%f, v2=%f)\n", file, line, location, v0, v1, v2);
#endif
    _glUniform3fARB(location, v0, v1, v2);
    GL_LogError("glUniform3fARB", file, line);
}

static __inline void glUniform4fARB_DEBUG (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform4fARB(location=%i, v0=%f, v1=%f, v2=%f, v3=%f)\n", file, line, location, v0, v1, v2, v3);
#endif
    _glUniform4fARB(location, v0, v1, v2, v3);
    GL_LogError("glUniform4fARB", file, line);
}

static __inline void glUniform1iARB_DEBUG (GLint location, GLint v0, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform1iARB(location=%i, v0=%i)\n", file, line, location, v0);
#endif
    _glUniform1iARB(location, v0);
    GL_LogError("glUniform1iARB", file, line);
}

static __inline void glUniform2iARB_DEBUG (GLint location, GLint v0, GLint v1, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform2iARB(location=%i, v0=%i, v1=%i)\n", file, line, location, v0, v1);
#endif
    _glUniform2iARB(location, v0, v1);
    GL_LogError("glUniform2iARB", file, line);
}

static __inline void glUniform3iARB_DEBUG (GLint location, GLint v0, GLint v1, GLint v2, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform3iARB(location=%i, v0=%i, v1=%i, v2=%i)\n", file, line, location, v0, v1, v2);
#endif
    _glUniform3iARB(location, v0, v1, v2);
    GL_LogError("glUniform3iARB", file, line);
}

static __inline void glUniform4iARB_DEBUG (GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform4iARB(location=%i, v0=%i, v1=%i, v2=%i, v3=%i)\n", file, line, location, v0, v1, v2, v3);
#endif
    _glUniform4iARB(location, v0, v1, v2, v3);
    GL_LogError("glUniform4iARB", file, line);
}

static __inline void glUniform1fvARB_DEBUG (GLint location, GLsizei count, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform1fvARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform1fvARB(location, count, value);
    GL_LogError("glUniform1fvARB", file, line);
}

static __inline void glUniform2fvARB_DEBUG (GLint location, GLsizei count, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform2fvARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform2fvARB(location, count, value);
    GL_LogError("glUniform2fvARB", file, line);
}

static __inline void glUniform3fvARB_DEBUG (GLint location, GLsizei count, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform3fvARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform3fvARB(location, count, value);
    GL_LogError("glUniform3fvARB", file, line);
}

static __inline void glUniform4fvARB_DEBUG (GLint location, GLsizei count, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform4fvARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform4fvARB(location, count, value);
    GL_LogError("glUniform4fvARB", file, line);
}

static __inline void glUniform1ivARB_DEBUG (GLint location, GLsizei count, GLint* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform1ivARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform1ivARB(location, count, value);
    GL_LogError("glUniform1ivARB", file, line);
}

static __inline void glUniform2ivARB_DEBUG (GLint location, GLsizei count, GLint* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform2ivARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform2ivARB(location, count, value);
    GL_LogError("glUniform2ivARB", file, line);
}

static __inline void glUniform3ivARB_DEBUG (GLint location, GLsizei count, GLint* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform3ivARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform3ivARB(location, count, value);
    GL_LogError("glUniform3ivARB", file, line);
}

static __inline void glUniform4ivARB_DEBUG (GLint location, GLsizei count, GLint* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniform4ivARB(location=%i, count=0x%x, value=%p)\n", file, line, location, count, value);
#endif
    _glUniform4ivARB(location, count, value);
    GL_LogError("glUniform4ivARB", file, line);
}

static __inline void glUniformMatrix2fvARB_DEBUG (GLint location, GLsizei count, GLboolean transpose, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniformMatrix2fvARB(location=%i, count=0x%x, transpose=%i, value=%p)\n", file, line, location, count, transpose, value);
#endif
    _glUniformMatrix2fvARB(location, count, transpose, value);
    GL_LogError("glUniformMatrix2fvARB", file, line);
}

static __inline void glUniformMatrix3fvARB_DEBUG (GLint location, GLsizei count, GLboolean transpose, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniformMatrix3fvARB(location=%i, count=0x%x, transpose=%i, value=%p)\n", file, line, location, count, transpose, value);
#endif
    _glUniformMatrix3fvARB(location, count, transpose, value);
    GL_LogError("glUniformMatrix3fvARB", file, line);
}

static __inline void glUniformMatrix4fvARB_DEBUG (GLint location, GLsizei count, GLboolean transpose, GLfloat* value, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glUniformMatrix4fvARB(location=%i, count=0x%x, transpose=%i, value=%p)\n", file, line, location, count, transpose, value);
#endif
    _glUniformMatrix4fvARB(location, count, transpose, value);
    GL_LogError("glUniformMatrix4fvARB", file, line);
}

static __inline void glGetObjectParameterfvARB_DEBUG (GLhandleARB obj, GLenum pname, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetObjectParameterfvARB(obj=%i, pname=0x%x, params=%p)\n", file, line, obj, pname, params);
#endif
    _glGetObjectParameterfvARB(obj, pname, params);
    GL_LogError("glGetObjectParameterfvARB", file, line);
}

static __inline void glGetObjectParameterivARB_DEBUG (GLhandleARB obj, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetObjectParameterivARB(obj=%i, pname=0x%x, params=%p)\n", file, line, obj, pname, params);
#endif
    _glGetObjectParameterivARB(obj, pname, params);
    GL_LogError("glGetObjectParameterivARB", file, line);
}

static __inline void glGetInfoLogARB_DEBUG (GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* infoLog, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetInfoLogARB(obj=%i, maxLength=0x%x, length=%p, infoLog=%p)\n", file, line, obj, maxLength, length, infoLog);
#endif
    _glGetInfoLogARB(obj, maxLength, length, infoLog);
    GL_LogError("glGetInfoLogARB", file, line);
}

static __inline void glGetAttachedObjectsARB_DEBUG (GLhandleARB containerObj, GLsizei maxCount, GLsizei* count, GLhandleARB* obj, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetAttachedObjectsARB(containerObj=%i, maxCount=0x%x, count=%p, obj=%p)\n", file, line, containerObj, maxCount, count, obj);
#endif
    _glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
    GL_LogError("glGetAttachedObjectsARB", file, line);
}

static __inline GLint glGetUniformLocationARB_DEBUG (GLhandleARB programObj, GLcharARB* name, const char* file, int line)
{
    GLint t;
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetUniformLocationARB(programObj=%i, name=%p)\n", file, line, programObj, name);
#endif
    t = _glGetUniformLocationARB(programObj, name);
    GL_LogError("glGetUniformLocationARB", file, line);
    return t;
}

static __inline void glGetActiveUniformARB_DEBUG (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLcharARB* name, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetActiveUniformARB(programObj=%i, index=%i, maxLength=0x%x, length=%p, size=%p, type=%p, name=%p)\n", file, line, programObj, index, maxLength, length, size, type, name);
#endif
    _glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
    GL_LogError("glGetActiveUniformARB", file, line);
}

static __inline void glGetUniformfvARB_DEBUG (GLhandleARB programObj, GLint location, GLfloat* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetUniformfvARB(programObj=%i, location=%i, params=%p)\n", file, line, programObj, location, params);
#endif
    _glGetUniformfvARB(programObj, location, params);
    GL_LogError("glGetUniformfvARB", file, line);
}

static __inline void glGetUniformivARB_DEBUG (GLhandleARB programObj, GLint location, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetUniformivARB(programObj=%i, location=%i, params=%p)\n", file, line, programObj, location, params);
#endif
    _glGetUniformivARB(programObj, location, params);
    GL_LogError("glGetUniformivARB", file, line);
}

static __inline void glGetShaderSourceARB_DEBUG (GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* source, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetShaderSourceARB(obj=%i, maxLength=0x%x, length=%p, source=%p)\n", file, line, obj, maxLength, length, source);
#endif
    _glGetShaderSourceARB(obj, maxLength, length, source);
    GL_LogError("glGetShaderSourceARB", file, line);
}


#define dglDeleteObjectARB(obj) glDeleteObjectARB_DEBUG(obj, __FILE__, __LINE__)
#define dglGetHandleARB(pname) glGetHandleARB_DEBUG(pname, __FILE__, __LINE__)
#define dglDetachObjectARB(containerObj, attachedObj) glDetachObjectARB_DEBUG(containerObj, attachedObj, __FILE__, __LINE__)
#define dglCreateShaderObjectARB(shaderType) glCreateShaderObjectARB_DEBUG(shaderType, __FILE__, __LINE__)
#define dglShaderSourceARB(shaderObj, count, string, length) glShaderSourceARB_DEBUG(shaderObj, count, string, length, __FILE__, __LINE__)
#define dglCompileShaderARB(shaderObj) glCompileShaderARB_DEBUG(shaderObj, __FILE__, __LINE__)
#define dglCreateProgramObjectARB() glCreateProgramObjectARB_DEBUG(__FILE__, __LINE__)
#define dglAttachObjectARB(containerObj, obj) glAttachObjectARB_DEBUG(containerObj, obj, __FILE__, __LINE__)
#define dglLinkProgramARB(programObj) glLinkProgramARB_DEBUG(programObj, __FILE__, __LINE__)
#define dglUseProgramObjectARB(programObj) glUseProgramObjectARB_DEBUG(programObj, __FILE__, __LINE__)
#define dglValidateProgramARB(programObj) glValidateProgramARB_DEBUG(programObj, __FILE__, __LINE__)
#define dglUniform1fARB(location, v0) glUniform1fARB_DEBUG(location, v0, __FILE__, __LINE__)
#define dglUniform2fARB(location, v0, v1) glUniform2fARB_DEBUG(location, v0, v1, __FILE__, __LINE__)
#define dglUniform3fARB(location, v0, v1, v2) glUniform3fARB_DEBUG(location, v0, v1, v2, __FILE__, __LINE__)
#define dglUniform4fARB(location, v0, v1, v2, v3) glUniform4fARB_DEBUG(location, v0, v1, v2, v3, __FILE__, __LINE__)
#define dglUniform1iARB(location, v0) glUniform1iARB_DEBUG(location, v0, __FILE__, __LINE__)
#define dglUniform2iARB(location, v0, v1) glUniform2iARB_DEBUG(location, v0, v1, __FILE__, __LINE__)
#define dglUniform3iARB(location, v0, v1, v2) glUniform3iARB_DEBUG(location, v0, v1, v2, __FILE__, __LINE__)
#define dglUniform4iARB(location, v0, v1, v2, v3) glUniform4iARB_DEBUG(location, v0, v1, v2, v3, __FILE__, __LINE__)
#define dglUniform1fvARB(location, count, value) glUniform1fvARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform2fvARB(location, count, value) glUniform2fvARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform3fvARB(location, count, value) glUniform3fvARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform4fvARB(location, count, value) glUniform4fvARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform1ivARB(location, count, value) glUniform1ivARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform2ivARB(location, count, value) glUniform2ivARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform3ivARB(location, count, value) glUniform3ivARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniform4ivARB(location, count, value) glUniform4ivARB_DEBUG(location, count, value, __FILE__, __LINE__)
#define dglUniformMatrix2fvARB(location, count, transpose, value) glUniformMatrix2fvARB_DEBUG(location, count, transpose, value, __FILE__, __LINE__)
#define dglUniformMatrix3fvARB(location, count, transpose, value) glUniformMatrix3fvARB_DEBUG(location, count, transpose, value, __FILE__, __LINE__)
#define dglUniformMatrix4fvARB(location, count, transpose, value) glUniformMatrix4fvARB_DEBUG(location, count, transpose, value, __FILE__, __LINE__)
#define dglGetObjectParameterfvARB(obj, pname, params) glGetObjectParameterfvARB_DEBUG(obj, pname, params, __FILE__, __LINE__)
#define dglGetObjectParameterivARB(obj, pname, params) glGetObjectParameterivARB_DEBUG(obj, pname, params, __FILE__, __LINE__)
#define dglGetInfoLogARB(obj, maxLength, length, infoLog) glGetInfoLogARB_DEBUG(obj, maxLength, length, infoLog, __FILE__, __LINE__)
#define dglGetAttachedObjectsARB(containerObj, maxCount, count, obj) glGetAttachedObjectsARB_DEBUG(containerObj, maxCount, count, obj, __FILE__, __LINE__)
#define dglGetUniformLocationARB(programObj, name) glGetUniformLocationARB_DEBUG(programObj, name, __FILE__, __LINE__)
#define dglGetActiveUniformARB(programObj, index, maxLength, length, size, type, name) glGetActiveUniformARB_DEBUG(programObj, index, maxLength, length, size, type, name, __FILE__, __LINE__)
#define dglGetUniformfvARB(programObj, location, params) glGetUniformfvARB_DEBUG(programObj, location, params, __FILE__, __LINE__)
#define dglGetUniformivARB(programObj, location, params) glGetUniformivARB_DEBUG(programObj, location, params, __FILE__, __LINE__)
#define dglGetShaderSourceARB(obj, maxLength, length, source) glGetShaderSourceARB_DEBUG(obj, maxLength, length, source, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_ARB_framebuffer_object
//
extern boolean has_GL_ARB_framebuffer_object;

#ifndef __IPHONEOS__
typedef GLboolean (APIENTRYP PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef void (APIENTRYP PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint* renderbuffers);
typedef void (APIENTRYP PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint* renderbuffers);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef GLboolean (APIENTRYP PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef void (APIENTRYP PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint* framebuffers);
typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint* framebuffers);
typedef GLenum (APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (APIENTRYP PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef void (APIENTRYP PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLISRENDERBUFFERPROC _glIsRenderbuffer;
extern PFNGLBINDRENDERBUFFERPROC _glBindRenderbuffer;
extern PFNGLDELETERENDERBUFFERSPROC _glDeleteRenderbuffers;
extern PFNGLGENRENDERBUFFERSPROC _glGenRenderbuffers;
extern PFNGLRENDERBUFFERSTORAGEPROC _glRenderbufferStorage;
extern PFNGLGETRENDERBUFFERPARAMETERIVPROC _glGetRenderbufferParameteriv;
extern PFNGLISFRAMEBUFFERPROC _glIsFramebuffer;
extern PFNGLBINDFRAMEBUFFERPROC _glBindFramebuffer;
extern PFNGLDELETEFRAMEBUFFERSPROC _glDeleteFramebuffers;
extern PFNGLGENFRAMEBUFFERSPROC _glGenFramebuffers;
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC _glCheckFramebufferStatus;
extern PFNGLFRAMEBUFFERTEXTURE1DPROC _glFramebufferTexture1D;
extern PFNGLFRAMEBUFFERTEXTURE2DPROC _glFramebufferTexture2D;
extern PFNGLFRAMEBUFFERTEXTURE3DPROC _glFramebufferTexture3D;
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC _glFramebufferRenderbuffer;
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC _glGetFramebufferAttachmentParameteriv;
extern PFNGLGENERATEMIPMAPPROC _glGenerateMipmap;
extern PFNGLBLITFRAMEBUFFERPROC _glBlitFramebuffer;
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC _glRenderbufferStorageMultisample;
extern PFNGLFRAMEBUFFERTEXTURELAYERPROC _glFramebufferTextureLayer;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_framebuffer_object_Define() \
boolean has_GL_ARB_framebuffer_object = false; \
PFNGLISRENDERBUFFERPROC _glIsRenderbuffer = NULL; \
PFNGLBINDRENDERBUFFERPROC _glBindRenderbuffer = NULL; \
PFNGLDELETERENDERBUFFERSPROC _glDeleteRenderbuffers = NULL; \
PFNGLGENRENDERBUFFERSPROC _glGenRenderbuffers = NULL; \
PFNGLRENDERBUFFERSTORAGEPROC _glRenderbufferStorage = NULL; \
PFNGLGETRENDERBUFFERPARAMETERIVPROC _glGetRenderbufferParameteriv = NULL; \
PFNGLISFRAMEBUFFERPROC _glIsFramebuffer = NULL; \
PFNGLBINDFRAMEBUFFERPROC _glBindFramebuffer = NULL; \
PFNGLDELETEFRAMEBUFFERSPROC _glDeleteFramebuffers = NULL; \
PFNGLGENFRAMEBUFFERSPROC _glGenFramebuffers = NULL; \
PFNGLCHECKFRAMEBUFFERSTATUSPROC _glCheckFramebufferStatus = NULL; \
PFNGLFRAMEBUFFERTEXTURE1DPROC _glFramebufferTexture1D = NULL; \
PFNGLFRAMEBUFFERTEXTURE2DPROC _glFramebufferTexture2D = NULL; \
PFNGLFRAMEBUFFERTEXTURE3DPROC _glFramebufferTexture3D = NULL; \
PFNGLFRAMEBUFFERRENDERBUFFERPROC _glFramebufferRenderbuffer = NULL; \
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC _glGetFramebufferAttachmentParameteriv = NULL; \
PFNGLGENERATEMIPMAPPROC _glGenerateMipmap = NULL; \
PFNGLBLITFRAMEBUFFERPROC _glBlitFramebuffer = NULL; \
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC _glRenderbufferStorageMultisample = NULL; \
PFNGLFRAMEBUFFERTEXTURELAYERPROC _glFramebufferTextureLayer = NULL
#else
#define GL_ARB_framebuffer_object_Define() boolean has_GL_ARB_framebuffer_object = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_framebuffer_object_Init() \
has_GL_ARB_framebuffer_object = GL_CheckExtension("GL_ARB_framebuffer_object"); \
_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)GL_RegisterProc("glIsRenderbuffer"); \
_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)GL_RegisterProc("glBindRenderbuffer"); \
_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)GL_RegisterProc("glDeleteRenderbuffers"); \
_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)GL_RegisterProc("glGenRenderbuffers"); \
_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)GL_RegisterProc("glRenderbufferStorage"); \
_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)GL_RegisterProc("glGetRenderbufferParameteriv"); \
_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)GL_RegisterProc("glIsFramebuffer"); \
_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)GL_RegisterProc("glBindFramebuffer"); \
_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)GL_RegisterProc("glDeleteFramebuffers"); \
_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)GL_RegisterProc("glGenFramebuffers"); \
_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)GL_RegisterProc("glCheckFramebufferStatus"); \
_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)GL_RegisterProc("glFramebufferTexture1D"); \
_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)GL_RegisterProc("glFramebufferTexture2D"); \
_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)GL_RegisterProc("glFramebufferTexture3D"); \
_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)GL_RegisterProc("glFramebufferRenderbuffer"); \
_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)GL_RegisterProc("glGetFramebufferAttachmentParameteriv"); \
_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)GL_RegisterProc("glGenerateMipmap"); \
_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)GL_RegisterProc("glBlitFramebuffer"); \
_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)GL_RegisterProc("glRenderbufferStorageMultisample"); \
_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)GL_RegisterProc("glFramebufferTextureLayer")
#else
#define GL_ARB_framebuffer_object_Init() has_GL_ARB_framebuffer_object = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglIsRenderbuffer(renderbuffer) _glIsRenderbuffer(renderbuffer)
#define dglBindRenderbuffer(target, renderbuffer) _glBindRenderbuffer(target, renderbuffer)
#define dglDeleteRenderbuffers(n, renderbuffers) _glDeleteRenderbuffers(n, renderbuffers)
#define dglGenRenderbuffers(n, renderbuffers) _glGenRenderbuffers(n, renderbuffers)
#define dglRenderbufferStorage(target, internalformat, width, height) _glRenderbufferStorage(target, internalformat, width, height)
#define dglGetRenderbufferParameteriv(target, pname, params) _glGetRenderbufferParameteriv(target, pname, params)
#define dglIsFramebuffer(framebuffer) _glIsFramebuffer(framebuffer)
#define dglBindFramebuffer(target, framebuffer) _glBindFramebuffer(target, framebuffer)
#define dglDeleteFramebuffers(n, framebuffers) _glDeleteFramebuffers(n, framebuffers)
#define dglGenFramebuffers(n, framebuffers) _glGenFramebuffers(n, framebuffers)
#define dglCheckFramebufferStatus(target) _glCheckFramebufferStatus(target)
#define dglFramebufferTexture1D(target, attachment, textarget, texture, level) _glFramebufferTexture1D(target, attachment, textarget, texture, level)
#define dglFramebufferTexture2D(target, attachment, textarget, texture, level) _glFramebufferTexture2D(target, attachment, textarget, texture, level)
#define dglFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset) _glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset)
#define dglFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer) _glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer)
#define dglGetFramebufferAttachmentParameteriv(target, attachment, pname, params) _glGetFramebufferAttachmentParameteriv(target, attachment, pname, params)
#define dglGenerateMipmap(target) _glGenerateMipmap(target)
#define dglBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter) _glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter)
#define dglRenderbufferStorageMultisample(target, samples, internalformat, width, height) _glRenderbufferStorageMultisample(target, samples, internalformat, width, height)
#define dglFramebufferTextureLayer(target, attachment, texture, level, layer) _glFramebufferTextureLayer(target, attachment, texture, level, layer)

#else

static __inline GLboolean glIsRenderbuffer_DEBUG (GLuint renderbuffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsRenderbuffer(renderbuffer=%i)\n", file, line, renderbuffer);
#endif
    _glIsRenderbuffer(renderbuffer);
    GL_LogError("glIsRenderbuffer", file, line);
}

static __inline void glBindRenderbuffer_DEBUG (GLenum target, GLuint renderbuffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBindRenderbuffer(target=0x%x, renderbuffer=%i)\n", file, line, target, renderbuffer);
#endif
    _glBindRenderbuffer(target, renderbuffer);
    GL_LogError("glBindRenderbuffer", file, line);
}

static __inline void glDeleteRenderbuffers_DEBUG (GLsizei n, GLuint* renderbuffers, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteRenderbuffers(n=0x%x, renderbuffers=%p)\n", file, line, n, renderbuffers);
#endif
    _glDeleteRenderbuffers(n, renderbuffers);
    GL_LogError("glDeleteRenderbuffers", file, line);
}

static __inline void glGenRenderbuffers_DEBUG (GLsizei n, GLuint* renderbuffers, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenRenderbuffers(n=0x%x, renderbuffers=%p)\n", file, line, n, renderbuffers);
#endif
    _glGenRenderbuffers(n, renderbuffers);
    GL_LogError("glGenRenderbuffers", file, line);
}

static __inline void glRenderbufferStorage_DEBUG (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRenderbufferStorage(target=0x%x, internalformat=0x%x, width=0x%x, height=0x%x)\n", file, line, target, internalformat, width, height);
#endif
    _glRenderbufferStorage(target, internalformat, width, height);
    GL_LogError("glRenderbufferStorage", file, line);
}

static __inline void glGetRenderbufferParameteriv_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetRenderbufferParameteriv(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    _glGetRenderbufferParameteriv(target, pname, params);
    GL_LogError("glGetRenderbufferParameteriv", file, line);
}

static __inline GLboolean glIsFramebuffer_DEBUG (GLuint framebuffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsFramebuffer(framebuffer=%i)\n", file, line, framebuffer);
#endif
    _glIsFramebuffer(framebuffer);
    GL_LogError("glIsFramebuffer", file, line);
}

static __inline void glBindFramebuffer_DEBUG (GLenum target, GLuint framebuffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBindFramebuffer(target=0x%x, framebuffer=%i)\n", file, line, target, framebuffer);
#endif
    _glBindFramebuffer(target, framebuffer);
    GL_LogError("glBindFramebuffer", file, line);
}

static __inline void glDeleteFramebuffers_DEBUG (GLsizei n, GLuint* framebuffers, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteFramebuffers(n=0x%x, framebuffers=%p)\n", file, line, n, framebuffers);
#endif
    _glDeleteFramebuffers(n, framebuffers);
    GL_LogError("glDeleteFramebuffers", file, line);
}

static __inline void glGenFramebuffers_DEBUG (GLsizei n, GLuint* framebuffers, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenFramebuffers(n=0x%x, framebuffers=%p)\n", file, line, n, framebuffers);
#endif
    _glGenFramebuffers(n, framebuffers);
    GL_LogError("glGenFramebuffers", file, line);
}

static __inline GLenum glCheckFramebufferStatus_DEBUG (GLenum target, const char* file, int line)
{
    GLenum t;
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glCheckFramebufferStatus(target=0x%x)\n", file, line, target);
#endif
    t = _glCheckFramebufferStatus(target);
    GL_LogError("glCheckFramebufferStatus", file, line);
    return t;
}

static __inline void glFramebufferTexture1D_DEBUG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFramebufferTexture1D(target=0x%x, attachment=0x%x, textarget=0x%x, texture=%i, level=%i)\n", file, line, target, attachment, textarget, texture, level);
#endif
    _glFramebufferTexture1D(target, attachment, textarget, texture, level);
    GL_LogError("glFramebufferTexture1D", file, line);
}

static __inline void glFramebufferTexture2D_DEBUG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFramebufferTexture2D(target=0x%x, attachment=0x%x, textarget=0x%x, texture=%i, level=%i)\n", file, line, target, attachment, textarget, texture, level);
#endif
    _glFramebufferTexture2D(target, attachment, textarget, texture, level);
    GL_LogError("glFramebufferTexture2D", file, line);
}

static __inline void glFramebufferTexture3D_DEBUG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFramebufferTexture3D(target=0x%x, attachment=0x%x, textarget=0x%x, texture=%i, level=%i, zoffset=%i)\n", file, line, target, attachment, textarget, texture, level, zoffset);
#endif
    _glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
    GL_LogError("glFramebufferTexture3D", file, line);
}

static __inline void glFramebufferRenderbuffer_DEBUG (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFramebufferRenderbuffer(target=0x%x, attachment=0x%x, renderbuffertarget=0x%x, renderbuffer=%i)\n", file, line, target, attachment, renderbuffertarget, renderbuffer);
#endif
    _glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
    GL_LogError("glFramebufferRenderbuffer", file, line);
}

static __inline void glGetFramebufferAttachmentParameteriv_DEBUG (GLenum target, GLenum attachment, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetFramebufferAttachmentParameteriv(target=0x%x, attachment=0x%x, pname=0x%x, params=%p)\n", file, line, target, attachment, pname, params);
#endif
    _glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
    GL_LogError("glGetFramebufferAttachmentParameteriv", file, line);
}

static __inline void glGenerateMipmap_DEBUG (GLenum target, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenerateMipmap(target=0x%x)\n", file, line, target);
#endif
    _glGenerateMipmap(target);
    GL_LogError("glGenerateMipmap", file, line);
}

static __inline void glBlitFramebuffer_DEBUG (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBlitFramebuffer(srcX0=%i, srcY0=%i, srcX1=%i, srcY1=%i, dstX0=%i, dstY0=%i, dstX1=%i, dstY1=%i, mask=0x%x, filter=0x%x)\n", file, line, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
#endif
    _glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    GL_LogError("glBlitFramebuffer", file, line);
}

static __inline void glRenderbufferStorageMultisample_DEBUG (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glRenderbufferStorageMultisample(target=0x%x, samples=0x%x, internalformat=0x%x, width=0x%x, height=0x%x)\n", file, line, target, samples, internalformat, width, height);
#endif
    _glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
    GL_LogError("glRenderbufferStorageMultisample", file, line);
}

static __inline void glFramebufferTextureLayer_DEBUG (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glFramebufferTextureLayer(target=0x%x, attachment=0x%x, texture=%i, level=%i, layer=%i)\n", file, line, target, attachment, texture, level, layer);
#endif
    _glFramebufferTextureLayer(target, attachment, texture, level, layer);
    GL_LogError("glFramebufferTextureLayer", file, line);
}


#define dglIsRenderbuffer(renderbuffer) glIsRenderbuffer_DEBUG(renderbuffer, __FILE__, __LINE__)
#define dglBindRenderbuffer(target, renderbuffer) glBindRenderbuffer_DEBUG(target, renderbuffer, __FILE__, __LINE__)
#define dglDeleteRenderbuffers(n, renderbuffers) glDeleteRenderbuffers_DEBUG(n, renderbuffers, __FILE__, __LINE__)
#define dglGenRenderbuffers(n, renderbuffers) glGenRenderbuffers_DEBUG(n, renderbuffers, __FILE__, __LINE__)
#define dglRenderbufferStorage(target, internalformat, width, height) glRenderbufferStorage_DEBUG(target, internalformat, width, height, __FILE__, __LINE__)
#define dglGetRenderbufferParameteriv(target, pname, params) glGetRenderbufferParameteriv_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglIsFramebuffer(framebuffer) glIsFramebuffer_DEBUG(framebuffer, __FILE__, __LINE__)
#define dglBindFramebuffer(target, framebuffer) glBindFramebuffer_DEBUG(target, framebuffer, __FILE__, __LINE__)
#define dglDeleteFramebuffers(n, framebuffers) glDeleteFramebuffers_DEBUG(n, framebuffers, __FILE__, __LINE__)
#define dglGenFramebuffers(n, framebuffers) glGenFramebuffers_DEBUG(n, framebuffers, __FILE__, __LINE__)
#define dglCheckFramebufferStatus(target) glCheckFramebufferStatus_DEBUG(target, __FILE__, __LINE__)
#define dglFramebufferTexture1D(target, attachment, textarget, texture, level) glFramebufferTexture1D_DEBUG(target, attachment, textarget, texture, level, __FILE__, __LINE__)
#define dglFramebufferTexture2D(target, attachment, textarget, texture, level) glFramebufferTexture2D_DEBUG(target, attachment, textarget, texture, level, __FILE__, __LINE__)
#define dglFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset) glFramebufferTexture3D_DEBUG(target, attachment, textarget, texture, level, zoffset, __FILE__, __LINE__)
#define dglFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer) glFramebufferRenderbuffer_DEBUG(target, attachment, renderbuffertarget, renderbuffer, __FILE__, __LINE__)
#define dglGetFramebufferAttachmentParameteriv(target, attachment, pname, params) glGetFramebufferAttachmentParameteriv_DEBUG(target, attachment, pname, params, __FILE__, __LINE__)
#define dglGenerateMipmap(target) glGenerateMipmap_DEBUG(target, __FILE__, __LINE__)
#define dglBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter) glBlitFramebuffer_DEBUG(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter, __FILE__, __LINE__)
#define dglRenderbufferStorageMultisample(target, samples, internalformat, width, height) glRenderbufferStorageMultisample_DEBUG(target, samples, internalformat, width, height, __FILE__, __LINE__)
#define dglFramebufferTextureLayer(target, attachment, texture, level, layer) glFramebufferTextureLayer_DEBUG(target, attachment, texture, level, layer, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_ARB_occlusion_query
//
extern boolean has_GL_ARB_occlusion_query;

#ifndef __IPHONEOS__
typedef void (APIENTRYP PFNGLGENQUERIESARBPROC) (GLsizei n, GLuint* ids);
typedef void (APIENTRYP PFNGLDELETEQUERIESARBPROC) (GLsizei n, const GLuint* ids);
typedef GLboolean (APIENTRYP PFNGLISQUERYARBPROC) (GLuint id);
typedef void (APIENTRYP PFNGLBEGINQUERYARBPROC) (GLenum target, GLuint id);
typedef void (APIENTRYP PFNGLENDQUERYARBPROC) (GLenum target);
typedef void (APIENTRYP PFNGLGETQUERYIVARBPROC) (GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTIVARBPROC) (GLuint id, GLenum pname, GLint* params);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUIVARBPROC) (GLuint id, GLenum pname, GLuint* params);
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
extern PFNGLGENQUERIESARBPROC _glGenQueriesARB;
extern PFNGLDELETEQUERIESARBPROC _glDeleteQueriesARB;
extern PFNGLISQUERYARBPROC _glIsQueryARB;
extern PFNGLBEGINQUERYARBPROC _glBeginQueryARB;
extern PFNGLENDQUERYARBPROC _glEndQueryARB;
extern PFNGLGETQUERYIVARBPROC _glGetQueryivARB;
extern PFNGLGETQUERYOBJECTIVARBPROC _glGetQueryObjectivARB;
extern PFNGLGETQUERYOBJECTUIVARBPROC _glGetQueryObjectuivARB;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_occlusion_query_Define() \
boolean has_GL_ARB_occlusion_query = false; \
PFNGLGENQUERIESARBPROC _glGenQueriesARB = NULL; \
PFNGLDELETEQUERIESARBPROC _glDeleteQueriesARB = NULL; \
PFNGLISQUERYARBPROC _glIsQueryARB = NULL; \
PFNGLBEGINQUERYARBPROC _glBeginQueryARB = NULL; \
PFNGLENDQUERYARBPROC _glEndQueryARB = NULL; \
PFNGLGETQUERYIVARBPROC _glGetQueryivARB = NULL; \
PFNGLGETQUERYOBJECTIVARBPROC _glGetQueryObjectivARB = NULL; \
PFNGLGETQUERYOBJECTUIVARBPROC _glGetQueryObjectuivARB = NULL
#else
#define GL_ARB_occlusion_query_Define() boolean has_GL_ARB_occlusion_query = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_ARB_occlusion_query_Init() \
has_GL_ARB_occlusion_query = GL_CheckExtension("GL_ARB_occlusion_query"); \
_glGenQueriesARB = (PFNGLGENQUERIESARBPROC)GL_RegisterProc("glGenQueriesARB"); \
_glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC)GL_RegisterProc("glDeleteQueriesARB"); \
_glIsQueryARB = (PFNGLISQUERYARBPROC)GL_RegisterProc("glIsQueryARB"); \
_glBeginQueryARB = (PFNGLBEGINQUERYARBPROC)GL_RegisterProc("glBeginQueryARB"); \
_glEndQueryARB = (PFNGLENDQUERYARBPROC)GL_RegisterProc("glEndQueryARB"); \
_glGetQueryivARB = (PFNGLGETQUERYIVARBPROC)GL_RegisterProc("glGetQueryivARB"); \
_glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC)GL_RegisterProc("glGetQueryObjectivARB"); \
_glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC)GL_RegisterProc("glGetQueryObjectuivARB")
#else
#define GL_ARB_occlusion_query_Init() has_GL_ARB_occlusion_query = true;
#endif // __IPHONEOS__

#ifndef USE_DEBUG_GLFUNCS

#define dglGenQueriesARB(n, ids) _glGenQueriesARB(n, ids)
#define dglDeleteQueriesARB(n, ids) _glDeleteQueriesARB(n, ids)
#define dglIsQueryARB(id) _glIsQueryARB(id)
#define dglBeginQueryARB(target, id) _glBeginQueryARB(target, id)
#define dglEndQueryARB(target) _glEndQueryARB(target)
#define dglGetQueryivARB(target, pname, params) _glGetQueryivARB(target, pname, params)
#define dglGetQueryObjectivARB(id, pname, params) _glGetQueryObjectivARB(id, pname, params)
#define dglGetQueryObjectuivARB(id, pname, params) _glGetQueryObjectuivARB(id, pname, params)

#else

static __inline void glGenQueriesARB_DEBUG (GLsizei n, GLuint* ids, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGenQueriesARB(n=0x%x, ids=%p)\n", file, line, n, ids);
#endif
    _glGenQueriesARB(n, ids);
    GL_LogError("glGenQueriesARB", file, line);
}

static __inline void glDeleteQueriesARB_DEBUG (GLsizei n, GLuint* ids, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glDeleteQueriesARB(n=0x%x, ids=%p)\n", file, line, n, ids);
#endif
    _glDeleteQueriesARB(n, ids);
    GL_LogError("glDeleteQueriesARB", file, line);
}

static __inline GLboolean glIsQueryARB_DEBUG (GLuint id, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glIsQueryARB(id=%i)\n", file, line, id);
#endif
    _glIsQueryARB(id);
    GL_LogError("glIsQueryARB", file, line);
}

static __inline void glBeginQueryARB_DEBUG (GLenum target, GLuint id, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glBeginQueryARB(target=0x%x, id=%i)\n", file, line, target, id);
#endif
    _glBeginQueryARB(target, id);
    GL_LogError("glBeginQueryARB", file, line);
}

static __inline void glEndQueryARB_DEBUG (GLenum target, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glEndQueryARB(target=0x%x)\n", file, line, target);
#endif
    _glEndQueryARB(target);
    GL_LogError("glEndQueryARB", file, line);
}

static __inline void glGetQueryivARB_DEBUG (GLenum target, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetQueryivARB(target=0x%x, pname=0x%x, params=%p)\n", file, line, target, pname, params);
#endif
    _glGetQueryivARB(target, pname, params);
    GL_LogError("glGetQueryivARB", file, line);
}

static __inline void glGetQueryObjectivARB_DEBUG (GLuint id, GLenum pname, GLint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetQueryObjectivARB(id=%i, pname=0x%x, params=%p)\n", file, line, id, pname, params);
#endif
    _glGetQueryObjectivARB(id, pname, params);
    GL_LogError("glGetQueryObjectivARB", file, line);
}

static __inline void glGetQueryObjectuivARB_DEBUG (GLuint id, GLenum pname, GLuint* params, const char* file, int line)
{
#ifdef LOG_GLFUNC_CALLS
    fprintf(stderr, "file = %s, line = %i, glGetQueryObjectuivARB(id=%i, pname=0x%x, params=%p)\n", file, line, id, pname, params);
#endif
    _glGetQueryObjectuivARB(id, pname, params);
    GL_LogError("glGetQueryObjectuivARB", file, line);
}


#define dglGenQueriesARB(n, ids) glGenQueriesARB_DEBUG(n, ids, __FILE__, __LINE__)
#define dglDeleteQueriesARB(n, ids) glDeleteQueriesARB_DEBUG(n, ids, __FILE__, __LINE__)
#define dglIsQueryARB(id) glIsQueryARB_DEBUG(id, __FILE__, __LINE__)
#define dglBeginQueryARB(target, id) glBeginQueryARB_DEBUG(target, id, __FILE__, __LINE__)
#define dglEndQueryARB(target) glEndQueryARB_DEBUG(target, __FILE__, __LINE__)
#define dglGetQueryivARB(target, pname, params) glGetQueryivARB_DEBUG(target, pname, params, __FILE__, __LINE__)
#define dglGetQueryObjectivARB(id, pname, params) glGetQueryObjectivARB_DEBUG(id, pname, params, __FILE__, __LINE__)
#define dglGetQueryObjectuivARB(id, pname, params) glGetQueryObjectuivARB_DEBUG(id, pname, params, __FILE__, __LINE__)

#endif // USE_DEBUG_GLFUNCS

//
// GL_EXT_texture_array
//
extern boolean has_GL_EXT_texture_array;

#ifndef __IPHONEOS__
#define GL_EXT_texture_array_Define() \
boolean has_GL_EXT_texture_array = false;
#else
#define GL_EXT_texture_array_Define() boolean has_GL_EXT_texture_array = false;
#endif // __IPHONEOS__

#ifndef __IPHONEOS__
#define GL_EXT_texture_array_Init() \
has_GL_EXT_texture_array = GL_CheckExtension("GL_EXT_texture_array");
#else
#define GL_EXT_texture_array_Init() has_GL_EXT_texture_array = true;
#endif // __IPHONEOS__

#ifdef __cplusplus
}
#endif


#endif //USEG_GLES2

#endif // __DGL_H__
