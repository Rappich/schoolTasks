#ifndef VIPCUSTOMER_HPP
#define VIPCUSTOMER_HPP

#include "Customer.hpp"

class VIPCustomer : public Customer 
{
public:
    double applyDiscount(double total) const override;
};

#endif