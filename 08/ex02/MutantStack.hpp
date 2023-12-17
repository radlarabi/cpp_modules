/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:10:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/17 18:33:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack
{
private:
    std::vector<T> stack;
public:
    MutantStack(){}
    MutantStack(MutantStack const &other){
        stack = other.stack;
    }
    MutantStack operator = (MutantStack const &other){
        if (this != &other)
            stack = other.stack;
        return (*this);
    }
    ~MutantStack(){}
    void push(T const & _a){
        stack.add_back(_a);
    }
    void pop(void){
        
    }
    int size(void){
        return 0;
    }
    int top(void){
        return 0;
    }
    T begin(){
        return 0;
    }
    T end(){
        return 0;
    }
};
#endif