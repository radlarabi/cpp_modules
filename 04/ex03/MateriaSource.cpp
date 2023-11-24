/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:28:24 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/24 18:51:05 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    this->adrs = new Adrs;
    this->adrs->materia = NULL;
    this->adrs->next = NULL; 
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &ms){
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = ms.slots[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms){
    if (this != &ms)
    {
        for (int i = 0; i < 4; i++)
        {
            this->slots[i] = this->createMateria(this->slots[i]->getType());
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
    Adrs *tmp;
    while (this->adrs)
    {
        tmp = this->adrs->next;
        // delete this->adrs->materia;
        delete this->adrs;
        this->adrs = tmp;
    }
    
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
            push(&this->adrs, am);
            this->slots[i] = am;
            printf("---> %p\n", am);
            return;
        }
    }
}
