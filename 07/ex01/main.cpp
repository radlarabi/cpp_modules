/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:04:30 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/12 20:07:17 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printString(std::string e)
{
    std::cout << "element : " << e << std::endl; 
}

void printInt(int e)
{
    std::cout << "element : " << e << std::endl; 
}

int main()
{
    std::string a[] = {"Lorem", "ipsum", "dolor", "sit", "amet", "tristique"};
    iter(a, 6, printString);

    std::cout << "-----------" << std::endl;

    int b[] = {123, 85, 913, 0, 305, 842};
    iter(b, 6, printInt);
    
    return 0;
}
