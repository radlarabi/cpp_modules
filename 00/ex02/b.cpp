#include <iostream>
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>
int main()
{
    std::time_t currentTime = std::time(nullptr);

    std::tm* localTime = std::localtime(&currentTime);
    std::cout << std::setfill('0') << "[" 
        << localTime->tm_year + 1900 
        <<  std::setw(2) << localTime->tm_mon + 1
        << std::setw(2) << localTime->tm_mday
        << "_" 
        << std::setw(2) << localTime->tm_hour
        << std::setw(2) << localTime->tm_min 
        << std::setw(2) << localTime->tm_sec << "]\n";
    return 0;
}