/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/11 15:53:54 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

A::A(){}
B::B(){}
C::C(){}

A::~A(){}
B::~B(){}
C::~C(){}

Base * generate(void){
    std::srand(std::time(0));
    int randomIndex = rand() % 3;
    switch(randomIndex)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return new A();
}

void identify(Base* p){
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "class A" << std::endl;
    else if (b)
        std::cout << "class B" << std::endl;
    else if (c)
        std::cout << "class C" << std::endl;
    else
        std::cout << "Unkown type !!" << std::endl;
}

void identify(Base& p){
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "class A" << std::endl;
        (void)a;
    }
    catch(const std::exception &e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);    
            std::cout << "class B" << std::endl;
            (void)b;
        }
        catch(const std::exception &e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);    
                std::cout << "class C" << std::endl;
                (void)c;
            }
            catch(const std::exception &e)
            {
                std::cout << "Unkown type !" << std::endl; 
            }
        } 
    } 
}