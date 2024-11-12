#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Product.hpp"
#include "Customer.hpp"
#include <vector>

class RegularCustomer;
class MemberCustomer;
class VIPCustomer;

class ShoppingCart 
{
public:
    void addProduct(const Product& product);
    double calculateTotal(const Customer& customer) const;

private:
    std::vector<Product> products;
};

#endif
