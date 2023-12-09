/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:10:43 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/09 22:18:19 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data *d = new Data;
	uintptr_t raw;

	// initializing data members
	d->a = 42;
	d->b = 22.5;
	d->c = 'a';
	d->d = true;

	std::cout << "address before serializing : ";
	std::cout << d << std::endl;

	raw = Serializer::serialize(d);
	d = Serializer::deserialize(raw);

	std::cout << "address after serializing  : ";
	std::cout << d << std::endl; // must be equal to the original Data address

	// deleting Data object to avoid memory leak
	delete d;
    return 0;
}