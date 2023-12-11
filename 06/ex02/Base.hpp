/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:34 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/11 15:12:23 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
class Base
{
public:
    virtual ~Base();
};


class A : public Base
{
public:
    A();
    ~A();
};

class B : public Base
{
public:
    B();
    ~B();
};

class C : public Base
{
public:
    C();
    ~C();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif