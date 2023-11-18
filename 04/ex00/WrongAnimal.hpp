/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:58:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/18 23:44:55 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string	_type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &c);
        ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &c);
        std::string	getType() const;
        void makeSound() const;
};
#endif