/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:07 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:18:08 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main(void)
{
    PhoneBook phone;
    std::string input;
    welcome();
    while(1)
    {
        std::cout << "> ";
        if (std::getline(std::cin,input).eof())
            exit(1);
        if(!input.compare("ADD"))
            phone.add();
        else if(!input.compare("SEARCH"))
            phone.search();
        else if(!input.compare("EXIT"))
            return 0;
        else
            std::cout << "command not fount :(" << std::endl; 
    }
    return 0;
}