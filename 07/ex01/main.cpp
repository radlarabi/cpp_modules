/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:04:30 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/12 20:30:39 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::string a[] = {"Lorem", "ipsum", "dolor", "sit", "amet", "tristique"};

    iter(a, 6, print<std::string>);

    std::cout << "-----------" << std::endl;

    int b[] = {123, 85, 913, 0, 305, 842};
    
    iter<int *, int>(b, 6, print<int>);
    
    return 0;
}
