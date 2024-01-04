/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:09 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/04 15:28:48 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isDigit(char *av)
{
    int i = 0;
    while(av[i])
    {
        if (!isdigit(av[i]))
            return true;
        i++;
    }
    return false;
}
