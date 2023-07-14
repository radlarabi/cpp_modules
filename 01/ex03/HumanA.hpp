#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA( std::string name , Weapon &Wpn);
    ~HumanA();
    void attack();
private:
    Weapon &Wpn;
    std::string name;
};

#endif


