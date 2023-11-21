/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:42:03 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/21 17:58:49 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    this->type = "ice";
}

Ice::Ice(Ice &const ice):type(ice.type){
}

ice &Ice::operator = (Icec const &ice){
    if (this != ice)
        this->type = ice.type;
    return *this;
}

Ice::~Ice(){
}

AMateria* Ice::clone() const{
    AMateria *tmp = new Ice();
    return tmp;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const{
    return new Ice(*this);
}