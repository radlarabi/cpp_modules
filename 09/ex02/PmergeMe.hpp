/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:18:29 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/05 19:03:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cstring>

bool isDigit(char *av);


template <typename T>
void display(T arr, const char *a){
    typename T::iterator it = arr.begin();
    std::cout << a ;
    while(it != arr.end())
    {
        std::cout << *it << " " ;
        it++;
    }
    std::cout << std::endl;
}

template <typename T>
void insertArgs(int ac, char **av, T &arr){
    
    for (int i = 1; i < ac; i++)
    {
        if (std::atoi(av[i]) < 0)
            throw std::runtime_error("Invalide args : using negative numbers !!");
        
        if (isDigit(av[i]) || !strcmp(av[i], ""))
            throw std::runtime_error("Invalide args : using NON integers !!");

        arr.push_back(std::atoi(av[i]));
    }
         
}

template <typename T>
void merge(T &arr, T &right, T &left){

    int rSize = right.size();
    int lSize = left.size();


    int i = 0, j = 0, k = 0;
    
    while(i < rSize && j < lSize){
        if (right[i] < left[j])
        {
            arr[k] = right[i];
            i++;
        }
        else{
            arr[k] = left[j];
            j++;
        }
        k++;
    }

    while (i < rSize)
    {
        arr[k] = right[i];
        k++;
        i++;
    }

    while (j < lSize)
    {
        arr[k] = left[j];
        k++;
        j++;
    }
} 
  
template <typename T>
void mergeSort(T &arr){
    int size = arr.size();
    if (size < 2)
        return ;

    T right, left;
    
    int mid = size / 2;

    for (int i = 0; i < mid; i++)
        right.push_back(arr[i]);
    for (int i = mid; i < size; i++)
        left.push_back(arr[i]);
    
    mergeSort(right);
    mergeSort(left);
    
    merge(arr, right, left);
}

template <typename T>
void InsertInLeft(T &left, T &right){
    typename T::iterator itS = right.begin();
    
    while(itS != right.end()){
        typename T::iterator position = lower_bound(left.begin(), left.end(), *itS);
        left.insert(position, *itS);
        itS++;
    }
}

template <typename T>
T mergeInsert(T &a){
    T left;
    T right;
    unsigned int i = 0;

    while(i < a.size()){
        if (i + 1 < a.size()){
            left.push_back(std::max(a[i], a[i + 1]));
            right.push_back(std::min(a[i], a[i + 1]));
            i += 2;
        }
        else
            right.push_back(a[i++]);
    }
    mergeSort(a);
    InsertInLeft(left, right);
    return a;
}
#endif