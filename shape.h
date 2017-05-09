#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{
public:
    Shape();
    void setWidthHeight(double width, double height);
    double area();
    double perimeter();
protected:
    double width_, height_;
};

#endif // SHAPE_H
