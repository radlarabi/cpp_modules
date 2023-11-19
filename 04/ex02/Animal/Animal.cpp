/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:37:59 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 16:35:37 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

A_Animal::A_Animal() : _type("A_Animal") {
    std::cout << "A_Animal default constructor called" << std::endl;
}

A_Animal::A_Animal(std::string type) : _type(type) {
    std::cout << "A_Animal " << type << " constructor called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &src) {
    std::cout << "A_Animal copy constructor called" << std::endl;
    *this = src;
}

A_Animal& A_Animal::operator = (A_Animal const &src) {
    std::cout << "A_Animal assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

std::string A_Animal::getType() const {
    return (this->_type);
}

A_Animal::~A_Animal() {
    std::cout << "A_Animal destructor called" << std::endl;
}

void A_Animal::makeSound() const {
    std::cout << "A_Animal sound" << std::endl;
}