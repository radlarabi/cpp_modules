/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:04:55 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/09 22:18:12 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERRIALIZER_HPP
#define SERRIALIZER_HPP
#include <iostream>

typedef struct data
{
    int a;
    double b;
    char c;
    bool d;
} Data;

class Serializer
{
private:
    Serializer();
    ~Serializer();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif