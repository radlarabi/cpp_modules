/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/16 11:21:17 by rlarabi          ###   ########.fr       */
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
	clap.attack("2");
	clap.attack("3");
	clap.attack("4");
    clap.beRepaired(INT_MAX);
    clap.takeDamage(INT_MAX);
    return 0;
}
