#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
    std::cout << "Weapon has been created" << std::endl;
}

Weapon::~Weapon(){
    std::cout << "Weapon has been destroyed" << std::endl;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
std::string    Weapon::getType()
{
    return this->type;
}