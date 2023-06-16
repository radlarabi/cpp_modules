#include "Zombie.hpp"

int main(void) {
    Zombie *hordeZombie = zombieHorde(5, "Foo");
    for (size_t i = 0; i < 5; i++)
    {
        hordeZombie[i].announce();
    }
    delete[] hordeZombie;
    return 0;
}