#include "include/Teacher.h"
#include <iostream>

// Parameterized Constructor implementation
Teacher::Teacher(const std::string& t_name, const std::string& dept) : name(t_name), department(dept) {}

// Method overriding implementation
void Teacher::describe() const {
    std::cout << "Teacher: " << name << ", Department: " << department << std::endl;
}

// Unique method implementation
void Teacher::teach() const {
    std::cout << name << " is teaching " << department << "." << std::endl;
}