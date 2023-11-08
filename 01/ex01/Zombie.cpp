/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:45 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/08 13:33:11 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void){
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie(void){
    std::cout << "Zombie has been created" << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Zombie has been destroyed" << std::endl;
}