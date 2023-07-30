#include "phoneBook.hpp"

int main(void)
{
    PhoneBook phone;
    std::string input;
    welcome();
    while(1)
    {
        std::cout << "> ";
        if (std::getline(std::cin,input).eof())
            exit(1);
        if(!input.compare("ADD"))
            phone.add();
        else if(!input.compare("SEARCH"))
            phone.search();
        else if(!input.compare("EXIT"))
            return 0;
        else
            std::cout << "command not fount :(" << std::endl; 
    }
    return 0;
}