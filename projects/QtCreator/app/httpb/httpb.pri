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
#   File: httpb.pri
#
# Author: $author$
#   Date: 11/21/2022
#
# generic QtCreator project .pri file for framework stara executable httpb
########################################################################

########################################################################
# httpb

# httpb TARGET
#
httpb_TARGET = httpb

# httpb INCLUDEPATH
#
httpb_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# httpb DEFINES
#
httpb_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# httpb OBJECTIVE_HEADERS
#
#httpb_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.hh \

# httpb OBJECTIVE_SOURCES
#
#httpb_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.mm \

########################################################################
# httpb HEADERS
#
httpb_HEADERS += \
$${STARA_SRC}/xos/protocol/xttp/protocol/name.hpp \
$${STARA_SRC}/xos/protocol/xttp/protocol/version.hpp \
$${STARA_SRC}/xos/protocol/xttp/protocol/identifer.hpp \
\
$${STARA_SRC}/xos/protocol/xttp/message/part.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/line.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/header/content/length.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/header/content/type.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/header/content/encoding.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/header/field.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/header/fields.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/body/content.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/parts.hpp \
\
$${STARA_SRC}/xos/protocol/xttp/request/method.hpp \
$${STARA_SRC}/xos/protocol/xttp/request/parameters.hpp \
$${STARA_SRC}/xos/protocol/xttp/request/line.hpp \
$${STARA_SRC}/xos/protocol/xttp/request/message.hpp \
\
$${STARA_SRC}/xos/protocol/http/protocol/name.hpp \
$${STARA_SRC}/xos/protocol/http/protocol/version.hpp \
$${STARA_SRC}/xos/protocol/http/protocol/identifer.hpp \
\
$${STARA_SRC}/xos/protocol/http/content/encoding/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/encoding/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/encoding/nameof.hpp \
\
$${STARA_SRC}/xos/protocol/http/content/media/type/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/type/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/type/nameof.hpp \
\
$${STARA_SRC}/xos/protocol/http/content/media/subtype/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/subtype/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/subtype/nameof.hpp \
\
$${STARA_SRC}/xos/protocol/http/content/type/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/text_name.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/json_name.hpp \
$${STARA_SRC}/xos/protocol/http/text/plain/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/text/json/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/text/content.hpp \
\
$${STARA_SRC}/xos/protocol/http/message/part.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/length.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/encoding.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/field.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/fields.hpp \
$${STARA_SRC}/xos/protocol/http/message/body/content.hpp \
$${STARA_SRC}/xos/protocol/http/message/parts.hpp \
\
$${STARA_SRC}/xos/protocol/http/request/method/which.hpp \
$${STARA_SRC}/xos/protocol/http/request/method/name.hpp \
$${STARA_SRC}/xos/protocol/http/request/method/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/request/resource/which.hpp \
$${STARA_SRC}/xos/protocol/http/request/resource/identifier.hpp \
$${STARA_SRC}/xos/protocol/http/request/resource/identifierof.hpp \
$${STARA_SRC}/xos/protocol/http/request/line.hpp \
$${STARA_SRC}/xos/protocol/http/request/message.hpp \
\
$${STARA_SRC}/xos/protocol/http/response/status/which.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/code.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/codeof.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/reason.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/reasonof.hpp \
$${STARA_SRC}/xos/protocol/http/response/line.hpp \
$${STARA_SRC}/xos/protocol/http/response/message.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/http/base/main.hpp \

# httpb SOURCES
#
httpb_SOURCES += \
$${STARA_SRC}/xos/app/console/http/base/main_opt.cpp \
$${STARA_SRC}/xos/app/console/http/base/main.cpp \

########################################################################
# httpb FRAMEWORKS
#
httpb_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# httpb LIBS
#
httpb_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core

