/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:13 by rlarabi           #+#    #+#             */
/*   Updated: 2023/10/25 12:02:12 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{

    std::cout << "Dog copy constructor called" << std::endl;
}

// Dog Dog::operator = (Dog const &src)
// {
//     std::cout << "Dog assignation operator called" << std::endl;
//     if (this != &src)
//         this->_type = src._type;
//     return (*this);
// }

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}