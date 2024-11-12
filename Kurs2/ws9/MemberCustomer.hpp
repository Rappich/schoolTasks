#ifndef MEMBERCUSTOMER_HPP
#define MEMBERCUSTOMER_HPP

#include "Customer.hPP"

class MemberCustomer : public Customer 
{
public:
    double applyDiscount(double total) const override;
};

#endif