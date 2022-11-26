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
///   File: main.hpp
///
/// Author: $author$
///   Date: 10/21/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP

#include "xos/app/console/home/theater/sony/audio/control/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace home {
namespace theater {
namespace sony {
namespace audio {
namespace control {
namespace client {

/// class maint
template 
<class TExtends = xos::app::console::home::theater::sony::audio::control::client::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
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

    /// ...play...option...
    virtual int on_set_play_previous_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_play_previous();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_play_next_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_play_next();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_start_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_start_play();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_stop_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_stop_play();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_pause_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_pause_play();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_resume_play_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_resume_play();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_request_set_play
    (request_t& request, const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request.set_method(this->request_method_post());
        request.set_path(this->play_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->play_.length());
        request.set_content(this->play_);
        return err;
    }

    /// ...replay...option...
    virtual int on_get_replay_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->get_replay();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_replay_all_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_replay_all();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_replay_folder_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_replay_folder();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_replay_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_replay_off();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_replay_mode_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        if ((optarg) && (optarg[0])) {
            this->set_replay_mode(optarg);
        } else {
            this->set_replay_all();
        }
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// ...shuffle...option...
    virtual int on_get_shuffle_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->get_shuffle();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_shuffle_all_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_shuffle_all();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_shuffle_folder_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_shuffle_folder();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_shuffle_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_shuffle_off();
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_shuffle_mode_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        if ((optarg) && (optarg[0])) {
            this->set_shuffle_mode(optarg);
        } else {
            this->set_shuffle_all();
        }
        if (!(err = on_request_set_play(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// ...volume_option...
    virtual int on_get_volume_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->get_volume();
        if (!(err = on_request_set_volume(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_volume_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            request_t& request = this->request();
            string_t level(optarg);
            this->set_volume_level(level.to_unsigned());
            if (!(err = on_request_set_volume(request, optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_request_set_volume
    (request_t& request, const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request.set_method(this->request_method_post());
        request.set_path(this->volume_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->volume_.length());
        request.set_content(this->volume_);
        return err;
    }

    /// ...power_option...
    virtual int on_get_power_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->get_power();
        if (!(err = on_request_set_power(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_power_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_power_status_off();
        if (!(err = on_request_set_power(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_power_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        this->set_power_status_on();
        if (!(err = on_request_set_power(request, optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_power_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            request_t& request = this->request();
            this->set_power_status(optarg);
            if (!(err = on_request_set_power(request, optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_request_set_power
    (request_t& request, const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        request.set_method(this->request_method_post());
        request.set_path(this->power_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->power_.length());
        request.set_content(this->power_);
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace theater
} /// namespace home
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP
