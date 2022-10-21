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
#   File: sony.pro
#
# Author: $author$
#   Date: 10/21/2022
#
# os specific QtCreator project .pro file for framework stara executable sony
########################################################################
#
# Debug: stara/build/os/QtCreator/Debug/bin/sony
# Release: stara/build/os/QtCreator/Release/bin/sony
# Profile: stara/build/os/QtCreator/Profile/bin/sony
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/sony/sony.pri)

TARGET = $${sony_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sony_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sony_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sony_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sony_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sony_HEADERS} \
$${sony_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sony_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sony_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sony_LIBS} \
$${FRAMEWORKS} \

########################################################################

