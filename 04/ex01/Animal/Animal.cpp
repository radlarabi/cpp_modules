/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:37:59 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 21:40:44 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "Animal " << type << " constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator = (Animal const &src) {
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string Animal::getType() const {
    return (this->type);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}