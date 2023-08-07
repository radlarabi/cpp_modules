#include "ClapTrap.hpp"

// int main()
// {
//     ClapTrap *clapT = new ClapTrap("radouan");
//     clapT->beRepaired(6);
//     clapT->takeDamage(3);
//     clapT->attack("amina");
//     delete clapT;
//     return 0;
// }
int main( void )
{
    ClapTrap clap("Ash");

    clap.attack("Staff");


    return 0;
}