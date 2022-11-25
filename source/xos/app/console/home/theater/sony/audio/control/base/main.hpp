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
#ifndef XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_BASE_MAIN_HPP

#include "xos/app/console/home/theater/sony/audio/control/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace home {
namespace theater {
namespace sony {
namespace audio {
namespace control {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::home::theater::sony::audio::control::base::main_opt, 
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

    enum { port_number = 10000 };
    
    /// constructor / destructor
    maint()
    : run_(0), port_(port_number),
      
      system_path_("/sony/system"), audio_path_("/sony/audio"), avContent_path_("/sony/avContent"),

      previous_begin_("{\"method\": \"setPlayPreviousContent\", \"id\": 73, \"params\": [{\"output\": \""),
      previous_end_("\"}], \"version\": \"1.0\"}"),
      previous_params_(""),
      
      next_begin_("{\"method\": \"setPlayNextContent\", \"id\": 73, \"params\": [{\"output\": \""),
      next_end_("\"}], \"version\": \"1.0\"}"),
      next_params_(""),
      
      start_begin_("{\"method\": \"setPlayContent\", \"id\": 73, \"params\": [{\"output\": \"\", \"resume\": "),
      start_end_("}], \"version\": \"1.2\"}"),
      start_params_("true"),
      
      stop_begin_("{\"method\": \"stopPlayingContent\", \"id\": 73, \"params\": [{\"output\": \""),
      stop_end_("\"}], \"version\": \"1.1\"}"),
      stop_params_(""),
      
      pause_begin_("{\"method\": \"pausePlayingContent\", \"id\": 73, \"params\": [{\"output\": \""),
      pause_end_("\"}], \"version\": \"1.1\"}"),
      pause_params_(""),

      resume_begin_("{\"method\": \"setPlayContent\", \"id\": 73, \"params\": [{\"output\": \"\", \"resume\": "),
      resume_end_("}], \"version\": \"1.2\"}"),
      resume_params_("true"),
      
      replay_begin_("{\"method\": \"setPlayContent\", \"id\": 73, \"params\": [{\"repeatType\": \""),
      replay_end_("\"}], \"version\": \"1.2\"}"),
      replay_params_("on"),
      play_path_(avContent_path_),
      
      volume_level_(10), volume_value_(volume_level_), volume_param_("volume", volume_value_), 
      volume_object_(&volume_param_, null), volume_params_(&volume_object_, null),
      volume_path_(audio_path_),
      volume_level_begin_("{\"method\": \"getVolumeInformation\", \"id\": 73, \"params\": [{\"output\": \"\"}]"),
      volume_begin_("{\"method\": \"setAudioVolume\", \"id\": 73, \"params\": "),
      volume_end_(", \"version\": \"1.1\"}"),
        
      power_status_off_("off"), power_status_on_("active"), 
      power_status_(power_status_on_), power_value_(power_status_), power_param_("status", power_value_), 
      power_object_(&power_param_, null), power_params_(&power_object_, null),
      power_path_(system_path_),
      power_status_begin_("{\"method\": \"getPowerStatus\", \"id\": 73, \"params\": []"),
      power_begin_("{\"method\": \"setPowerStatus\", \"id\": 73, \"params\": "),
      power_end_(", \"version\": \"1.1\"}") {
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

    /// ...play...
    virtual string_t& set_play_previous() {
        play_.assign(previous_begin_);
        play_.append(previous_params_);
        play_.append(previous_end_);
        play_.appendln();
        return play_;
    }
    virtual string_t& set_play_next() {
        play_.assign(next_begin_);
        play_.append(next_params_);
        play_.append(next_end_);
        play_.appendln();
        return play_;
    }
    virtual string_t& set_start_play() {
        play_.assign(start_begin_);
        play_.append(start_params_);
        play_.append(start_end_);
        play_.appendln();
        return play_;
    }
    virtual string_t& set_stop_play() {
        play_.assign(stop_begin_);
        play_.append(stop_params_);
        play_.append(stop_end_);
        play_.appendln();
        return play_;
    }
    virtual string_t& set_pause_play() {
        play_.assign(pause_begin_);
        play_.append(pause_params_);
        play_.append(pause_end_);
        play_.appendln();
        return play_;
    }
    virtual string_t& set_resume_play() {
        play_.assign(resume_begin_);
        play_.append(resume_params_);
        play_.append(resume_end_);
        play_.appendln();
        return play_;
    }

    /// ...volume...
    virtual string_t& set_volume_level(unsigned to) {
        volume_level_ = to;
        volume_value_.set(unsigned_to_string(volume_level_));
        volume_param_.set(volume_value_);
        volume_object_.set(&volume_param_, null);
        volume_params_.set(&volume_object_, null);
        return set_volume();
    }
    virtual string_t& set_volume() {
        volume_.assign(volume_begin_);
        volume_.append(volume_params_);
        volume_.append(volume_end_);
        volume_.appendln();
        return volume_;
    }
    virtual string_t& get_volume() {
        volume_.assign(volume_level_begin_);
        volume_.append(volume_end_);
        volume_.appendln();
        return volume_;
    }

    /// ...power...
    virtual string_t& set_power_status_off() {
        return set_power_status(power_status_off_.chars());
    }
    virtual string_t& set_power_status_on() {
        return set_power_status(power_status_on_.chars());
    }
    virtual string_t& set_power_status(const char_t* to) {
        power_status_.assign(to);
        power_value_.set(power_status_);
        power_param_.set(power_value_);
        power_object_.set(&power_param_, null);
        power_params_.set(&power_object_, null);
        return set_power();
    }
    virtual string_t& set_power() {
        power_.assign(power_begin_);
        power_.append(power_params_);
        power_.append(power_end_);
        power_.appendln();
        return power_;
    }
    virtual string_t& get_power() {
        power_.assign(power_status_begin_);
        power_.append(power_end_);
        power_.appendln();
        return power_;
    }

    /// ...port
    virtual short& set_port(short to) {
        port_ = to;
        return port();
    }
    virtual short& accept_port() const {
        return port();
    }
    virtual short& connect_port() const {
        return port();
    }
    virtual short& port() const {
        return (short&)port_;
    }

protected:
    short port_;

    string_t system_path_, audio_path_, avContent_path_;

    string_t previous_begin_, previous_end_, previous_params_;
    string_t next_begin_, next_end_, next_params_;
    string_t start_begin_, start_end_, start_params_;
    string_t stop_begin_, stop_end_, stop_params_;
    string_t pause_begin_, pause_end_, pause_params_;
    string_t resume_begin_, resume_end_, resume_params_;
    string_t replay_begin_, replay_end_, replay_params_;
    string_t play_path_, play_;

    unsigned volume_level_; json_node_t volume_value_, volume_param_;
    json_object_t volume_object_; json_array_t volume_params_;
    string_t volume_path_, volume_level_begin_, volume_begin_, volume_end_, volume_;
    
    string_t power_status_off_, power_status_on_, power_status_; json_node_t power_value_, power_param_;
    json_object_t power_object_; json_array_t power_params_;
    string_t power_path_, power_status_begin_, power_begin_, power_end_, power_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace theater
} /// namespace home
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_HOME_THEATER_SONY_AUDIO_CONTROL_BASE_MAIN_HPP
