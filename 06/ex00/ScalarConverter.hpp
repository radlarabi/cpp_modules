/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:41:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/08 00:12:08 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter{

public:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &other);
    ScalarConverter &operator = (ScalarConverter const &other);
    ~ScalarConverter();
    static void convert(std::string type);
};

#endif