#pragma once

#include "..\GameFramework\Level.h"

class LevelLoader {
private:
    LevelLoader();
    ~LevelLoader();
public:
    LevelLoader(const LevelLoader& other) = delete;
    LevelLoader& operator=(const LevelLoader& other) = delete;

    static LevelLoader& get_instance() {
        static LevelLoader level_loader;
        return level_loader;
    }

    void load_for_level(const Level& level);
};