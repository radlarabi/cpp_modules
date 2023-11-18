/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:11 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/18 23:45:30 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"


class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat const &src);
        Cat &operator=(Cat const &src);
        void makeSound() const;
};


#endif