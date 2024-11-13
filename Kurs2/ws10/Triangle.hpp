#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"
  
class Triangle : public Shape 
{
private:
    double base, height;

public:
    Triangle(double base,double height);
    double calculateArea() override;
    double calculatePerimeter() override;
    void printInfo();
};

#endif