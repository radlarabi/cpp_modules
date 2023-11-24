/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:37 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/24 13:56:39 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp" 
#include "Struct.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *slots[4];
    Adrs *adrs;

public:
    MateriaSource();
    MateriaSource(const MateriaSource &ms);
    MateriaSource &operator = (const MateriaSource &ms);
    ~MateriaSource();
    void learnMateria(AMateria * am);
    AMateria *createMateria(std::string const &type);
};

void push(Adrs** head, AMateria *adrs);
#endif