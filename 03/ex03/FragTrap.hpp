/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:30:22 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 16:39:08 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
    FragTrap();
    FragTrap(const FragTrap &fragTrap);
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &fragTrap);
    void highFivesGuys(void);
    
};
#endif