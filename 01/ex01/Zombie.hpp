/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:50 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/08 14:15:50 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void announce( void );
    void setName(std::string name);
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif