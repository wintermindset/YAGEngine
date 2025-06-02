#pragma once

#include <cstdint>
#include "Shapes.h"

class EquilateralTriangle : public Shape {
private:
    uint8_t length;
public:
    EquilateralTriangle(uint8_t length) : length(length) {}
    EquilateralTriangle(const EquilateralTriangle& other) = default;
    EquilateralTriangle& operator=(const EquilateralTriangle& other) = default;
    ~EquilateralTriangle() override = default;
    uint8_t get_length() const { return length; }
    uint8_t set_length(uint8_t length) { this->length = length; }
    Shape* clone() const override { return new EquilateralTriangle(*this); }
};