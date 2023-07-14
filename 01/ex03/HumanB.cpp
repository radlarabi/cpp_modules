#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << "HumanB has been created" << std::endl;
}

void    HumanB::attack(void){
    std::cout << name << " attacks with their " << Wpn->getType() << std::endl;
}

HumanB::~HumanB(void){
    std::cout << "HumanB has been destroyed" << std::endl;
}

void    HumanB::setWeapon(Weapon &Wpn)
{
    this->Wpn = &Wpn;
}