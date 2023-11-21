/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:45:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/21 17:45:06 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
    }
    // this->adrs = NULL;
}

Character::Character(Character const &src){
    // if (*this != src)
    // {
    this->slots = src.slots;
    this->adrs = src.adrs;
    // }
}

Character &Character::operator = (Character const &src){
    this->adrs = src.adrs;
    this->slots = src.src;
    return *this;
}

Character::~Character(){
}

std::string const &Character::getName()const {
    return this->name;
}

void Character::equip(AMateria* m)
{
    int i = 0;
    for(i = 0; i < 4 ; i++)
    {
        if (slots[i] != NULL)
        {
            slots[i] = new AMateria(m);
            break;
        }
    }
    if (i == 4)
        std::cout << "The slots is full" << std::endl;
}

void Character::unequip(int idx){
    if (i < 4 && i >= 0)
    {
        push(this->adrs, this->slots[idx]);
        this->slots[idx] = NULL;
        return ;
    }
    std::cout << "index must be between 0 and 3 !!" << stdl::endl;
}

void push(Adrs** head, void *adrs){
    Adrs* newNode = new Adrs;
    newNode->adrs = adrs; 
    newNode->next = NULL;
    if (!head)
    {
        (*head) = newNode;
        return ;
    }
    Adrs *last = *head;
    while(!(last->next))
        last = last->next;
    last->next = newNode; 
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && this->slots[idx])
        this->slots[idx]->use(target);
}
