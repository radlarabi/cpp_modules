/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:22:38 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/15 21:10:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    std::vector<int> numbers;
    for (int i = 0; i < 10; i++)
        numbers.push_back(i);

    std::vector<int>::iterator it = easyFind(numbers, 1);
    if (it != numbers.end())
        std::cout << std::distance(numbers.begin(), it) << std::endl;
    else
        std::cout << "not found !!" << std::endl;
        
    return 0;
}