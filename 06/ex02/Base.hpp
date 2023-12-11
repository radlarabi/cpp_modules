/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:34 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/11 14:51:26 by rlarabi          ###   ########.fr       */
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
    virtual void print() = 0;
};


class A : public Base
{
public:
    A();
    ~A();
    void print();
};

class B : public Base
{
public:
    B();
    ~B();
    void print();
};

class C : public Base
{
public:
    C();
    ~C();
    void print();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif