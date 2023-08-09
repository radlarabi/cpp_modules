/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:20:34 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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