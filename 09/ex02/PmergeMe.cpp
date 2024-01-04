/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:19:09 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/02 22:57:55 by rlarabi          ###   ########.fr       */
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
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
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

void InsertInBig(std::vector<int> &big, std::vector<int> &small){
    std::vector<int>::iterator itS = small.begin();
    
    while(itS != small.end()){
        std::vector<int>::iterator position = lower_bound(big.begin(), big.end(), *itS);

        if(position == big.end())
            position--;
        big.insert(position, *itS);
        itS++;
    }
}

std::vector<int> mergeInsert(std::vector<int> &a){
    std::vector<int> left;
    std::vector<int> right;
    unsigned int i = 0;

    while(i < a.size()){
        if (i + 1 < a.size()){
            if (a[i + 1] > a[i]){
                left.push_back(a[i + 1]);
                right.push_back(a[i]);
            }else{
                left.push_back(a[i]);
                right.push_back(a[i + 1]);
            }
            i += 2;
        }
        else
            right.push_back(a[i++]);
    }
    mergeSort(left, 0, left.size() - 1);
    InsertInBig(left, right);
    return left;
}
