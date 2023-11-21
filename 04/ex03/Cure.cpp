/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:03:26 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/21 19:03:00 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    this->type = "cure";
}

Cure::Cure(const Cure &cure) {
    this->type = cure.type;
}

Cure &Cure::operator = (Cure const &cure){
    if (this != &cure)
        this->type = cure.type;
    return *this;
}

Cure::~Cure(){
}

AMateria* Cure::clone() const{
    AMateria *tmp = new Cure();
    return tmp;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}