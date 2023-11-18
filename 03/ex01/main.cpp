/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:42 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/18 21:10:08 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap a( "A" );


    a.attack( "target_1" );
    a.attack( "target_2" );
    a.attack( "target_3" );
    a.attack( "target_4" );
    a.attack( "target_5" );
    a.takeDamage( 2 );
    a.beRepaired( 10 );
    a.guardGate();

    return 0;
}