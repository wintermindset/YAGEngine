#pragma once

#include "../../Utilities/Shapes/Shapes.h"

class BoxCollider {
private:
    Shape* hitbox;
public:
    BoxCollider(Shape* hitbox);
    BoxCollider(const BoxCollider& other);
    BoxCollider(BoxCollider&& other) noexcept;
    BoxCollider& operator=(const BoxCollider& other);
    BoxCollider& operator=(BoxCollider&& other) noexcept;
    ~BoxCollider();
};