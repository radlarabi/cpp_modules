/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:58:32 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 21:41:20 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "WrongAnimal " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator = (WrongAnimal const &src) {
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string WrongAnimal::getType() const {
    return (this->type);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}