#ifndef VAN_H
#define VAN_H

#include "Vehicle.h"
#include <string>

class Van : public Vehicle
{
    protected:
    std:: string model;
    double capacity;

    public:
    Van(std::string model, double capacity);

    double calculateDeliveryTime(double distance) const override;

    void printInfo() const override;

};


#endif
