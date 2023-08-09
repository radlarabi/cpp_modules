/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:39 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:18:40 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void randomChump( std::string name );
Zombie* newZombie( std::string name );