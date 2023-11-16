/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:44 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 17:44:32 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constractor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destractor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constractor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap  &scavTrap)
{
    name = scavTrap.name;
    hitPoint = scavTrap.hitPoint;
    energyPoint = scavTrap.energyPoint;
    attackDamage = scavTrap.attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    name = scavTrap.name;
    hitPoint = scavTrap.hitPoint;
    energyPoint = scavTrap.energyPoint;
    attackDamage = scavTrap.attackDamage;
    return *this;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->energyPoint > 0 && this->hitPoint > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energyPoint--;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " has no energyPoint :(" << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode" << std::endl;
}