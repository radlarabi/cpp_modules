#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int hitPoint;
    int energyPoint;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    void operator = (const ClapTrap &clapTrap);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};



#endif