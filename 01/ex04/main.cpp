/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   444.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:19 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/07 23:26:30 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string findAndReplace(std::string line, std::string find, std::string toReplace)
{
    if(find == toReplace || !find.length())
        return line;
    size_t position = line.find(find);
    while (position != std::string::npos)
    {
        line.erase(position, find.length());
        line.insert(position, toReplace);
        position = line.find(find);
    }
    return line;
}

int main(int ac, char **av)
{
    std::string line;
    std::string fileContent;
    if (ac == 4)
    {
        std::ifstream input(av[1]);
        std::string fileName = av[1];
        std::string find = av[2];
        std::string toReplace = av[3];
        if (input.is_open())
        {
            while (std::getline(input, line)) {
                fileContent += findAndReplace(line, find, toReplace);
                fileContent += "\n";
            }
            std::ofstream output(fileName + ".replace");
            if (output.is_open())
                output << fileContent << std::endl;
            else
            {
                std::cout << "error creating " << fileName + ".replace" << std::endl;
                return 1;
            }
            output.close();
        }
        else
        {
            std::cout << "error opening " << av[1] << std::endl;
            return 1;
        }
        input.close();
    }
    else
    {
        std::cout << "error argument " << std::endl;
        return 1;
    }
    return 0;
}

