/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/11 14:52:04 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

A::A(){}
B::B(){}
C::C(){}

void A::print(){
    std::cout << "class A" << std::endl;
}
void B::print(){
    std::cout << "class B" << std::endl;
}
void C::print(){
    std::cout << "class C" << std::endl;
}

A::~A(){}
B::~B(){}
C::~C(){}

Base * generate(void){
    std::srand(std::time(0));
    
    Base* choices[] = {new A(), new B(), new C()};

    int size = sizeof(choices) / sizeof(choices[0]);

    int randomIndex = rand() % size;

    for (int i = 0; i < size; ++i) {
        if (i != randomIndex)
            delete choices[i];
    }
    choices[randomIndex]->print();
    return choices[randomIndex];
}