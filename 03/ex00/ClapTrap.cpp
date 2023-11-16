/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:28 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 12:05:34 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
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
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energyPoint--;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " has no energyPoint :(" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
    
    if (this->energyPoint <= 0 || (this->hitPoint - amount) <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no amount left :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " take damage with " << amount << " of point" << std::endl; 
    this->hitPoint -= amount;
    this->energyPoint--;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (amount > (unsigned int)INT_MAX - this->hitPoint )
    {
        std::cout << "amout + hitPoint > INT_MAX" << std::endl;
        return ;
    }
    if (this->energyPoint > 0 && this->hitPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " repared itself with amount of " << amount << std::endl;
        energyPoint--;
        hitPoint += amount; 
        return ;
    }
    std::cout << "ClapTrap " << this->name << " has no energy Point left :(" << std::endl;
    return ;
}
