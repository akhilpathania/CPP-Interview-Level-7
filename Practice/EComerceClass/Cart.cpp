#include <iostream>
#include "include/Cart.h"

// Method implementations
void Cart::addProduct(const std::shared_ptr<Product>& product) {
    products.push_back(product);
    total_price += product->CalculateDiscountedPrice(0); // Assuming no discount for simplicity
    std::cout << "Product added to cart. Total price: Rs" << total_price            
                << std::endl;
}
void Cart::removeProduct(const std::shared_ptr<Product>& product) {
    auto it = std::find(products.begin(), products.end(), product);
    if (it != products.end()) {
        total_price -= (*it)->CalculateDiscountedPrice(0); // Assuming no discount for simplicity
        products.erase(it);
        std::cout << "Product removed from cart. Total price: Rs" << total_price 
                    << std::endl;
    } else {
        std::cout << "Product not found in cart." << std::endl;
    }
}
double Cart::CalculateDiscountedPrice(double discountPercentage) const {
    return total_price * (1 - discountPercentage / 100);
}
void Cart::displayCartInfo() const {
    std::cout << "Cart Information:" << std::endl;
    std::cout << "Total Price: Rs" << total_price << std::endl;
    std::cout << "Products in Cart:" << std::endl;
    for (const auto& product : products) {
        product->displayProductInfo();
        std::cout << "------------------------" << std::endl;
    }
}
Cart::~Cart() {
    std::cout << "Cart is being destroyed." << std::endl;
}       

