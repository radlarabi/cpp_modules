/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:38 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 16:30:27 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    name = claptrap.name;
    hitPoint = claptrap.hitPoint;
    energyPoint = claptrap.energyPoint;
    attackDamage = claptrap.attackDamage;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0){
    std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    this->name = clapTrap.name;
    this->hitPoint = clapTrap.hitPoint;
    this->energyPoint = clapTrap.energyPoint;
    this->attackDamage = clapTrap.attackDamage;
    return *this;
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
    
    if (this->energyPoint <= 0 || (this->hitPoint - (int)amount) <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no hitPoint left :(" << std::endl;
        this->hitPoint = 0;
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
    if (!this->energyPoint)
        std::cout << "ClapTrap " << this->name << " has no energy Point left :(" << std::endl;
    if (!this->hitPoint)
        std::cout << "ClapTrap " << this->name << " has no hit Point left :(" << std::endl;
    return ;
}