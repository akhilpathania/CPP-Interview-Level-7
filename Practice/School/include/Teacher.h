#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include "SchoolEntity.h"

// Teacher class demonstrating Inheritance
class Teacher final : public SchoolEntity { // 'final' keyword prevents further inheritance
private:
    std::string name;
    std::string department;

public:
    // Parameterized Constructor
    Teacher(const std::string& t_name, const std::string& dept);

    // Method overriding (Runtime Polymorphism)
    void describe() const override;

    // Example of a unique method for a Teacher
    void teach() const;
};

#endif // TEACHER_H