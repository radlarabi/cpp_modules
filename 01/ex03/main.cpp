#include "HumanA.hpp"
#include "HumanB.hpp"
// #include "Weapon.hpp"
int main(void) {

    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    return 0;
}