/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:40:10 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 22:22:41 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public Amateria
{
public:
    Ice();
    Ice(Ice const &ice);
    Ice &operator=(Ice const &ice);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
