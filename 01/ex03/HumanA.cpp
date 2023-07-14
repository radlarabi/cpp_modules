#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wpn):Wpn(Wpn)
{
    // this->Wpn = Wpn;
    this->name = name;
    std::cout << "HumanA has been created" << std::endl;
}


void    HumanA::attack(void){
    std::cout << this->name << " attacks with their " << Wpn.getType() << std::endl;
}

HumanA::~HumanA(void){
    std::cout << "HumanA has been destroyed" << std::endl;
}
