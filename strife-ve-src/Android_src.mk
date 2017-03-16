
LOCAL_PATH := $(call my-dir)/src/

include $(CLEAR_VARS)

LOCAL_MODULE    := choc-doom


LOCAL_CFLAGS :=  -O0 -g -Wdeclaration-after-statement -D__MOBILE__ -DSDL2_COMPAT -D_GNU_SOURCE=1 -D_REENTRANT -DUSE_GLES -DHAVE_JWZGLES

LOCAL_LDLIBS += -lGLESv1_CM -lEGL

LOCAL_LDLIBS += -llog -lz

LOCAL_C_INCLUDES +=   $(LOCAL_PATH)/../textscreen $(LOCAL_PATH)/../pcsound $(LOCAL_PATH)/../opl  $(LOCAL_PATH)/mobile $(LOCAL_PATH)/strife $(LOCAL_PATH)/opengl
LOCAL_C_INCLUDES +=  $(TOP_DIR)/SDL2-2.0.5/include $(TOP_DIR)/SDL2_net $(TOP_DIR)/SDL2_mixer  $(TOP_DIR)/MobileTouchControls $(TOP_DIR)/MobileTouchControls/libpng $(TOP_DIR)/  $(TOP_DIR)/ffmpeg/include

 
 ANDROID_FILES = \
       mobile/android-jni.cpp \
       mobile/game_interface.cpp \


          #i_cdmus.c            i_cdmus.h             \
          #i_video.c            i_video.h             \
          #v_video.c            v_video.h             \

COMMON_SOURCE_FILES = \
i_main.c                                   \
i_system.c           i_system.h            \
m_argv.c             m_argv.h              \
m_misc.c             m_misc.h

GAME_SOURCE_FILES = \
i_video.c            i_video.h             \
v_video.c            v_video.h             \
d_event.c            d_event.h             \
                     doomkeys.h            \
                     doomfeatures.h        \
                     doomtype.h            \
d_iwad.c             d_iwad.h              \
d_loop.c             d_loop.h              \
d_mode.c             d_mode.h              \
                     d_ticcmd.h            \
deh_str.c            deh_str.h             \
deh_io.c \
deh_main.c \
deh_mapping.c \
i_endoom.c           i_endoom.h            \
i_joystick.c         i_joystick.h          \
i_scale.c            i_scale.h             \
                     i_swap.h              \
i_sound.c            i_sound.h             \
i_timer.c            i_timer.h             \
i_videohr.c          i_videohr.h           \
i_glscale.c                                \
i_ffmpeg.c \
i_social.c \
i_noappservices.c \
kerning.c \
m_bbox.c             m_bbox.h              \
m_cheat.c            m_cheat.h             \
m_config.c           m_config.h            \
m_controls.c         m_controls.h          \
m_fixed.c            m_fixed.h             \
m_parser.c                                 \
m_qstring.c                                 \
sha1.c               sha1.h                \
memio.c              memio.h               \
tables.c             tables.h              \
                     v_patch.h             \
w_checksum.c         w_checksum.h          \
w_main.c             w_main.h              \
w_wad.c              w_wad.h               \
w_file.c             w_file.h              \
w_file_stdc.c                              \
w_file_posix.c                             \
w_file_win32.c                             \
z_zone.c             z_zone.h

OPENGL_SOURCE_FILES = \
opengl\rb_draw.c    \
opengl\rb_automap.c    \
opengl\rb_bsp.c    \
opengl\rb_clipper.c    \
opengl\rb_config.c    \
opengl\rb_data.c    \
opengl\rb_decal.c    \
opengl\rb_drawlist.c    \
opengl\rb_dynlights.c    \
opengl\rb_geom.c    \
opengl\rb_gl.c    \
opengl\rb_hudtext.c    \
opengl\rb_lightgrid.c    \
opengl\rb_main.c    \
opengl\rb_matrix.c    \
opengl\rb_patch.c    \
opengl\rb_sky.c    \
opengl\rb_texture.c    \
opengl\rb_things.c    \
opengl\rb_view.c    \
opengl\rb_wallshade.c    \
opengl\rb_wipe.c    \

STRIFE_SOURCE_FILES = \
strife\am_map.c           am_map.h     \
                   d_englsh.h   \
strife\d_items.c          d_items.h    \
strife\d_main.c           d_main.h     \
strife\d_net.c                         \
                   doomdata.h   \
strife\doomdef.c          doomdef.h    \
strife\doomstat.c         doomstat.h   \
                   d_player.h   \
strife\dstrings.c         dstrings.h   \
                   d_textur.h   \
                   d_think.h    \
strife\f_finale.c         f_finale.h   \
strife\fe_frontend.c        \
strife\fe_characters.c        \
strife\fe_commands.c        \
strife\fe_gamepad.c        \
strife\fe_graphics.c        \
strife\fe_menuengine.c        \
strife\fe_menus.c        \
strife\fe_mouse.c        \
strife\fe_multiplayer.c        \
strife\f_wipe.c           f_wipe.h     \
strife\g_game.c           g_game.h     \
strife\hu_lib.c           hu_lib.h     \
strife\hu_stuff.c         hu_stuff.h   \
strife\info.c             info.h       \
strife\m_menu.c           m_menu.h     \
strife\m_help.c              \
strife\m_random.c         m_random.h   \
strife\m_saves.c          m_saves.h    \
strife\p_ceilng.c                      \
strife\p_dialog.c         p_dialog.h   \
strife\p_doors.c                       \
strife\p_enemy.c                       \
strife\p_floor.c                       \
strife\p_inter.c          p_inter.h    \
strife\p_lights.c                      \
                   p_local.h    \
strife\p_map.c                         \
strife\p_maputl.c                      \
strife\p_mobj.c           p_mobj.h     \
strife\p_plats.c                       \
strife\p_pspr.c           p_pspr.h     \
strife\p_saveg.c          p_saveg.h    \
strife\p_setup.c          p_setup.h    \
strife\p_sight.c                       \
strife\p_spec.c           p_spec.h     \
strife\p_locations.c                   \
strife\p_switch.c                      \
strife\p_telept.c                      \
strife\p_tick.c           p_tick.h     \
strife\p_user.c                        \
strife\r_bsp.c            r_bsp.h      \
strife\r_data.c           r_data.h     \
                   r_defs.h     \
strife\r_draw.c           r_draw.h     \
                   r_local.h    \
strife\r_main.c           r_main.h     \
strife\r_plane.c          r_plane.h    \
strife\r_segs.c           r_segs.h     \
strife\r_sky.c            r_sky.h      \
                   r_state.h    \
strife\r_things.c         r_things.h   \
strife\s_sound.c          s_sound.h    \
strife\sounds.c           sounds.h     \
strife\st_lib.c           st_lib.h     \
strife\st_stuff.c         st_stuff.h   \
strife\wi_stuff.c         wi_stuff.h

STRIFE_DEHACKED_SOURCE_FILES = \
strife\deh_ammo.c                                 \
strife\deh_cheat.c                                \
strife\deh_strife.c                               \
strife\deh_frame.c                                \
strife\deh_misc.c           deh_misc.h            \
strife\deh_ptr.c                                  \
strife\deh_sound.c                                \
strife\deh_thing.c                                \
strife\deh_weapon.c

# source files needed for FEATURE_DEHACKED
FEATURE_DEHACKED_SOURCE_FILES = \
deh_text.c


# source files needed for FEATURE_MULTIPLAYER
FEATURE_MULTIPLAYER_SOURCE_FILES = \
net_client.c         net_client.h          \
net_common.c         net_common.h          \
net_dedicated.c      net_dedicated.h       \
net_defs.h                                 \
net_gui.c            net_gui.h             \
net_io.c             net_io.h              \
net_loop.c           net_loop.h            \
net_packet.c         net_packet.h          \
net_query.c          net_query.h           \
net_sdl.c            net_sdl.h             \
net_server.c         net_server.h          \
net_structrw.c       net_structrw.h        \
net_steamworks.c \

# source files needed for FEATURE_WAD_MERGE
FEATURE_WAD_MERGE_SOURCE_FILES = \
w_merge.c            w_merge.h


# source files needed for FEATURE_SOUND
FEATURE_SOUND_SOURCE_FILES = \
gusconf.c            gusconf.h             \
i_pcsound.c                                \
i_sdlsound.c                               \
i_sdlmusic.c                               \
i_oplmusic.c                               \
midifile.c           midifile.h            \
mus2mid.c            mus2mid.h


SETUP_FILES = \
deh_str.c            deh_str.h             \
d_mode.c             d_mode.h              \
d_iwad.c             d_iwad.h              \
i_timer.c            i_timer.h             \
m_config.c           m_config.h            \
m_controls.c         m_controls.h          \
net_io.c             net_io.h              \
net_packet.c         net_packet.h          \
net_sdl.c            net_sdl.h             \
net_query.c          net_query.h           \
net_structrw.c       net_structrw.h        \
z_native.c           z_zone.h

LOCAL_SRC_FILES = $(ANDROID_FILES) $(OPENGL_SOURCE_FILES) $(STRIFE_SOURCE_FILES) $(STRIFE_DEHACKED_SOURCE_FILES)  $(COMMON_SOURCE_FILES) $(GAME_SOURCE_FILES) \
	$(FEATURE_MULTIPLAYER_SOURCE_FILES) $(FEATURE_WAD_MERGE_SOURCE_FILES) $(FEATURE_SOUND_SOURCE_FILES) \
 	$(FEATURE_DEHACKED_SOURCE_FILES)
 
ifeq ($(G),DOOM)
LOCAL_STATIC_LIBRARIES += doom
LOCAL_SRC_FILES += $(FEATURE_DEHACKED_SOURCE_FILES)
LOCAL_CFLAGS += -DCHOC_DOOM

else ifeq ($(G),CHOC_HEX)
LOCAL_STATIC_LIBRARIES += hexen
LOCAL_CFLAGS += -DCHOC_HEXEN
ifeq ($(BUILD_SERIAL),1)
LOCAL_CFLAGS += -DANTI_HACK 
endif
else ifeq ($(G),CHOC_HERETIC)
LOCAL_STATIC_LIBRARIES += heretic
LOCAL_SRC_FILES += $(FEATURE_DEHACKED_SOURCE_FILES)
LOCAL_CFLAGS += -DCHOC_HERETIC
else ifeq ($(G),CHOC_STRIFE)
LOCAL_STATIC_LIBRARIES += strife
LOCAL_SRC_FILES += $(FEATURE_DEHACKED_SOURCE_FILES)
LOCAL_CFLAGS += -DCHOC_STRIFE
endif 
 
#LOCAL_SRC_FILES = $(ANDROID_FILES) $(COMMON_SOURCE_FILES) $(SETUP_FILES) 

LOCAL_LDLIBS += -fuse-ld=bfd

LOCAL_DISABLE_FATAL_LINKER_WARNINGS=true

LOCAL_STATIC_LIBRARIES += s-setup lz textscreen_choc opl_choc pcsound_choc  SDL2_net libjpeg libpng jwzgles
LOCAL_STATIC_LIBRARIES +=  libavformat libavcodec  libavfilter libavutil libavdevice libavfilter libswresample libswscale libx264
LOCAL_SHARED_LIBRARIES := touchcontrols SDL2 SDL2_mixer

include $(BUILD_SHARED_LIBRARY)




