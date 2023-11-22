/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:06:41 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/22 12:54:54 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{   
}

AMateria::AMateria(std::string const & type): type(type)
{
}

AMateria::~AMateria()
{   
}

AMateria::AMateria(AMateria &amateria): type(amateria.type)
{
}

AMateria &AMateria::operator=(AMateria &amateria)
{
    if (this != &amateria)
        this->type = amateria.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target){
    std::cout << "Materia name is " << target.getName() << std::endl;
}