/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:23 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/07 12:45:55 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

unsigned int dateToInt(std::string date){
    char *end1;
    std::string year, month, day;
    std::istringstream splitString(date);
    
    std::getline(splitString, year, '-');
    std::getline(splitString, month, '-');
    splitString >> day;
	std::string key = year + month + day;
	unsigned int k = std::strtod(key.c_str(), &end1);
    return k;
}

bool isDigit(const char *av){
    int i = 0;
    while(av[i])
    {
        if(!isdigit(av[i]))
        {
            if (i != 0 && av[i] == '.' && isdigit(av[i + 1]))
            {
                i++;
                continue;
            }
            return false;
        }
        i++;
    }    
    return true;
}

float valueToFloat(std::string date){
    char *end1;
	float k = std::strtof(date.c_str(), &end1);
    return k;
}

std::string trim(std::string name){
    int i = 0;
    std::string res;
    while (name[i] && std::isspace(name[i])) {
        ++i;
    }
    res = name.substr(i);
    
    int end = res.length();
    while (end > 0 && std::isspace(res[end - 1])) {
        --end;
    }

    res = res.substr(0, end);
    return res;
}

void loadData(std::ifstream &input, std::map<unsigned int, float> &myMap)
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

bool haveSpace(std::string str){
    int i = -1;
    while (str[++i]) {
        if(std::isspace(str[i]))
            return true;
    }
    return false;
}

void checkDate(std::string date){
    std::string year, month, day;
    std::istringstream splitString(date);
    
    std::getline(splitString, year, '-');
    std::getline(splitString, month, '-');
    splitString >> day;
    
    if(haveSpace(date))
        throw std::runtime_error("Error: bad input => " + date);

    if (year.length() != 4 || std::atoi(year.c_str()) <= 0 || std::atoi(year.c_str()) < 2009 || std::atoi(year.c_str()) > 2022)
        throw std::runtime_error("Error: bad input => " + date);

    if (month.length() != 2 || std::atoi(month.c_str()) <= 0 || std::atoi(month.c_str()) > 12)
        throw std::runtime_error("Error: bad input => " + date);
    
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
    
    int m = atoi(month.c_str());
    if ((m == 4 || m == 7 || m == 9 || m == 11) && std::atoi(day.c_str()) > 30)
            throw std::runtime_error("Error: bad input => " + date);
        
}

void checkValue(std::string value){
    if (value.length() > 4 || std::atoi(value.c_str()) > 1000)
        throw std::runtime_error("Error: too large a number.");

    if (std::atoi(value.c_str()) < 0)
        throw std::runtime_error("Error: not a positive number.");
    
    if (!isDigit(value.c_str()) || value == "")
        throw std::runtime_error("Error: not a number.");
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

void count_pipes(std::string line){
    int i = 0;
    int count  = 0;
    while(line[i])
    {
        if (line[i] == '|')
            count++;
        i++;
    }
    if (count != 1)
        throw std::runtime_error("Error: bad input => " + line);
}

void parseLine(std::string line){
    std::istringstream splitString(line);
    
    std::string date;
    std::string value;

    std::getline(splitString , date, '|');
    splitString >> value;

    std::map<unsigned int , float> myMap = insertDB();

    try{
        count_pipes(line);
        checkDate(trim(date));
        checkValue(trim(value));
        printValue(trim(date), trim(value), myMap);
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    
}

void checkHeader(std::string line)
{
    count_pipes(line);
    std::istringstream splitString(line);
    std::string value;
    std::string date;
    
    std::getline(splitString , date, '|');
    splitString >> value;
    if (date != "date" && value != "value")
        throw std::runtime_error("Invalid header !");
}

void open_file(char **av){
    std::string line;
    std::string fileName = av[1];
    std::ifstream input(fileName);

    if (!input.is_open()){
        std::cerr << "cannot open " << av[1] << std::endl;
        return ;
    }
    
    while(std::getline(input, line)){
        if(trim(line) == "")
            continue;
        checkHeader(trim(line));
        break;
    }
    
    while (std::getline(input, line)){
        if(trim(line) == "")
            continue;
        parseLine(line);
    }
}