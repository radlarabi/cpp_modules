/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:13 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/27 12:30:01 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : A_Animal(src)
{
    this->type = "Dog";
    this->_brain = new Brain();
    *this->_brain = *src._brain;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog Dog::operator = (Dog const &src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &src)
    {   
        this->type = "Dog";
        delete this->_brain;
        this->_brain = new Brain();
        *this->_brain = *src._brain;
    }
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}