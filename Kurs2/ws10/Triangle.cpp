
#include "Triangle.hpp"


    Triangle::Triangle(double base,double height)
    {
        this-> base = base;
        this-> height = height;
    }  

    double Triangle::calculateArea()

    {
        return 0.5 * base * height;
    }

    double Triangle::calculatePerimeter()
    {
           return 3 * base;
    }

    void Triangle::printInfo()
    {
            std::cout << "Triangle's base = " << base 
              << ", height = " << height 
              << ". That results in area = " << calculateArea() 
              << " and perimeter = " << calculatePerimeter() << '\n';
    }
