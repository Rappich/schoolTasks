#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"
  
class Rectangle : public Shape 
{
private:
    double width, length;

public:
    Rectangle(double w, double l);
    double calculateArea() override;
    double calculatePerimeter() override;
    void printInfo();
};

#endif