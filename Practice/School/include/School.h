#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
#include <vector>
#include <memory>
#include "Student.h"
#include "Teacher.h"
#include "Facility.h"

// The main School class, demonstrating Encapsulation and Composition
class School {
private:
    std::string name;
    int student_count;
    // Using smart pointers (std::unique_ptr) for dynamic memory management
    std::vector<std::unique_ptr<Student>> students;
    std::vector<std::unique_ptr<Teacher>> teachers;
    std::vector<std::unique_ptr<Facility>> facilities;

public:
    // Constructor with an initializer list
    School(const std::string& school_name);

    // Destructor
    ~School();

    // Encapsulation: Public methods to control access to private data
    void add_student(std::unique_ptr<Student> student);
    void add_teacher(std::unique_ptr<Teacher> teacher);
    void add_facility(std::unique_ptr<Facility> facility);

    // Function overloading (Compile-time Polymorphism)
    void show_info() const;
    void show_info(const std::string& type) const;

    // A method to demonstrate pointers and composition.
    void list_all_entities();
};

#endif // SCHOOL_H