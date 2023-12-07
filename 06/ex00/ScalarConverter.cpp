/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:48:28 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/08 00:14:16 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){   
}

void ScalarConverter::convert(std::string _type)
{
    try {
        int intValue = std::atoi(_type.c_str());
        std::cout << "Int : " << intValue << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Int : Impossible\n";
    } catch (const std::out_of_range& e) {
        std::cerr << "Int : Impossible\n";
    }
}