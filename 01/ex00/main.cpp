#include "Zombie.hpp"

int main(void) {
    Zombie *new_Zombie = newZombie("Boooo");

    new_Zombie->announce();
    randomChump("Foooo");
    delete new_Zombie;
    return 0;
}