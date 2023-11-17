/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:25:43 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/17 18:16:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default constractor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 30;
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

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
    name = diamondTrap.name;
    hitPoint = diamondTrap.hitPoint;
    energyPoint = diamondTrap.energyPoint;
    attackDamage = diamondTrap.attackDamage;
    return *this;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "my name is " << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}