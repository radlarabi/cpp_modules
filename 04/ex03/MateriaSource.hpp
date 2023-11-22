/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:37 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/22 15:58:08 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp" 

class MateriaSource : public IMateriaSource
{
private:
    AMateria *slots[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &ms);
    MateriaSource &operator = (const MateriaSource &ms);
    ~MateriaSource();
    void learnMateria(AMateria * am);
    AMateria *createMateria(std::string const &type);
};


#endif