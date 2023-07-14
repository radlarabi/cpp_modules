#include "Zombie.hpp"

void    Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << this->name << "has been destroyed" << std::endl;
}
Zombie::Zombie(void)
{
    std::cout << "New zombie has been created" << std::endl;
}