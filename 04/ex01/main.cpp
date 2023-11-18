/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/18 23:56:20 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal/Dog.hpp"
#include "Animal/Cat.hpp"
#include "WrongAnimal/WrongCat.hpp"

int main() {
	std::cout << "==========  GOOD  ANIMALS  ==========\n" << std::endl;

	Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << std::endl;

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	std::cout << std::endl;

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;

	/**********************************************************/

	std::cout << "\n========== WRONG ANIMALS ==========\n" << std::endl;

	WrongAnimal *wAnimal = new WrongAnimal();
	WrongAnimal *wCat = new WrongCat();

	std::cout << std::endl;

	std::cout << wAnimal->getType() << std::endl;
	std::cout << wCat->getType() << std::endl;

	std::cout << std::endl;

	wAnimal->makeSound();
	wCat->makeSound();

	std::cout << std::endl;

	delete wAnimal;
	delete wCat;
}
