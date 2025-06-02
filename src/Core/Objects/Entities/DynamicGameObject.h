#pragma once

#include "GameObject.h"

class DynamicGameObject : public GameObject {
public:
    void add_offset(Vector2D<int> offset);
};