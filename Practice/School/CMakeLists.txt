cmake_minimum_required(VERSION 3.10)

# Set the project name
project(SchoolManagementSystem)

# Set the C++ standard to C++17 (or a later version)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable target
add_executable(
    SchoolApp
    main.cpp
    School.cpp
    #SchoolEntity.cpp
    Student.cpp
    Teacher.cpp
    Facility.cpp
)