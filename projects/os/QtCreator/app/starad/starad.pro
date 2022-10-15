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
#   File: starad.pro
#
# Author: $author$
#   Date: 10/15/2022
#
# os specific QtCreator project .pro file for framework stara executable starad
########################################################################
#
# Debug: stara/build/os/QtCreator/Debug/bin/starad
# Release: stara/build/os/QtCreator/Release/bin/starad
# Profile: stara/build/os/QtCreator/Profile/bin/starad
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/starad/starad.pri)

TARGET = $${starad_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${starad_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${starad_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${starad_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${starad_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${starad_HEADERS} \
$${starad_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${starad_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${starad_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${starad_LIBS} \
$${FRAMEWORKS} \

########################################################################

