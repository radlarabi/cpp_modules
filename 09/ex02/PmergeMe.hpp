/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:18:29 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/03 16:27:46 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
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
void merge(T &a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    T LeftArray , RightArray ;
      
    for (int i = 0; i < n1; i++)    
        LeftArray.push_back(a[beg + i]);    
    for (int j = 0; j < n2; j++)    
        RightArray.push_back(a[mid + 1 + j]);    
      
    i = 0;  
    j = 0;  
    k = beg;   
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i < n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j < n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    
  
template <typename T>
void mergeSort(T &a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);
    } 
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
    mergeSort(left, 0, left.size() - 1);
    InsertInLeft(left, right);
    return left;
}
#endif