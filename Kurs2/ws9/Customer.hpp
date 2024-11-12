#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

class Customer 
{
public:
    virtual ~Customer() = default;
    virtual double applyDiscount(double total) const = 0;
};

#endif
