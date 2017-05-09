#include "rectangle.h"
#include "triangle.h"
#include <iostream>

int main()
{
    Rectangle rec1;
    Triangle tri1;

    Shape * shapRec = &rec1;
    Shape * shapTri = &tri1;

    shapRec -> setWidthHeight(5.0,2.5);
    std::cout<<"The area of the Rectangle: "<<rec1.area()<<std::endl;
    std::cout<<"The perimeter of the Rectangle: "<<rec1.perimeter()<<std::endl;

    shapTri -> setWidthHeight(4.5,6.0);
    std::cout<<"The area of the triangle: "<<tri1.area()<<std::endl;
    std::cout<<"The perimeter of the triangle: "<<tri1.perimeter()<<std::endl;

}
