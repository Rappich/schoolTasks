#include <iostream>
#include "Product.hpp"
#include "RegularCustomer.hpp"
#include "MemberCustomer.hpp"
#include "VIPCustomer.hpp"
#include "ShoppingCart.hpp"

int main() {
    // Create products
    Product apple("Apple", 1.0, 5);
    Product banana("Banana", 0.5, 10);
    Product orange("Orange", 0.8, 8);

    // Add products to the shopping cart
    ShoppingCart cart;
    cart.addProduct(apple);
    cart.addProduct(banana);
    cart.addProduct(orange);

    // Create customers
    RegularCustomer regularCustomer;
    MemberCustomer memberCustomer;
    VIPCustomer vipCustomer;

    // Calculate totals with discounts for each customer type
    std::cout << "Total for Regular Customer: " << cart.calculateTotal(regularCustomer) << std::endl;
    std::cout << "Total for Member Customer: " << cart.calculateTotal(memberCustomer) << std::endl;
    std::cout << "Total for VIP Customer: " << cart.calculateTotal(vipCustomer) << std::endl;

    return 0;
}
