/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:58:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 21:41:24 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string	type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &c);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &c);
        std::string	getType() const;
        virtual void		makeSound() const;
};
#endif