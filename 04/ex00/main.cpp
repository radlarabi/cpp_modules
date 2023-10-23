/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by rlarabi           #+#    #+#             */
/*   Updated: 2023/10/23 21:18:13 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "Animal" << std::endl;
    
    const Animal *meta = new Animal();
    const Animal *i = new Cat();
    const Animal *j = new Dog();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "Wrong Animal" << std::endl;
    
    const WrongAnimal *a = new WrongCat();

    std::cout << a->getType() << " " << std::endl;
    a->makeSound();
    return 0;
}