/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:07:23 by rlarabi           #+#    #+#             */
/*   Updated: 2023/06/07 18:28:13 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    print_upper(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
}
int    main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while(ac > i)
        {
            print_upper(av[i]);
            i++;   
        }
        std::cout << std::endl;
    }
    return 0;
}