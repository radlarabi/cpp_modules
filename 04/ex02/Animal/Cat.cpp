/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:08 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 16:45:07 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    this->_brain = new Brain("cat");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : A_Animal(src), _brain(new Brain(src._type))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (Cat const &src) {
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        delete this->_brain;
        this->_brain = new Brain(src._type);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaw" << std::endl;
}