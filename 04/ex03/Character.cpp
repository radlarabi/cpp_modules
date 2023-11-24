/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:45:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/24 19:08:57 by rlarabi          ###   ########.fr       */
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
    Adrs *tmp;
    while (this->adrs)
    {
        tmp = this->adrs->next;
        // delete tmp->materia;
        delete this->adrs;
        this->adrs = tmp;
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
            push(&this->adrs, m);
            this->slots[i] = m;
            return ;
        }
    }
    push(&this->adrs, m);
    std::cout << "The slots is full" << std::endl;
}

void Character::unequip(int idx){
    if (idx < 4 && idx >= 0)
    {
        push(&this->adrs, this->slots[idx]);
        this->slots[idx] = NULL;
        return ;
    }
    std::cout << "index must be between 0 and 3 !!" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && this->slots[idx])
        this->slots[idx]->use(target);
}

void push(Adrs** head, AMateria *adrs){
    Adrs* newNode = new Adrs;
    newNode->materia = adrs; 
    newNode->next = NULL;
    if (*head == NULL)
    {
    printf("%p\n", newNode);
        (*head) = newNode;
        return ;
    }
    Adrs *last = *head;
    while(!last)
    {
        if (last->materia == adrs)
        {
            delete newNode;
            return ;
        }
        last = last->next;
    }
    last->next = newNode; 
}