/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:58:52 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/12 15:46:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void print(T a)
{
    std::cout << a << std::endl;
}

template<typename T, typename F>
void iter(T array, int len, void (*funcIter)(F))
{
    if (!array || len <= 0)
        return ;
    for (int i = 0; i < len; i++)
        funcIter(array[i]);
}

#endif