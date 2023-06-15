#include <iostream>
#include <sstream>
#include <string>
 
int main()
{
    // greet the user
    std::string name;
    while (1)
    {
        std::cout << "What is your name? ";
        std::getline(std::cin, name);
        std::cout << "Hello " << name << ", nice to meet you.\n";

    }

}