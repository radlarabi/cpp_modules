/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:43 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/08 12:51:23 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie *hordeZombie = zombieHorde(1, "Foo");
    if(!hordeZombie)
        return 1;
    for (size_t i = 0; i < 5; i++)
    {
        hordeZombie[i].announce();
    }
    delete[] hordeZombie;
    return 0;
}