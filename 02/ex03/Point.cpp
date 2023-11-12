/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:21 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/12 01:30:43 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
}

Point::~Point(){
}

Point::Point(const float _x, const float _y) : x(_x), y(_y){
}

Point::Point(const Point &p) : x(p.getX()), y(p.getY()){
}

Point &Point::operator=(const Point &p) {
    (Fixed) x = p.getX();
    (Fixed) y = p.getY();
    return *this;
}

Fixed Point::getX(void) const{
    return x;
}

Fixed Point::getY(void) const{
    return y;
}
