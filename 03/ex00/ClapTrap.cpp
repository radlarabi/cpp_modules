/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:28 by rlarabi           #+#    #+#             */
/*   Updated: 2023/10/19 14:59:10 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
    name = claptrap.name;
    hitPoint = claptrap.hitPoint;
    energyPoint = claptrap.energyPoint;
    attackDamage = claptrap.attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0){
    std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

void ClapTrap::operator=(const ClapTrap &clapTrap)
{
    this->name = clapTrap.name;
    this->hitPoint = clapTrap.hitPoint;
    this->energyPoint = clapTrap.energyPoint;
    this->attackDamage = clapTrap.attackDamage;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->energyPoint > 0 && this->hitPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energyPoint :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount){
    
    if ((amount - this->hitPoint) <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no amount left :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << "take damage with " << amount << " of point" << std::endl; 
    hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energyPoint > 0 && this->hitPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " repared itself " << std::endl;
        energyPoint--;
        hitPoint += amount; 
    }
        std::cout << "ClapTrap " << this->name << "has no energy Point left :(" << std::endl;
        return ;
}
