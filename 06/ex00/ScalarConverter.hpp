/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:41:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/09 14:25:26 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <climits>
#include <cfloat>
class ScalarConverter{
private:
    ScalarConverter();
    ~ScalarConverter();
public:
    ScalarConverter(ScalarConverter const &other);
    ScalarConverter &operator = (ScalarConverter const &other);
    static void convert(std::string type);
};

#endif