/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:48:28 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/09 18:09:03 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}


ScalarConverter::ScalarConverter(ScalarConverter const &other){
    (void)other;   
}

ScalarConverter &ScalarConverter::operator = (ScalarConverter const &other){
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter(){}

void toChar(double value, char *endptr)
{
    if (!strcmp(endptr, "nan")|| (strlen(endptr) >= 1 && strcmp(endptr, "f")) || value > INT_MAX || value < INT_MIN)
        throw std::runtime_error("Char : Impossible");
    if (value < 33 || value > 126)
        throw std::runtime_error("Char : Non displayable");
    std::cout << "Char : " <<  static_cast<char>(value) << std::endl;
}

void toInt(double value, char *endptr)
{
    if ((strlen(endptr) >= 1 && strcmp(endptr, "f")) || value > INT_MAX || value < INT_MIN)
        throw std::runtime_error("Int : Impossible");
    std::cout << "Int : " <<  static_cast<int>(value) << std::endl;
}

void toFloat(double value, char *endptr)
{
    if ((strlen(endptr) >= 1 && strcmp(endptr, "f")) || value > FLT_MAX || value < -FLT_MIN)
        throw std::runtime_error("Float : Impossible");
    std::cout << "Float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void toDouble(double value, char *endptr)
{
    if ((strlen(endptr) >= 1 && strcmp(endptr, "f")) || value > DBL_MAX || value < -DBL_MIN)
        throw std::runtime_error("Double : Impossible");
    std::cout << "Double : " << std::fixed << std::setprecision(1) << value << std::endl;
}

void ScalarConverter::convert(std::string _type){
    char* endptr = NULL;
    double value = strtod(_type.c_str(), &endptr);
    
    try{
        toChar(value, endptr);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    try{
        toInt(value, endptr);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    try{
        toFloat(value, endptr);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    try{
        toDouble(value, endptr);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
}
