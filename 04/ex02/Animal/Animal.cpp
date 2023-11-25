/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:37:59 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 21:41:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

A_Animal::A_Animal() : type("A_Animal") {
    std::cout << "A_Animal default constructor called" << std::endl;
}

A_Animal::A_Animal(std::string type) : type(type) {
    std::cout << "A_Animal " << type << " constructor called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &src) {
    std::cout << "A_Animal copy constructor called" << std::endl;
    *this = src;
}

A_Animal& A_Animal::operator = (A_Animal const &src) {
    std::cout << "A_Animal assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string A_Animal::getType() const {
    return (this->type);
}

A_Animal::~A_Animal() {
    std::cout << "A_Animal destructor called" << std::endl;
}
