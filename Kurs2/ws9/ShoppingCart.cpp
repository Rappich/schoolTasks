#include "ShoppingCart.hpp"

void ShoppingCart::addProduct(const Product& product) 
{
    products.push_back(product);
}

double ShoppingCart::calculateTotal(const Customer& customer) const 
{
    double total = 0.0;
    for (const auto& product : products) 
    {
        total += product.getPrice() * product.getQuantity();
    }
    return customer.applyDiscount(total);
}