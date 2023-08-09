/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:23 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 11:57:24 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const Point &p);
    Point(const float x, const float y);
    ~Point();
    Point& operator=( const Point &p );
    const Fixed getX(void) const;
    const Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif