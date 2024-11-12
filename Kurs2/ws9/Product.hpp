#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

class Product
{
    protected:
    std::string name;
    double price;
    int quantity;

    public:
    Product(const std::string& name, double price, int quantity);
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;

    void setPrice(double price);
    void setQuantity(int quantity);

};

#endif