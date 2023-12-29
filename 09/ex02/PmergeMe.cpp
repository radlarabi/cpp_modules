/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:09 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 17:24:00 by rlarabi          ###   ########.fr       */
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

void insertArgs(int ac, char **av, std::vector<int> &arr){
    
    for (int i = 1; i < ac; i++)
    {
        if (std::atoi(av[i]) < 0)
            throw std::runtime_error("Invalide args : using negative numbers !!");
        
        if (isDigit(av[i]))
            throw std::runtime_error("Invalide args : using NON integers !!");

        
        arr.push_back(std::atoi(av[i]));
    }
    
}
