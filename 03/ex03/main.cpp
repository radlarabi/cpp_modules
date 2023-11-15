/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:42 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/15 17:38:19 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    ScavTrap claptrap("A");
    FragTrap claptrap1("B");
    claptrap.attack("Enemy");
    claptrap.takeDamage(10);
    return 0;
}