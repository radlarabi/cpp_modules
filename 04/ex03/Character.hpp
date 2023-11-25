/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:58:23 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 00:50:08 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Struct.hpp"
#include <cstdio>

class Character : public ICharacter{
private:
    std::string name;
    AMateria *slots[4];
    Adrs *adrs;
public:
    Character();
    Character(std::string _name);
    Character(Character const &src);
    Character &operator = (Character const &src);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target); 
    void push(AMateria &adrs); 
};

// void push(Adrs* head, AMateria &adrs);
#endif