#include "BoxCollider.h"

BoxCollider::BoxCollider(Shape* hitbox) : hitbox(hitbox) {}

BoxCollider::BoxCollider(const BoxCollider& other) : hitbox(other.hitbox->clone()) {}

BoxCollider::BoxCollider(BoxCollider&& other) noexcept : hitbox(other.hitbox) {
    other.hitbox = nullptr;
}

BoxCollider& BoxCollider::operator=(const BoxCollider& other) {
    if (this != &other) {
        delete hitbox;
        hitbox = other.hitbox->clone();
    }
    return *this;
}

BoxCollider& BoxCollider::operator=(BoxCollider&& other) {
    if (this != &other) {
        delete hitbox;
        hitbox = other.hitbox;
        other.hitbox = nullptr;
    }
    return *this;
}

BoxCollider::~BoxCollider() {
    delete hitbox;
}