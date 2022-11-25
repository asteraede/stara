///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 10/21/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/protocol/http/client/main.hpp"
#include "xos/app/console/home/theater/sony/audio/control/base/main.hpp"

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPT "previous"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTUSE "play previous"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTVAL_S "E"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTVAL_C 'E'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPT "next"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTUSE "play next"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTVAL_S "X"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTVAL_C 'X'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPT "start-play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTUSE "start play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTVAL_S "S"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPT "stop-play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTUSE "stop play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTVAL_S "T"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPT "pause-play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTUSE "pause play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTVAL_S "P"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTVAL_C 'P'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPT "resume-play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTUSE "resume play"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTVAL_S "R"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPT "volume"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTARG "[{ 0..100 }]"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTUSE "volume level"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTVAL_S "V::"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTVAL_C 'V'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPT "power-on"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTUSE "power on"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTVAL_S "N"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPT "power-off"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTUSE "power off"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTVAL_S "F"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPT "power"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTARG "[{ active | off }]"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTUSE "power status"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTVAL_S "W::"
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTVAL_C 'W'
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTION \
   {XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTVAL_S \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTVAL_S \

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTION \
    XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace home {
namespace theater {
namespace sony {
namespace audio {
namespace control {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::home::theater::sony::audio::control::base::maint
 <xos::app::console::home::theater::sony::audio::control::base::main_optt
 <xos::app::console::network::sockets::protocol::http::client::maint
 <xos::app::console::network::sockets::protocol::http::client::main_optt<> > > >, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::json_boolean_t json_boolean_t;
    typedef typename extends::json_number_t json_number_t;
    typedef typename extends::json_string_t json_string_t;
    typedef typename extends::json_node_t json_node_t;
    typedef typename extends::json_array_t json_array_t;
    typedef typename extends::json_object_t json_object_t;

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_t request_t;
    typedef typename extends::response_t response_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...play_previous_option...
    virtual int on_set_play_previous_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_play_previous_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_play_previous_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_play_previous_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_play_previous_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* play_previous_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTARG;
        return chars;
    }

    /// ...play_next_option...
    virtual int on_set_play_next_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_play_next_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_play_next_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_play_next_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_play_next_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* play_next_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTARG;
        return chars;
    }

    /// ...start_play_option...
    virtual int on_set_start_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_start_play_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_start_play_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_start_play_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_start_play_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* start_play_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTARG;
        return chars;
    }

    /// ...stop_play_option...
    virtual int on_set_stop_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_play_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_play_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_stop_play_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_stop_play_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* stop_play_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTARG;
        return chars;
    }

    /// ...pause_play_option...
    virtual int on_set_pause_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_pause_play_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_pause_play_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_pause_play_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_pause_play_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* pause_play_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTARG;
        return chars;
    }

    /// ...resume_play_option...
    virtual int on_set_resume_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_resume_play_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_resume_play_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_resume_play_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_resume_play_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* resume_play_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTARG;
        return chars;
    }

    /// ...volume_option...
    virtual int on_get_volume_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_volume_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_volume_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_volume_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_volume_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_volume_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_volume_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_volume_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_volume_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* volume_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTARG;
        return chars;
    }

    /// ...power_on_option...
    virtual int on_set_power_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_power_on_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_power_on_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* power_on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTARG;
        return chars;
    }

    /// ...power_off_option...
    virtual int on_set_power_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_power_off_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_power_off_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* power_off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTARG;
        return chars;
    }

    /// ...power_option...
    virtual int on_get_power_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_power_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_power_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_power_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_power_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_power_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_power_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_power_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_power_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* power_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTUSE;
        optarg = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTVAL_C:
            err = this->on_play_previous_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTVAL_C:
            err = this->on_play_next_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTVAL_C:
            err = this->on_start_play_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTVAL_C:
            err = this->on_stop_play_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTVAL_C:
            err = this->on_pause_play_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTVAL_C:
            err = this->on_resume_play_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTVAL_C:
            err = this->on_volume_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTVAL_C:
            err = this->on_power_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_PREVIOUS_OPTVAL_C:
            chars = this->play_previous_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PLAY_NEXT_OPTVAL_C:
            chars = this->play_next_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_START_PLAY_OPTVAL_C:
            chars = this->start_play_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_STOP_PLAY_OPTVAL_C:
            chars = this->stop_play_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_PAUSE_PLAY_OPTVAL_C:
            chars = this->pause_play_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_RESUME_PLAY_OPTVAL_C:
            chars = this->resume_play_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_VOLUME_OPTVAL_C:
            chars = this->volume_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            chars = this->power_on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            chars = this->power_off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_POWER_OPTVAL_C:
            chars = this->power_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace theater
} /// namespace home
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_OPT_HPP
