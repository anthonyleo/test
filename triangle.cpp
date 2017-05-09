
#include "triangle.h"
#include <math.h>

Triangle::Triangle()
{

}


double Triangle::area()
{
    return 0.5*width_ *height_;
}


double Triangle::perimeter()
{
    return width_+2*(sqrt(pow(0.5*width_,2)+pow(height_,2)));
}
