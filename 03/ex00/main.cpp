/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/18 21:06:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("1");

	clap.attack("2");
	clap.attack("3");
	clap.attack("4");
	clap.attack("5");
	clap.attack("6");
    clap.takeDamage(6);
    clap.beRepaired(10);
    clap.takeDamage(6);
    return 0;
}
