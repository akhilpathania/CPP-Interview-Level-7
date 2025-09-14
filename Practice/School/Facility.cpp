#include "include/Facility.h"
#include <iostream>

// Parameterized Constructor implementation
Facility::Facility(const std::string& f_type, const std::string& f_loc) : type(f_type), location(f_loc) {}

// Method overriding implementation
void Facility::describe() const {
    std::cout << "Facility: " << type << ", Location: " << location << std::endl;
}