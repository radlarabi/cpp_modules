#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constractor called" << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "destractor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    ClapTrap(name);
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " called" << std::endl;
}
