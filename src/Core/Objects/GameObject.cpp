#include "GameObject.h"

GameObject::GameObject(Vector2D<int> coordinates)
: coordinates(coordinates) {}

Vector2D<int>& GameObject::get_coordinates() {
    return coordinates;
}

Vector2D<int> GameObject::get_coordinates() const {
    return coordinates;
}

void GameObject::make_turn() {}