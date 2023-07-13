#include "HumanA.hpp"

HumanA::HumanA(Weapon Weapon)
{
    this->Weapon = Weapon;
    this->name = Weapon->name;
    std::std::cout << "HumanA has been created" << std::endl;
}

void    HumanA::attack(void){
    std::cout << Weapon->name << " attacks with their " << Weapon->getType<< std::endl;
}

HumanA::~HumanA(void){
    std::cout << "HumanA has been destroyed" << std::endl;
}