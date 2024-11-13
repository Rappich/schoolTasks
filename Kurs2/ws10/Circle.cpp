    #include "Circle.hpp"
    
    Circle::Circle(double radius)
    {
        this-> radius = radius;
    }

    double Circle::calculateArea()
    {
        return PI * radius * radius;
    }

    double Circle::calculatePerimeter()
    {
        return 2 * PI * radius;
    }

    void Circle::printInfo()
    {
    std::cout << "Circle's radius = " << radius
              << ". That results in area = " << calculateArea() 
              << " and perimeter = " << calculatePerimeter() << '\n';
    }