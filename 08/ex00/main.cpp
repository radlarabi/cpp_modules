/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:22:38 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/27 15:48:37 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    std::vector<int> numbers;
    for (int i = 9; i >= 0; i--)
        numbers.push_back(i);

    std::vector<int>::iterator it = easyFind(numbers, 2);
    if (it != numbers.end())
        std::cout << "the number is " << *it << std::endl;
    else
        std::cout << "not found !!" << std::endl;
        
    return 0;
}