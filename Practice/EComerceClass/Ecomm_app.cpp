#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Entered parameters are: " << std::endl;
    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
    
}