########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 10/15/2022
#
# generic Makefile for framework stara library libstara
########################################################################
# Depends: rostra;nadir;fila;crono;rete

#
# target
#
libstara_LIBTARGET = libstara.${LIBEXT}

########################################################################

#
# user c++ flags
#
libstara_USRCXXFLAGS += \
${stara_USRCXXFLAGS} \

#
# user defines
#
libstara_USRDEFINES += \
${stara_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_LIB_STARA_VERSION_BUILD_DATE=10/15/2022 #${shell tdate} \


#
# user includes
#
libstara_USRINCLUDES += \
${stara_USRINCLUDES} \

#
# user libdirs
#
libstara_USRLIBDIRS += \
${stara_USRLIBDIRS} \

########################################################################

#
# library .c sources
#
#libstara_LIB_C_SOURCES += \
#${STARA_SRC}/xos/lib/stara/version.c \

#
# library .cc sources
#
#libstara_LIB_CC_SOURCES += \
#${STARA_SRC}/xos/lib/stara/version.cc \

#
# library .cxx sources
#
#libstara_LIB_CXX_SOURCES += \
#${STARA_SRC}/xos/lib/stara/version.cxx \

#
# library .cpp sources
#
libstara_LIB_CPP_SOURCES += \
${STARA_SRC}/xos/lib/stara/version.cpp \

#
# library .m sources
#
#libstara_LIB_M_SOURCES += \
#${STARA_SRC}/xos/lib/stara/version.m \

#
# library .mm sources
#
#libstara_LIB_MM_SOURCES += \
#${STARA_SRC}/xos/lib/stara/version.mm \


########################################################################


