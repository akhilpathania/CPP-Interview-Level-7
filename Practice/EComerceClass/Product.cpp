#include "include/Product.h"

// Parameterized Constructor implementation
Product::Product (const std::string& name, double price, unsigned int current_stock,
    const std::string& description, const std::vector<std::string>& categories)
    : name(name), 
    price(price), 
    current_stock(current_stock), 
    description(description), 
    categories(categories) 
    {
        std::cout << "Product " << name << " created." << std::endl;
    }
double Product::CalculateDiscountedPrice(double discountPercentage) const {
    // This is a pure virtual function, so it should be overridden in derived classes.
    return price * (1 - discountPercentage / 100);
}   

void Product::displayProductInfo() const {
    std::cout << "Product Name: " << name << std::endl;
    std::cout << "Price: Rs" << price << std::endl;
    std::cout << "Current Stock: " << current_stock << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Categories: ";
    for (const auto& category : categories) {
        std::cout << category << " ";
    }
    std::cout << std::endl;
}   

void Product::AddStock(int quantity) {
    if (quantity < 0 && static_cast<unsigned int>(-quantity) > current_stock) {
        std::cout << "Error: Cannot reduce stock below zero." << std::endl;
        return;
    }
    current_stock += quantity;
    std::cout << "Stock updated. New stock: " << current_stock << std::endl;
}   

void Product::sellStock(int quantity) {
    if (quantity > static_cast<int>(current_stock)) {
        std::cout << "Error: Not enough stock to sell." << std::endl;
        return;
    }
    current_stock -= quantity;
    std::cout << "Sold " << quantity << " units. Remaining stock: " << current_stock << std::endl;
}   

Product::~Product() {
    std::cout << "Product " << name << " is being destroyed." << std::endl;
}
