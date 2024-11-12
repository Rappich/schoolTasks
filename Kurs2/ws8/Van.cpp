#include <iostream>
#include <string>
#include "Van.h"

class Van : public Vehicle
{
public:
    Van(const std::string model, double capacity)
        : Vehicle(model, capacity) {}

    double calculateDeliveryTime(double distance) const override
    {
        return distance / 80.0;
    }

    void printInfo() const override
    {
        std::cout << "Van Model: " << model << ", Capacity: " << capacity << std::endl;
    }

    virtual ~Van() = default;
};
