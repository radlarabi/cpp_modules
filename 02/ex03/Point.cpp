/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:21 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:57:12 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
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

const Fixed Point::getX(void) const{
    return x;
}

const Fixed Point::getY(void) const{
    return y;
}

// bool bsp( Point const a, Point const b, Point const c, Point const point){
    
// }