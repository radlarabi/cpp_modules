/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:06 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/02 23:24:35 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av){
    if(ac == 1)
    {
        std::cout << "Error Args" << std::endl;
        return 1;
    }

    std::vector<int> arr;
    std::vector<int> arrSort;
    
    try{
        clock_t start = clock();

        insertArgs(ac, av, arr);
        display(arr, "Before : ");
        arr = mergeInsert(arr);
        display(arr, "After : ");
        
        clock_t end = clock();
        double vector_f_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        std::cout << "Timestamp: " << vector_f_time  << std::endl;
        
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}