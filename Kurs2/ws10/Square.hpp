#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"
  
class Square : public Shape 
{
private:
    double side;

public:
    Square(double side);
    double calculateArea() override;
    double calculatePerimeter() override;
    void printInfo();
};

#endif