#pragma once

class Shape {
public:
    Shape();
    Shape(const Shape& other);
    Shape& operator=(const Shape& other);
    virtual ~Shape() = 0;
    virtual Shape* clone() const = 0;
};