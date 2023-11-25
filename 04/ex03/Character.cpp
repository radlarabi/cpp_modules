/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:45:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 01:10:00 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    this->adrs = NULL;
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
    }
}

Character::Character(std::string _name) : name(_name){
    this->adrs = NULL;
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
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
    }
    Adrs *cur = this->adrs;
    
    while (cur)
    {
        Adrs *next = cur->next;
        delete cur->materia;
        delete cur;
        cur = next;
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
    push(*m);
    std::cout << "The slots is full" << std::endl;
}

void Character::unequip(int idx){
    if (idx < 4 && idx >= 0)
    {
        push(*(this->slots[idx]));
        this->slots[idx] = NULL;
        return ;
    }
    std::cout << "index must be between 0 and 3 !!" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && this->slots[idx])
        this->slots[idx]->use(target);
}
static bool checkExist(Adrs *adrs, AMateria &am)
{
    while (adrs)
    {
        if (adrs->materia == &am)
            return true;
        adrs = adrs->next;
    }
    return false;
}
void Character::push(AMateria &adrs){
    Adrs* newNode = new Adrs;
    newNode->materia = &adrs; 
    if(checkExist(this->adrs, adrs))
    {
        delete newNode;
        return ;
    }
    newNode->next = this->adrs;
    this->adrs = newNode;
}