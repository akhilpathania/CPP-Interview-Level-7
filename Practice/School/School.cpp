#include "include/School.h"
#include <iostream>

// Constructor implementation
School::School(const std::string& school_name) : name(school_name), student_count(0) {
    std::cout << "School " << name << " created." << std::endl;
}

// Destructor implementation
School::~School() {
    std::cout << "School " << name << " is being destroyed." << std::endl;
}

// Method implementations
void School::add_student(std::unique_ptr<Student> student) {
    std::cout << "Adding a new student." << std::endl;
    this->students.push_back(std::move(student));
    this->student_count++;
}

void School::add_teacher(std::unique_ptr<Teacher> teacher) {
    std::cout << "Adding a new teacher." << std::endl;
    this->teachers.push_back(std::move(teacher));
}

void School::add_facility(std::unique_ptr<Facility> facility) {
    std::cout << "Adding a new facility." << std::endl;
    this->facilities.push_back(std::move(facility));
}

void School::show_info() const {
    std::cout << "School Name: " << name << std::endl;
    std::cout << "Total Students: " << student_count << std::endl;
    std::cout << "Total Teachers: " << teachers.size() << std::endl;
}

void School::show_info(const std::string& type) const {
    if (type == "students") {
        std::cout << "Total Students: " << student_count << std::endl;
    } else if (type == "teachers") {
        std::cout << "Total Teachers: " << teachers.size() << std::endl;
    }
}

void School::list_all_entities() {
    std::cout << "\nListing all school entities:" << std::endl;
    // Pointers and Polymorphism in action
    for (const auto& student : students) {
        SchoolEntity* entity_ptr = student.get();
        entity_ptr->describe();
    }
    for (const auto& teacher : teachers) {
        SchoolEntity* entity_ptr = teacher.get();
        entity_ptr->describe();
    }
    for (const auto& facility : facilities) {
        SchoolEntity* entity_ptr = facility.get();
        entity_ptr->describe();
    }
}