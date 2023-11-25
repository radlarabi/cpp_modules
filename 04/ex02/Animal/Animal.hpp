/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:05 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 21:42:02 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class A_Animal
{
protected:
    std::string	type;
public:
    A_Animal();
    virtual ~A_Animal();
    A_Animal(std::string type);
    A_Animal(A_Animal const &src);
    A_Animal& operator=(A_Animal const &src);
    std::string	getType() const;
    virtual void makeSound() const = 0;
};

#endif