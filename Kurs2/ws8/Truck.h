#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
protected:
    std::string model;
    double capacity;

public:
    Truck(std::string model, double capacity);

    double calculateDeliveryTime(double distance) const override;

    void printInfo() const override;
};

#endif
