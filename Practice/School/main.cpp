#include <iostream>
#include <memory>
#include "include/School.h"
#include "include/Student.h"
#include "include/Teacher.h"
#include "include/Facility.h"

int main() {
    // Demonstrating constructors and dynamic memory allocation with `new` and `unique_ptr`
    auto my_school = std::make_unique<School>("Central High School");

    // Adding students
    my_school->add_student(std::make_unique<Student>("Alice", 10));
    my_school->add_student(std::make_unique<Student>("Bob", 11));

    // Adding a teacher and a facility
    my_school->add_teacher(std::make_unique<Teacher>("Mr. Smith", "Computer Science"));
    my_school->add_facility(std::make_unique<Facility>("Library", "Main Building"));

    // Demonstrating function overloading
    my_school->show_info();
    my_school->show_info("students");

    // Demonstrating runtime polymorphism and a list of entities
    my_school->list_all_entities();

    return 0;
}