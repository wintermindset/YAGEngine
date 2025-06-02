#pragma once

#include <map>
#include <string>

class InputSystem {    
private:
    std::map<std::string, std::pair<int, bool>> key_states;
    std::map<std::string, std::pair<int, bool>> mouse_button_states;
    int mouse_pos_x, mouse_pos_y;
    InputSystem(std::string path_to_settings);
    ~InputSystem() = default;
public:
    InputSystem(const InputSystem& other) = delete;
    InputSystem& operator=(const InputSystem& other) = delete;

    static InputSystem& get_instance() {
        static InputSystem input_system("empty");
        return input_system;
    }

    void update_key_statuses();
    void update_settings();
    bool is_key_pressed(int key);
    bool is_mouse_button_pressed(int button);
    void get_mouse_position(int &x, int &y);
};