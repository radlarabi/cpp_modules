/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:46 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 12:17:04 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &scavTrap);
    ~ScavTrap();
    void operator = (const ScavTrap &scavTrap);
    void attack(const std::string &target);
    void guardGate();
};

#endif