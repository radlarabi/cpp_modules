/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:25:43 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/15 22:22:33 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default constractor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ScavTrap(_name + "_clap_name"), FragTrap(_name + "_clap_name")
{
    this->name = _name + "_clap_name";
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoint = ScavTrap::energyPoint;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &diamondTrap)
{
    name = diamondTrap.name;
    hitPoint = diamondTrap.hitPoint;
    energyPoint = diamondTrap.energyPoint;
    attackDamage = diamondTrap.attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "destractor " << this->name << " DiamondTrap called" << std::endl;
}

void DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
    name = diamondTrap.name;
    hitPoint = diamondTrap.hitPoint;
    energyPoint = diamondTrap.energyPoint;
    attackDamage = diamondTrap.attackDamage;
}

void    DiamondTrap::whoAmI(void)
{
}

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}