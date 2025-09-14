#include "include/Student.h"
#include <iostream>
#include "include/Teacher.h" // Needed for the 'Teacher' class definition

// Parameterized Constructor implementation
Student::Student(const std::string& s_name, int s_grade) : name(s_name), grade(s_grade), current_teacher(nullptr) {}

// Method overriding implementation
void Student::describe() const {
    std::cout << "Student: " << name << ", Grade: " << grade << std::endl;
}

// Method to demonstrate pointers
void Student::assign_teacher(Teacher* teacher) {
    this->current_teacher = teacher;
    std::cout << "Assigned a teacher to student " << this->name << std::endl;
}

// Function overloading implementations
void Student::study() const {
    std::cout << name << " is studying." << std::endl;
}

void Student::study(const std::string& subject) const {
    std::cout << name << " is studying " << subject << "." << std::endl;
}