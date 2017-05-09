
#include "shape.h"

Shape::Shape()
{

}

void Shape::setWidthHeight(double width, double height)
{
    width_ = width;
    height_ = height;
}


double Shape::area()
{
    return width_*height_;
}


double Shape::perimeter()
{
    return 2*(width_+height_);
}
