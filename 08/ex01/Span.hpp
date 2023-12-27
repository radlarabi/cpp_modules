/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:25:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/27 14:20:24 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> span;
public:
    Span();
    Span(unsigned int _N);
    Span(Span const &other);
    Span &operator = (Span const &other);
    ~Span();
    void addNumber(int _a);
    void insertAtOnce(int *a, unsigned int size);
    int shortestSpan();
    int longestSpan();
};
#endif
