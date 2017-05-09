#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape{
public:
    Triangle();
    double area();
    double perimeter();
};

#endif // TRIANGLE_H
