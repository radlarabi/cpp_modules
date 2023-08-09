/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:54 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:18:55 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie_Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie_Horde[i].setName(name);
    }
    return zombie_Horde;
}