/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:10:43 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/10 14:23:16 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data *d = new Data;
	uintptr_t raw = 0;

	d->a = 42;
	d->b = 22.5;
	d->c = 'a';
	d->d = true;

	std::cout << "d address before serializing : " << d << std::endl;
	std::cout << "raw address before serializing : " << raw << std::endl;

	raw = Serializer::serialize(d);
	d = Serializer::deserialize(raw);

	std::cout << "d address after serializing  : " << d << std::endl;
	std::cout << "raw address after serializing  : " << raw << std::endl;
	delete d;
    return 0;
}