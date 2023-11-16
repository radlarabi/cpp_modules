/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:44 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/15 22:33:37 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constractor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destractor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap) : ClapTrap(scavTrap)
{
    name = scavTrap.name;
    hitPoint = scavTrap.hitPoint;
    energyPoint = scavTrap.energyPoint;
    attackDamage = scavTrap.attackDamage;
}

void ScavTrap::operator=(ScavTrap const &scavTrap)
{
    name = scavTrap.name;
    hitPoint = scavTrap.hitPoint;
    energyPoint = scavTrap.energyPoint;
    attackDamage = scavTrap.attackDamage;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode" << std::endl;
}