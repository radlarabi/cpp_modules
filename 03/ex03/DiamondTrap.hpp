/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:25:39 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/15 22:04:58 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamonTrap : public ClapTrap, public FragTrap{
public:
    DiamonTrap();    
    DiamonTrap(DiamonTrap &diamonTrap);
    DiamonTrap(std::string name);
    ~DiamonTrap();
};

#endif