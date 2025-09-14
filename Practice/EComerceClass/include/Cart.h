#ifndef CART_H
#define CART_H
#include <vector>
#include <memory>
#include "Product.h"

class Cart : public Product {
    std::vector<std::shared_ptr<Product>> products; // Using shared_ptr for shared ownership
    double total_price;
public:
    Cart();
    void addProduct(const std::shared_ptr<Product>& product);
    void removeProduct(const std::shared_ptr<Product>& product);
    double CalculateDiscountedPrice(double discountPercentage) const override; // Override the pure virtual function
    void displayCartInfo() const;
    ~Cart();
};
#endif // CART_H
