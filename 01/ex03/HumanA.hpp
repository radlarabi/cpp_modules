#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(Weapon Weapon);
    ~HumanA();
    void attack();
private:
    Weapon Weapon;
    std::string name;
};
