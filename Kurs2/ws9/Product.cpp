#include "Product.hpp"

Product::Product(const std::string& name, double price, int quantity) 
    : name(name), price(price), quantity(quantity) {}

std::string Product::getName() const 
{ 
    return name; 
}
double Product::getPrice() const 
{ 
    return price; 
}
int Product::getQuantity() const 
{ 
    return quantity; 
}

void Product::setPrice(double price) 
{ 
    this->price = price; 
}
void Product::setQuantity(int quantity) 
{ 
    this->quantity = quantity; 
}