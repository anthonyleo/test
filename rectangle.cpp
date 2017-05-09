#include "rectangle.h"

Rectangle::Rectangle()
{
}

/*void Rectangle::setWidthHeight(double width, double height)
{
    width_ = width;
    height_ = height;
    return;
}

void Rectangle::setWidthGeight(double size)
{
    setWidthHeight(size, size);
}*/

double Rectangle::area()
{
    return width_*height_;
}

double Rectangle::perimeter()
{
    return 2*width_ + 2*height_;
}
