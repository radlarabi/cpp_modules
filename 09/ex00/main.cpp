/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:06:46 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 15:06:10 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    
    if (ac == 2)
    {
        try{
            open_file(av);
        }
        catch(std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}