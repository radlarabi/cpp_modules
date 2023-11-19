/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 16:36:17 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal/Dog.hpp"
#include "Animal/Cat.hpp"
#include "WrongAnimal/WrongCat.hpp"

int main() {
	A_Animal *arr[10];
	for(int i = 0; i < 5 ; i++)
	{
		arr[i] = new Dog();
	}
	for(int i = 5; i < 10 ; i++)
	{
		arr[i] = new Cat();
	}
	for(int i = 0; i < 10; i++)
	{
		arr[i]->makeSound();
	}
	for(int i = 0; i < 10; i++)
		delete arr[i];
}
