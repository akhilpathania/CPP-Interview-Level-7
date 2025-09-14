#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "SchoolEntity.h"

// Forward declaration
class Teacher;

// Student class demonstrating Inheritance
class Student : public SchoolEntity {
private:
    std::string name;
    int grade;
    // Using a raw pointer to demonstrate manual memory management
    Teacher* current_teacher;

public:
    // Parameterized Constructor
    Student(const std::string& s_name, int s_grade);

    // Method overriding
    void describe() const override;

    // Using pointers and a 'this' pointer
    void assign_teacher(Teacher* teacher);

    // Function overloading
    void study() const;
    void study(const std::string& subject) const;
};

#endif // STUDENT_H