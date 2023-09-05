/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:00 by rlarabi           #+#    #+#             */
/*   Updated: 2023/09/02 12:42:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wpn):Wpn(Wpn), name(name)
{
    std::cout << "HumanA has been created" << std::endl;
}


void    HumanA::attack(void){
    std::cout << this->name << " attacks with their " << Wpn.getType() << std::endl;
}

HumanA::~HumanA(void){
    std::cout << "HumanA has been destroyed" << std::endl;
}
