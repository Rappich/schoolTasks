#include <iostream>
#include <string>
#include "Vehicle.h"

class Truck : public Vehicle
{
public:
    Truck(const std::string model, double capacity)
        : Vehicle(model, capacity) {}

    double calculateDeliveryTime(double distance) const override
    {
        return distance / 50.0;
    }

    void printInfo() const override
    {
        std::cout << "Truck Model: " << model << ", Capacity: " << capacity << std::endl;
    }

    virtual ~Truck() = default;
};
