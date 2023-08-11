/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 16:18:39 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int hitPoint;
    int energyPoint;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &claptrap);
    ~ClapTrap();
    void operator = (const ClapTrap &clapTrap);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};



#endif