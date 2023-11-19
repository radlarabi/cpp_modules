/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:15 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 01:15:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "../Brain.hpp"


class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        Dog(Dog const &src);
        Dog operator=(Dog const &src);
        void makeSound() const;
};


#endif