/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:05 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 01:57:19 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string	_type;
public:
    Animal();
    virtual ~Animal();
    Animal(std::string type);
    Animal(Animal const &src);
    Animal& operator=(Animal const &src);
    std::string	getType() const;
    virtual void makeSound() const = 0;
};

#endif