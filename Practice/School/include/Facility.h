#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include "SchoolEntity.h"

// Facility class demonstrating Inheritance
class Facility : public SchoolEntity {
private:
    std::string type;
    std::string location;

public:
    // Parameterized Constructor
    Facility(const std::string& f_type, const std::string& f_loc);

    // Method overriding
    void describe() const override;
};

#endif // FACILITY_H