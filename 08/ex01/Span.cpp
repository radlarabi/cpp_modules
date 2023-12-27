/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:34:04 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/27 15:28:01 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span():N(0){

}

Span::Span(unsigned int _N) : N(_N){

}

Span::Span(Span const &other):N(other.N){
    this->span = other.span;
}

Span &Span::operator=(Span const &other){
    if (&other != this){
        this->span = other.span;
        this->N = other.N;
    }
    return (*this);
}

Span::~Span(){

}

void Span::addNumber(int _a){
    if (span.size() >= N)
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

    for (unsigned int i = 2; i < spanSorted.size(); i++)
    {
        int curentDistance  = spanSorted[i] - spanSorted[i - 1];
        distance = std::min(curentDistance, distance);
    }

    return distance;
}

void Span::insertAtOnce(int *a, unsigned int size){
    if (size > this->N)
        throw std::runtime_error("The span cannot insert this size !!");
    span.insert(span.begin(), a, a + size);
}
