/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:37 by rlarabi           #+#    #+#             */
/*   Updated: 2023/09/01 23:53:42 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << this->name << " has been destroyed" << std::endl;
}
Zombie::Zombie(void)
{
    std::cout << "New zombie has been created" << std::endl;
}