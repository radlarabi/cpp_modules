/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:09 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/03 16:03:35 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void display(std::vector<int> arr, const char *a){
    std::vector<int>::iterator it = arr.begin();
    std::cout << a ;
    while(it != arr.end())
    {
        std::cout << *it << " " ;
        it++;
    }
    std::cout << std::endl;
}

bool isDigit(char *av)
{
    int i = 0;
    while(av[i])
    {
        if (!isdigit(av[i]))
            return true;
        i++;
    }
    return false;
}

void insertArgs(int ac, char **av, std::vector<int> &arr){
    
    for (int i = 1; i < ac; i++)
    {
        if (std::atoi(av[i]) < 0)
            throw std::runtime_error("Invalide args : using negative numbers !!");
        
        if (isDigit(av[i]) || !strcmp(av[i], ""))
            throw std::runtime_error("Invalide args : using NON integers !!");

        arr.push_back(std::atoi(av[i]));
    }
         
}

void merge(std::vector<int> &a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    std::vector<int> LeftArray , RightArray ;
      
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
  
void mergeSort(std::vector<int> &a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);
    } 
}  

void InsertInLeft(std::vector<int> &left, std::vector<int> &right){
    std::vector<int>::iterator itS = right.begin();
    
    while(itS != right.end()){
        std::vector<int>::iterator position = lower_bound(left.begin(), left.end(), *itS);
        left.insert(position, *itS);
        itS++;
    }
}

std::vector<int> mergeInsert(std::vector<int> &a){
    std::vector<int> left;
    std::vector<int> right;
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
