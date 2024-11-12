#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle 
{
protected:
    std::string model;
    double capacity;

public:
    Vehicle(const std::string model, double capacity);

    virtual double calculateDeliveryTime(double distance) const;

    virtual void printInfo() const;

    virtual ~Vehicle() = default;
};

#endif
