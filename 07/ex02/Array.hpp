/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:42:54 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/12 17:03:15 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <climits>
#include <ctime>
#include <cstdlib>
template<typename T>
class Array
{
private:
    T *arr;
    unsigned int n;
public:
    Array() : arr(NULL), n(0){
    }
    Array(int n){
        arr = new T[n];
    }
    Array(Array const &other){
        this->n = other.n;
        for (size_t i = 0; i < this->n; i++)
            this->arr[i] = other.arr[i];
    }
    T &operator [] (unsigned int n)
    {
        if (n > this->n)
            throw std::runtime_error("invalid index !");
        return arr[n];
    }
    Array& operator = (Array const &other){
        if (this != &other)
        {
            this->n = other.n;
            for (size_t i = 0; i < this->n; i++)
                this->arr[i] = other.arr[i];
        }
        return (*this);
    }
    ~Array(){
        delete arr;
    }
    unsigned int size(){
        return n;
    }
};
#endif