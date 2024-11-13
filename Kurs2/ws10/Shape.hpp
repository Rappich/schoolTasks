#ifndef GEOMETRICFIGURES_HPP
#define GEOMETRICFIGURES_HPP
#include <string>
#include <cmath>
#include <string>
#include <iostream>

class Shape
{
public:
virtual ~Shape() = default;
virtual void printInfo() =0;
virtual double calculateArea() =0;
virtual double calculatePerimeter() =0;

};


#endif