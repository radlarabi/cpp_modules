/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:45:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/20 00:06:47 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for(int i = 0; i < 4 ; i++)
        slots[i] = NULL;
}

Character::Character(Character const &src){
    if (*this != src)
        this->slots = src.src;
    return *this;
}

Character &Character::operator = (Character const &src){
    this->slots = src.src;
    return *this;
}

Character::~Character(){
}

std::string const &Character::getName()const {
    return this->name;
}

void Character::equip(AMateria* m);
{
    for(int i = 0; i < 4 ; i++)
    {
        if (slots[i] != NULL)
        {
            slots[i] = new AMateria(m);
            break;
        }
    }
    if (i == 3)
        //msg error

}
