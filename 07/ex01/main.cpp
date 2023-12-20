/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:04:30 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/20 15:25:18 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int b[] = {0, 1, 2, 3, 4, 42, 42, 42, 42, 42};
    iter(b, 10, print<int>);

    /*
        std::cout << "-----------" << std::endl;
        std::string a[] = {"Lorem", "ipsum", "dolor", "sit", "amet", "tristique"};
        iter(a, 6, print<std::string>); 
    */
    return 0;
}
