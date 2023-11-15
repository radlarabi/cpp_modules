/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:25:39 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/15 22:23:36 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ClapTrap, public FragTrap{
private:
    std::string name;
public:
    DiamondTrap();    
    DiamondTrap(DiamondTrap &diamondTrap);
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void operator = (DiamondTrap const &diamondTrap);
    void  attack(std::string const & target);
    void whoAmI(void);
    
};

#endif