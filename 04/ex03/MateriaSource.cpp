/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:28:24 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/29 13:27:06 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    this->adrs = NULL;
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &ms){
    this->adrs = NULL;
    for(int i = 0; i < 4 ; i++)
    {
        if (ms.slots[i])
            this->slots[i] = ms.slots[i]->clone();
        else
            this->slots[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms){
    if (this != &ms)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->slots[i])
                delete this->slots[i];
            if (ms.slots[i])
                this->slots[i] = ms.slots[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
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

void MateriaSource::push(AMateria &adrs){
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

AMateria *MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] && this->slots[i]->getType() == type)
            return this->slots[i]->clone();
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria * am){
    for (int i = 0; i < 4; i++)
    {
        if (!this->slots[i])
        {
            this->slots[i] = am;
            return;
        }
    }
    push(*am);
}
