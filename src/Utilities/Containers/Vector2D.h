#pragma once

template<typename T>
class Vector2D {
private:
    T x;
    T y;
public:
    Vector2D();
    Vector2D(const T& x, const T& y);
    Vector2D(T&& x, T&& y) noexcept;
    Vector2D(const Vector2D& other);
    Vector2D(Vector2D&& other) noexcept;
    Vector2D& operator=(const Vector2D& other);
    Vector2D& operator=(Vector2D&& other) noexcept;
    Vector2D<T>& operator+=(const Vector2D<T>& other);
};

#include "Vector2DImpl.h"