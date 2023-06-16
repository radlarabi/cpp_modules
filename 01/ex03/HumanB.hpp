#include "HumanB.hpp"

class HumanB
{
public:
    HumanB();
    ~HumanB();
    void attack();
private:
    Weapon Weapon;
    std::string name;
};
