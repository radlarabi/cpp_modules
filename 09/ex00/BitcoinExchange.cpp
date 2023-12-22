/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:23 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/22 22:30:27 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            return false;
        }
        return true;
    } else {
        return false;
    }
}

void checkDate(std::string date){
    std::string year, month, day;
    std::istringstream splitString(date);
    
    std::getline(splitString, year, '-');
    std::getline(splitString, month, '-');
    std::getline(splitString, day, '-');
    if (year.length() != 4 || std::atoi(year.c_str()) <= 0)
        throw std::runtime_error("Error: bad input => " + date);

    if (month.length() != 2 || std::atoi(month.c_str()) <= 0 || std::atoi(month.c_str()) > 12)
        throw std::runtime_error("Error: bad input => " + date);
    
    std::istringstream splitString1(day);
    std::getline(splitString1 , day, ' ');
    
    if (day.length() != 2 || std::atoi(day.c_str()) <= 0 || std::atoi(day.c_str()) > 31)
        throw std::runtime_error("Error: bad input => " + date);
    
    if (std::atoi(month.c_str()) == 2 && isLeapYear(std::atoi(year.c_str())))
    {
        if (std::atoi(day.c_str()) > 29)
            throw std::runtime_error("Error: bad input => " + date);
    }
    else
    {
        if (std::atoi(month.c_str()) == 2 &&  std::atoi(day.c_str()) > 28)
            throw std::runtime_error("Error: bad input => " + date);
    }
    char *end1;
	std::string key = year + month + day;
	unsigned long k = std::strtod(key.c_str(), &end1);
    std::cout << "key = " << key << " k = " << k << std::endl;
}

void checkValue(std::string value){
    if (value.length() > 4 || std::atoi(value.c_str()) > 1000)
        throw std::runtime_error("Error: too large a number.");
    if (std::atoi(value.c_str()) < 0)
        throw std::runtime_error("Error: not a positive number.");
}

void parseLine(std::string line){
    std::istringstream splitString(line);
    
    std::string a;
    std::string b;
    
    std::getline(splitString , a, '|');
    std::getline(splitString , b, '|');
    
    std::istringstream splitString1(b);
    std::getline(splitString1 , b, ' ');
    splitString1 >> b;
    try{
        checkDate(a);
        checkValue(b);
        std::cout << "Ok" << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    
}
void checkHeader(std::string line)
{
    if (line != "date | value")
        throw std::runtime_error("Invalid header !");
}
void open_file(char **av){
    std::string line;
    std::string fileName = av[1];
    std::ifstream input(fileName);

    if (!input.is_open())
        std::cerr << "cannot open " << av[1] << std::endl;
    std::getline(input, line);
    checkHeader(line);
    while (std::getline(input, line)){
        parseLine(line);
    }
}