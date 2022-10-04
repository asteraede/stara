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
#   File: stara.pri
#
# Author: $author$
#   Date: 9/3/2022
#
# generic QtCreator project .pri file for framework stara executable stara
########################################################################

########################################################################
# stara

# stara_exe TARGET
#
stara_exe_TARGET = stara

# stara_exe INCLUDEPATH
#
stara_exe_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# stara_exe DEFINES
#
stara_exe_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# stara_exe OBJECTIVE_HEADERS
#
#stara_exe_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/stara/main.hh \

# stara_exe OBJECTIVE_SOURCES
#
#stara_exe_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/stara/main.mm \

########################################################################
# stara_exe HEADERS
#
stara_exe_HEADERS += \
$${RETE_SRC}/xos/network/sockets/interfaces.hpp \
$${RETE_SRC}/xos/network/sockets/os/interfaces.hpp \
\
$${RETE_SRC}/xos/app/console/rete/main_opt.hpp \
$${RETE_SRC}/xos/app/console/rete/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/main.hpp \
\
$${STARA_SRC}/xos/app/console/stara/main_opt.hpp \
$${STARA_SRC}/xos/app/console/stara/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/server/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/main.hpp \

# stara_exe SOURCES
#
stara_exe_SOURCES += \
$${RETE_SRC}/xos/network/sockets/os/interfaces.cpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/main.cpp \

########################################################################
# stara_exe FRAMEWORKS
#
stara_exe_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# stara_exe LIBS
#
stara_exe_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core
