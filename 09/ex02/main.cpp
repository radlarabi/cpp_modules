/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:06 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 17:22:31 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void display(std::vector<int> arr){
    std::vector<int>::iterator it = arr.begin();
    while(it != arr.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
}

int main(int ac, char **av){
    if(ac == 1)
    {
        std::cout << "Error Args" << std::endl;
        return 1;
    }

    std::vector<int> arr;
    
    try{
        insertArgs(ac, av, arr);
        display(arr);
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}