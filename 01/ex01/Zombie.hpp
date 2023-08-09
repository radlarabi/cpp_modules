/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:50 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:18:51 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
public:
    Zombie();
    Zombie(int N, std::string name);
    ~Zombie();
    void announce( void );
    void setName(std::string name);
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );