/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:19:34 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl()
{
    // std::cout << "contructor called" << std::endl;
}

Harl::~Harl()
{
    // std::cout << "destructor called" << std::endl;`
}

void Harl::debug(void){
    std::cout << "[ DEBUG ] \nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n\n";
}

void Harl::info(void){
    std::cout << "[ INFO ] \nI cannot believe adding extra bacon costs more money. You didn’t put \nenough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n\n";
}

void Harl::warning(void){
    std::cout << "[ WARNING ] \nI think I deserve to have some extra bacon for free. \n I’ve been coming for years whereas you started working here since last month." << "\n\n";
}

void Harl::error(void){
    std::cout << "[ ERROR ] \nThis is unacceptable! I want to speak to the manager now." << "\n\n";
}


void Harl::complain( std::string level ){
    Harl obj;
    int i;
    void (Harl::*funcPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string lvl[] = {"DEBUG", "INFO" , "WARNING", "ERROR"};
    for(i = 0; i < 4; i++)
    {
        if (lvl[i] == level)
            break;
    }
    switch (i)
    {
        case 0:
            (obj.*funcPtr[0])();
            i = 1;
        case 1:
            (obj.*funcPtr[1])();
            i = 2;
        case 2:
            (obj.*funcPtr[2])();
            i = 3;
        case 3:
            (obj.*funcPtr[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    

}