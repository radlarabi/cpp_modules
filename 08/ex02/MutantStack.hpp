/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:10:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/26 18:29:06 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){}
    MutantStack(MutantStack const &other){
        (void)other;
    }
    MutantStack operator = (MutantStack const &other){
        (void)other;
        return (*this);
    }
    ~MutantStack(){}
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }
    const_iterator begin() const{
        return this->c.begin();
    }
    const_iterator end() const{
        return this->c.end();
    }
};

#endif