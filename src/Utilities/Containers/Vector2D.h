#pragma once

#include "Vector2DImpl.h"

namespace YAGEngine {
    template<typename T>
    class Vector2D {
    private:
        T x;
        T y;
    public:
        Vector2D(T x, T y) : x(x), y(y) {}
        Vector2D<T>& operator+= (const Vector2D<T>& other);
    };
}

template <typename T>
YAGEngine::Vector2D<T>& YAGEngine::Vector2D<T>::operator+= (const YAGEngine::Vector2D<T>& other) {
    x += other.x;
    y += other.y;
}