#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape{
public:
    Rectangle();
    double area();
    double perimeter();
};

#endif // RECTANGLE_H
