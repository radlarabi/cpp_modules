#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie_Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie_Horde[i].setName(name);
    }
    return zombie_Horde;
}