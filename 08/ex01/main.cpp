/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:33:12 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/25 00:21:41 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(0);
        (void)sp;
        int a[] = {87,96,83,79,45,58,76,43,74,93,48,27};
        sp.insertAtOnce(a, 12);

        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    return 0;
}
