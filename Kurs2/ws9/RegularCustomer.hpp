#ifndef REGULARCUSTOMER_HPP
#define REGULARCUSTOMER_HPP

#include "Customer.hpp"

class RegularCustomer : public Customer 
{
public:
    double applyDiscount(double total) const override;
};

#endif
