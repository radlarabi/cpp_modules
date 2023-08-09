/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:57 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:18:58 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "adress of brain is : " << &brain << std::endl;
    std::cout << "adress of stringPTR is : " << &stringPTR << std::endl;
    std::cout << "adress of stringREF is : " << &stringREF << std::endl << std::endl << std::endl;

    std::cout << "value of brain is : " << brain << std::endl;
    std::cout << "value of stringPTR is : " << stringPTR << std::endl;
    std::cout << "value of stringREF is : " << stringREF << std::endl;

    return 0;
}