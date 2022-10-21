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
#   File: sony.pri
#
# Author: $author$
#   Date: 10/21/2022
#
# generic QtCreator project .pri file for framework stara executable sony
########################################################################

########################################################################
# sony

# sony TARGET
#
sony_TARGET = sony

# sony INCLUDEPATH
#
sony_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# sony DEFINES
#
sony_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sony OBJECTIVE_HEADERS
#
#sony_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/sony/main.hh \

# sony OBJECTIVE_SOURCES
#
#sony_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/sony/main.mm \

########################################################################
# sony HEADERS
#
sony_HEADERS += \
$${RETE_SRC}/xos/network/sockets/interfaces.hpp \
$${RETE_SRC}/xos/network/sockets/os/interfaces.hpp \
\
$${RETE_SRC}/xos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/home/theater/sony/audio/control/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/home/theater/sony/audio/control/base/main.hpp \
$${STARA_SRC}/xos/app/console/home/theater/sony/audio/control/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/home/theater/sony/audio/control/client/main.hpp \

# sony SOURCES
#
sony_SOURCES += \
$${STARA_SRC}/xos/app/console/home/theater/sony/audio/control/client/main_opt.cpp \
$${STARA_SRC}/xos/app/console/home/theater/sony/audio/control/client/main.cpp \

########################################################################
# sony FRAMEWORKS
#
sony_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# sony LIBS
#
sony_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core

