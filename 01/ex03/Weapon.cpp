/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:12 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:19:13 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
    std::cout << "Weapon has been created" << std::endl;
}

Weapon::~Weapon(){
    std::cout << "Weapon has been destroyed" << std::endl;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
std::string    Weapon::getType()
{
    return this->type;
}