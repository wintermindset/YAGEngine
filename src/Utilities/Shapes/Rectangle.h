#pragma once

#include <cstdint>
#include "Shapes.h"

class Rectangle : public Shape {
private:
    uint8_t length;
    uint8_t width;
public:
    Rectangle(uint8_t length, uint8_t width) : length(length), width(width) {}
    Rectangle(const Rectangle& other) = default;
    Rectangle& operator=(const Rectangle& other) = default;
    ~Rectangle() override = default;
    uint8_t get_length() const { return length; }
    uint8_t get_width() const { return width; }
    void set_length(uint8_t length) { this->length = length; }
    void set_width(uint8_t width) { this->width = width; }
    Shape* clone() const override { return new Rectangle(*this); }
};