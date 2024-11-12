#include <iostream>
#include <string>
#include "Vehicle.h"

class Vehicle 
{
protected:
    std::string model;
    double capacity;

public:
    Vehicle(const std::string model, double capacity)
    {
        this-> model = model;
        this-> capacity = capacity;
    }

    virtual double calculateDeliveryTime(double distance) const
    {
        return distance / 60.0;
    }

    virtual void printInfo() const
        {    
            std::cout << "Model: " << model << ", Capacity: " << capacity << std::endl;
        }


    virtual ~Vehicle() = default;
};