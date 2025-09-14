/*
This is a standard include guard. It prevents the same header file from being included multiple 
times in a single compilation unit, which would cause compilation errors. If SCHOOL_ENTITY_H 
is not defined, it is defined, and the code is processed. If it's already defined, the preprocessor 
skips the entire block until #endif.
*/
#ifndef SCHOOL_ENTITY_H
#define SCHOOL_ENTITY_H
#include <iostream>
// The base class for all school entities
// This is an abstract class to demonstrate pure virtual functions and abstraction
class SchoolEntity {
public:
    // Pure virtual function to enforce that all derived classes must implement their own description
    virtual void describe() const = 0;

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~SchoolEntity() {
        std::cout << "SchoolEntity destructor called." << std::endl;
    }
    /*
    This is a pure virtual function. The = 0 syntax makes the class SchoolEntity abstract, 
    meaning you cannot create objects of this class directly. Any class that inherits from 
    SchoolEntity must provide its own implementation of the describe function. This enforces a 
    common interface for all entities in the school system, a key aspect of abstraction and 
    polymorphism. The const keyword indicates that this function does not modify the object's state.

    This is a virtual destructor. Making the destructor virtual is crucial for polymorphism. 
    It ensures that when you delete an object of a derived class through a base class pointer 
    (e.g., delete entity_ptr;), the correct destructor for the derived class is called first, 
    followed by the base class destructor. Without this, you'd get undefined behavior and a 
    memory leak if the derived class had dynamically allocated members.
    */ 
};

#endif // SCHOOL_ENTITY_H