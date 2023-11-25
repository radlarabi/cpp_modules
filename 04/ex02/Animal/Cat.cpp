/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:08 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 15:58:45 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_brain = new Brain();
    this->_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : A_Animal(src)
{
    this->_brain = new Brain();
    *this->_brain = *src._brain;
    this->_type = "Cat";
    std::cout << "Cat copy constructor called" << std::endl;
    // std::cout << "adrs : " << this->_brain << std::endl;
    // std::cout << "adrs : " << src._brain << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (Cat const &src) {
    std::cout << "Cat assignation operator called" << std::endl;
    this->_brain = new Brain();
    *this->_brain = *src._brain;
    this->_type = "Cat";
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaw" << std::endl;
}