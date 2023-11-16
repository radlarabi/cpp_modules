/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:30:19 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 16:35:02 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constractor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << _name << " called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "destractor " << this->name << " FragTrap called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " wants to high five" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap)
{
    name = fragTrap.name;
    hitPoint = fragTrap.hitPoint;
    energyPoint = fragTrap.energyPoint;
    attackDamage = fragTrap.attackDamage;
}

FragTrap &FragTrap::operator=(FragTrap const &fragTrap)
{
    name = fragTrap.name;
    hitPoint = fragTrap.hitPoint;
    energyPoint = fragTrap.energyPoint;
    attackDamage = fragTrap.attackDamage;
    return *this;
}