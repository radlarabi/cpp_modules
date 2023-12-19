/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:30:43 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/19 17:20:16 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T &a, T &b){
    T t = b;
    b = a;
    a = t;
}

template <typename T>
T min(T &a, T &b){
    if (a > b)
        return b;
    return a;
}

template <typename T>
T max(T &a, T &b){
    if (a > b)
        return a;
    return b;
}

#endif