#include <nanogui/nanogui.h>
#include "GameStreamClient.hpp"
#pragma once

class AppButton: public nanogui::Button {
public:
    AppButton(Widget* parent, const std::string &address, APP_LIST app, int current_game);
    
    bool gamepad_button_event(int jid, int button, int action) override;
    
    void draw(NVGcontext *ctx) override;
    
private:
    std::string m_address;
    APP_LIST m_app;
    nanogui::Label* m_label;
};
