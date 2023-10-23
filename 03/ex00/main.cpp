/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/10/19 14:58:20 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // ClapTrap *clapT = new ClapTrap("radouan");
    // // clapT->takeDamage(3);
    // clapT->beRepaired(2);
    // // clapT->attack("adnan");
    // delete clapT;
	ClapTrap claptrap("1");

	claptrap.attack("2");
    return 0;
}
// int main( void )
// {
//     ClapTrap clap("Ash");

//     clap.attack("Staff");


//     return 0;
// }