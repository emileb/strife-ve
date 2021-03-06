
LOCAL_PATH := $(call my-dir)/opl

include $(CLEAR_VARS)

LOCAL_MODULE    := opl_choc


LOCAL_CFLAGS :=  -O2 -g -Wall -Wdeclaration-after-statement  -D_GNU_SOURCE=1 -D_REENTRANT

LOCAL_LDLIBS += -lGLESv1_CM -lEGL

LOCAL_LDLIBS += -llog

LOCAL_C_INCLUDES :=  $(SDL_INCLUDE_PATHS)
LOCAL_C_INCLUDES +=  $(LOCAL_PATH)/../src $(LOCAL_PATH)/../src/mobile

libopl_a_SOURCES = \
                            opl_internal.h        \
        opl.c               opl.h                 \
        opl_linux.c                               \
        opl_obsd.c                                \
        opl_queue.c         opl_queue.h           \
        opl_sdl.c                                 \
        opl_timer.c         opl_timer.h           \
        opl_win32.c                               \
        ioperm_sys.c        ioperm_sys.h          \
        dbopl.c             dbopl.h



LOCAL_SRC_FILES = $(libopl_a_SOURCES) 

LOCAL_LDLIBS := -lGLESv1_CM -ldl -llog  -lz
LOCAL_SHARED_LIBRARIES :=  SDL2 SDL2_mixer

include $(BUILD_STATIC_LIBRARY)






