#include <iostream>
#include <vector>
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Rhomb.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"


int main() 
{
    std::vector<Shape*> shapes;
    
    shapes.push_back(new Rectangle(10, 5));    
    shapes.push_back(new Square(34));           
    shapes.push_back(new Rhomb(23, 23, 1));    
    shapes.push_back(new Circle(23));          
    shapes.push_back(new Triangle(153, 100));  
    
    for (auto shape : shapes) 
    {
        shape->printInfo();  
    }

    for (auto shape : shapes) 
    {
        delete shape;
    }
    
    return 0;
}
