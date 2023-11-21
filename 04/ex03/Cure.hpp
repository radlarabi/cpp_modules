/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:02:46 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/21 19:03:09 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &cure);
    Cure &operator=(Cure const &cure);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
