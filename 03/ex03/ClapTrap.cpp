/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:38 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/15 21:59:46 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " has been destroyed" << std::endl;
}
ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
    name = claptrap.name;
    hitPoint = claptrap.hitPoint;
    energyPoint = claptrap.energyPoint;
    attackDamage = claptrap.attackDamage;
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
    if (energyPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energyPoint :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if ((unsigned int)hitPoint > amount)
    {
        std::cout << "ClapTrap " << this->name << "has no anount left :(" << std::endl;
        return ;
    }
    std::cout << "ClapTRap " << this->name << "t ake damage with " << amount << " of point" << std::endl; 
    hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energyPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name << "has no energy Point left :(" << std::endl;
        return ;
    }
    energyPoint--;
    hitPoint += amount; 
}
