/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:05 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/07 22:11:49 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : Wpn(NULL) ,name(name)
{
    std::cout << "HumanB has been created" << std::endl;
}

void    HumanB::attack(void)
{   
    if(Wpn != NULL)
        std::cout << name << " attacks with their " << Wpn->getType() << std::endl;
    else
        std::cout << "do not have weapon !!" << std::endl;
}

HumanB::~HumanB(void){
    std::cout << "HumanB has been destroyed " << std::endl;
}

void    HumanB::setWeapon(Weapon &Wpn)
{
    this->Wpn = &Wpn;
}