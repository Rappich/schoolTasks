#include "Square.hpp"




    Square::Square(double side)
    {
        this->side = side;
    }
    double Square::calculateArea()
    {
        return side * side;
    }

    double Square::calculatePerimeter()

    {
        return 4 * side;
    }
    void Square::printInfo()

    {
    std::cout << "Square's side = " << side
              << ". That results in area = " << calculateArea() 
              << " and perimeter = " << calculatePerimeter() << '\n';
    }
