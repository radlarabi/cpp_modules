/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:44 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 13:46:35 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
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
    std::cout << "ScavTrap " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap)
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

void    ScavTrap::attack(const std::string &target)
{
    if (energyPoint <= 0)
    {
        std::cout << "ScavTrap " << this->name << " has no energyPoint :(" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoint--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode" << std::endl;
}