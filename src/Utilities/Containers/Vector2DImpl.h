#pragma once

#include <utility>

template<typename T>
Vector2D<T>::Vector2D()
    : x(), y() {}

template<typename T>
Vector2D<T>::Vector2D(const T& x, const T& y)
    : x(x), y(y) {}

template<typename T>
Vector2D<T>::Vector2D(T&& x, T&& y) noexcept
    : x(std::move(x)), y(std::move(y)) {}

template<typename T>
Vector2D<T>::Vector2D(const Vector2D& other)
    : x(other.x), y(other.y) {}

template<typename T>
Vector2D<T>::Vector2D(Vector2D&& other) noexcept
    : x(std::move(other.x)), y(std::move(other.y)) {
    other.x = T{};
    other.y = T{};
}

template<typename T>
Vector2D<T>& Vector2D<T>::operator=(const Vector2D& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

template<typename T>
Vector2D<T>& Vector2D<T>::operator=(Vector2D&& other) noexcept {
    if (this != &other) {
        x = std::move(other.x);
        y = std::move(other.y);
        other.x = T{};
        other.y = T{};
    }
    return *this;
}

template<typename T>
Vector2D<T>& Vector2D<T>::operator+=(const Vector2D& other) {
    x += other.x;
    y += other.y;
}