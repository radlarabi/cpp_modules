/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:02:46 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 22:13:46 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public Amateria
{
public:
    Cure();
    Cure(Cure const &cure);
    Cure &operator=(Cure const &cure);
    ~Cure();
    AMateria* clone() const;
};

#endif
