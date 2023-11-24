/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:45:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/22 17:53:42 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
        this->adrs[i] = NULL;
    }
}

Character::Character(std::string _name) : name(_name){
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
        this->adrs[i] = NULL;
    }
}

Character::Character(Character const &src) : name(src.name) {
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            this->slots[i] = src.slots[i]->clone();
        }
        
    }
}

Character &Character::operator = (Character const &src){
    if (this != &src)
    {
        this->name = src.name;
        for (int i = 0; i < 4; i++)
        {
            this->slots[i] = src.slots[i]->clone();
        }
    }
    return *this;
}

Character::~Character(){
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            delete this->slots[i];
        if (this->adrs[i])
                delete this->adrs[i];
    }
    
}

std::string const &Character::getName()const {
    return this->name;
}

void Character::equip(AMateria* m)
{
    int i = 0;
    for(i = 0; i < 4 ; i++)
    {
        if (!this->slots[i])
        {
            this->slots[i] = m;
            return ;
        }
    }
    std::cout << "The slots is full" << std::endl;
}

void Character::unequip(int idx){
    if (idx < 4 && idx >= 0)
    {
        if (this->adrs[idx])
            delete this->adrs[idx];
        this->adrs[idx] = this->slots[idx];
        this->slots[idx] = NULL;
        return ;
    }
    std::cout << "index must be between 0 and 3 !!" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && this->slots[idx])
        this->slots[idx]->use(target);
}