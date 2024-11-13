#include "Rectangle.hpp"  

Rectangle::Rectangle(double w, double l) 
{
    this->width = w;
    this->length = l;
}

double Rectangle::calculateArea() 
{
    return width * length;
}

double Rectangle::calculatePerimeter() 
{
    return 2 * (width + length);
}

void Rectangle::printInfo() 
{
    std::cout << "Rectangle's width = " << width 
              << ", height = " << length
              << ". That results in area = " << calculateArea() 
              << " and perimeter = " << calculatePerimeter() << '\n';
}