#include <iostream>
#include <string>

int main(void) {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "adress of brain is : " << &brain << std::endl;
    std::cout << "adress of stringPTR is : " << &stringPTR << std::endl;
    std::cout << "adress of stringREF is : " << &stringREF << std::endl << std::endl << std::endl;

    std::cout << "value of brain is : " << brain << std::endl;
    std::cout << "value of stringPTR is : " << stringPTR << std::endl;
    std::cout << "value of stringREF is : " << stringREF << std::endl;

    return 0;
}