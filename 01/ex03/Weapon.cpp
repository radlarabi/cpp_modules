#include "Weapon.hpp"

std::string Weapon::getType(){
    return this->type;
}
void Weapon::setType(std::string type){
    this->type = type;
}

Weapon::Weapon(){
    std::cout << "Weapon has been created" << std::endl;
}

Weapon::~Weapon(){
    std::cout << "Weapon has been destroyed" << std::endl;
}