#include "HumanB.hpp"

HumanB::HumanB()
{
    std::std::cout << "HumanB has been created" << std::endl;
}

void    HumanB::attack(void){
    std::cout << Weapon->name << " attacks with their " << Weapon->getType<< std::endl;
}
HumanB::~HumanB(void){
    std::cout << "HumanB has been destroyed" << std::endl;
}
