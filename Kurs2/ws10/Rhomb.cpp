#include "Rhomb.hpp"

    Rhomb::Rhomb(double side, double diagonal1, double diagonal2)
    {
        this-> side =  side;
        this-> diagonal1 = diagonal1;
        this-> diagonal2 = diagonal2;
    }
    double Rhomb::calculateArea()

    {
        return 0.5 * diagonal1 * diagonal2;
    }

    double Rhomb::calculatePerimeter()
    {
        return 4 * side;
    }

    void Rhomb::printInfo()
    {
    std::cout << "Rhombus's side = " << side 
              << ", diagonal1 = " << diagonal1 
              << ", diagonal2 = " << diagonal2 
              << ". That results in area = " << calculateArea() 
              << " and perimeter = " << calculatePerimeter() << '\n';
    }