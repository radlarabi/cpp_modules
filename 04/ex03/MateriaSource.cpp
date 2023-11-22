/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:28:24 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/22 17:54:20 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for(int i = 0; i < 4 ; i++)
    {
        this->slots[i] = NULL;
        this->adrs[i] = NULL;
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
        if (this->adrs[i])
            delete this->adrs[i];
        if (this->slots[i])
                delete this->slots[i];
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
            if (this->adrs[i])
                delete this->adrs[i];
            this->adrs[i] = this->slots[i];
            this->slots[i] = am;
            return;
        }
    }
}
