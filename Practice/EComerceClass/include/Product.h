#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
#include <vector>
#include <memory>

class Product{

    static unsigned int product_id;
    std::string name;
    double price;
    unsigned int current_stock;
    std::string description;
    std::vector<std::string> categories;
public:
    Product(const std::string& name, double price, unsigned int current_stock, 
        const std::string& description, const std::vector<std::string>& categories);
    
    virtual double CalculateDiscountedPrice(double discountPercentage) const = 0; // Pure virtual function for polymorphism
    void displayProductInfo() const;
    void AddStock(int quantity);
    void sellStock(int quantity);
    virtual ~Product();
};
#endif // PRODUCT_H