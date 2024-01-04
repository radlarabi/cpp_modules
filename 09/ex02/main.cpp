/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:06 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/04 15:28:25 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av){
    if(ac == 1)
    {
        std::cout << "Error Args" << std::endl;
        return 1;
    }
    
    std::vector<int> myVector;
    std::deque<int> myDeque;
    
    try{
        insertArgs(ac, av, myVector);
        insertArgs(ac, av, myDeque);
        
        display(myVector, "Before : ");
        
        clock_t VectorTimeStart = clock();
        myVector = mergeInsert(myVector);
        clock_t VectorTimeEnd = clock();
        
        clock_t DequeTimeStart = clock();
        myDeque = mergeInsert(myDeque);
        clock_t DequeTimeEnd = clock();


        display(myVector, "After : ");
    
        double VectorTimePerSec = static_cast<double>(VectorTimeEnd - VectorTimeStart) / CLOCKS_PER_SEC;
        double DequeTimePerSec = static_cast<double>(DequeTimeEnd - DequeTimeStart) / CLOCKS_PER_SEC;
        

        std::cout << "Time to process a range of " << myVector.size() << " elements with std::vector : " << VectorTimePerSec << std::endl;
        std::cout << "Time to process a range of " << myVector.size() << " elements with std::deque : " << DequeTimePerSec << std::endl;

    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}