/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:03:10 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 15:33:19 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "Invalid Args !!" << std::endl;
        return 1;
    }
    try{
        calculeRpn(av[1]);
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}