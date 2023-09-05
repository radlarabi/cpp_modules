/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:19 by rlarabi           #+#    #+#             */
/*   Updated: 2023/09/02 13:51:12 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
int main(int ac, char **av)
{
    std::string line;
    std::string fileContent;
    if (ac == 3)
    {
        std::ifstream input(av[1]);
        std::ofstream output(av[2]);
        if (input.is_open())
        {
            while (std::getline(input, line)) {
                fileContent += line;
                fileContent += "\n";
            }
            if (output.is_open())
                output << fileContent << std::endl;
            else
            {
                std::cout << "error creating " << av[2] << std::endl;
                return 1;
            }
        }
        else
        {
            std::cout << "error opening " << av[1] << std::endl;
            return 1;
        }
        input.close();
        output.close();
    }
    else
    {
        std::cout << "error argument " << std::endl;
        return 1;
    }
    return 0;
}
