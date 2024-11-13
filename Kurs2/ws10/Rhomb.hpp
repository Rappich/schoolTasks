#ifndef RHOMB_HPP
#define RHOMB_HPP

#include "Shape.hpp"

class Rhomb : public Shape
{
private:
    double side, diagonal1, diagonal2;

public:
    Rhomb(double side, double diagonal1, double diagonal2);
    double calculateArea() override;
    double calculatePerimeter() override;
    void printInfo();
};

#endif