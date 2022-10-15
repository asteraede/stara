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
# generic Makefile for framework stara executable stara
########################################################################
# Depends: rostra;nadir;fila;crono;rete

#
# target
#
stara_exe_EXETARGET = stara

########################################################################

#
# user c++ flags
#
stara_exe_USRCXXFLAGS += \
${stara_USRCXXFLAGS} \

#
# user defines
#
stara_exe_USRDEFINES += \
${stara_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \


#
# user includes
#
stara_exe_USRINCLUDES += \
${stara_USRINCLUDES} \

#
# user libdirs
#
stara_exe_USRLIBDIRS += \
${stara_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#stara_exe_EXE_C_SOURCES += \
#${STARA_SRC}/xos/app/console/stara/main.c \

#
# executable .cc sources
#
#stara_exe_EXE_CC_SOURCES += \
#${STARA_SRC}/xos/app/console/stara/main.cc \

#
# executable .cxx sources
#
#stara_exe_EXE_CXX_SOURCES += \
#${STARA_SRC}/xos/app/console/stara/main.cxx \

#
# executable .cpp sources
#
stara_exe_EXE_CPP_SOURCES += \
${RETE_SRC}/xos/network/sockets/os/interfaces.cpp \
\
${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/main_opt.cpp \
${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/main.cpp \

#
# executable .m sources
#
#stara_exe_EXE_M_SOURCES += \
#${STARA_SRC}/xos/app/console/stara/main.m \

#
# executable .mm sources
#
#stara_exe_EXE_MM_SOURCES += \
#${STARA_SRC}/xos/app/console/stara/main.mm \


########################################################################

#
# executable libraries
#
stara_exe_LIBS += \
${stara_LIBS}

