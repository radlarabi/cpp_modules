/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:23 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/23 14:48:03 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
unsigned int dateToInt(std::string date){
    char *end1;
    std::string year, month, day;
    std::istringstream splitString(date);
    
    std::getline(splitString, year, '-');
    std::getline(splitString, month, '-');
    std::getline(splitString, day, '-');
	std::string key = year + month + day;
	unsigned long k = std::strtod(key.c_str(), &end1);
    return k;
}

float valueToFloat(std::string date){
    char *end1;
	float k = std::strtof(date.c_str(), &end1);
    return k;
}

void loadData(std::ifstream &input, std::map<unsigned int , float> &myMap)
{
    std::string line;
    getline(input, line);
    while (getline(input, line))
    {
        std::istringstream split(line);
        std::string date;
        std::string value;
        getline(split, date, ',');
        split >> value;
        myMap[dateToInt(line)] = valueToFloat(value);
    }
}

std::map<unsigned int , float> insertDB(){
    std::map<unsigned int , float> myMap;
    std::ifstream input("data.csv");
    std::string line;
    if (input.is_open()){
        loadData(input, myMap);
    }
    else
        throw std::runtime_error("cannot open data.csv !!");    
    return myMap;
}
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

}

void checkValue(std::string value){
    if (value.length() > 4 || std::atoi(value.c_str()) > 1000)
        throw std::runtime_error("Error: too large a number.");
    if (std::atoi(value.c_str()) < 0)
        throw std::runtime_error("Error: not a positive number.");
}

void printValue(std::string a, std::string b, std::map<unsigned int , float> &myMap){
    unsigned int date = dateToInt(a);
    float value = valueToFloat(b);
    if (myMap.find(date) != myMap.end())
        std::cout << a << " => " << b << " = " << value * myMap[date] << std::endl;
    else
    {
        std::map<unsigned int, float>::iterator it = myMap.lower_bound(date);
		it--;
        std::cout << a << " => " << b << " = " << value * it->second  << std::endl;
    }
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

    std::map<unsigned int , float> myMap = insertDB();

    try{
        checkDate(a);
        checkValue(b);
        printValue(a, b, myMap);
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