/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:47:53 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/07 23:59:34 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac == 2)
        ScalarConverter::convert(av[1]);
    else
        std::cout << "The use : ./Converter <arg>" << std::endl;
    return 0;
}
