/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/08 22:29:05 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl()
{
}

Harl::~Harl()
{
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
    
    void (Harl::*funcPtr[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    std::string lvl[] = {
        "DEBUG",
        "INFO" ,
        "WARNING",
        "ERROR"
    };
    
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        if (lvl[i] == level)
            break;
    }
    switch (i)
    {
        case 0:
            (this->*funcPtr[0])();
        case 1:
            (this->*funcPtr[1])();
        case 2:
            (this->*funcPtr[2])();
        case 3:
            (this->*funcPtr[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    

}
