/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:34:04 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/26 18:07:18 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span():N(0){

}

Span::Span(const int _N):N(_N){
    if (N < 0)
        throw std::runtime_error("Cannot create span with negative size !!");
}

Span::Span(Span const &other):N(other.N){
    this->span = other.span;
}

Span &Span::operator=(Span const &other){
    if (&other != this){
        this->span = other.span;
    }
    return (*this);
}

Span::~Span(){

}

void Span::addNumber(int _a){
    if ((int)span.size() >= N)
        throw std::runtime_error("the list is full");
    (this->span).push_back(_a);
}

int Span::longestSpan(void){
    if(N <= 1)
        throw std::runtime_error("the size of the list must be more than 1 !!");

    std::vector<int > spanSorted = span;

    std::sort(spanSorted.begin(), spanSorted.end());

    return spanSorted[spanSorted.size() - 1] - spanSorted[0];
}

int Span::shortestSpan(void){
    if(N <= 1)
        throw std::runtime_error("the size of the list must be more than 1 !!");

    std::vector<int > spanSorted = span;

    std::sort(spanSorted.begin(), spanSorted.end());

    int distance  = spanSorted[1] - spanSorted[0];

    for (int i = 2; i < (int)spanSorted.size(); i++)
    {
        int curentDistance  = spanSorted[i] - spanSorted[i - 1];
        distance = std::min(curentDistance, distance);
    }

    return distance;
}

void Span::insertAtOnce(int *a, unsigned int size){
    if ((int)size > this->N)
        throw std::runtime_error("The span cannot insert this size !!");
    span.insert(span.begin(), a, a + size);
}
