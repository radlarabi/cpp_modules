/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:18:29 by rlarabi           #+#    #+#             */
/*   Updated: 2024/01/02 23:20:12 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void insertArgs(int ac, char **av, std::vector<int> &arr);
std::vector<int> mergeInsert(std::vector<int> &a);  
void mergeSort(std::vector<int> &a, int beg, int end);  

void display(std::vector<int> arr, const char *a);
#endif