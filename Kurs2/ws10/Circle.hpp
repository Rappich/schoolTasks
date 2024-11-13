#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"
#define PI 3.14159265358979323846
  
class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double radius);
    double calculateArea() override;
    double calculatePerimeter() override;
    void printInfo();
};

#endif