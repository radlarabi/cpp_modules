/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:11 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/11 01:17:03 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c){
    Fixed area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
    if (area < 0)
        return (area / 2) * -1;
    return (area / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const o){
    
    Fixed areaABC = area(a, b, c);
    
    Fixed areaOBC = area(o, b, c);
    
    Fixed areaOAC = area(a ,o, c);
    
    Fixed areaOAB = area(a ,b, o);

    if (areaABC == 0 || areaOBC == 0 || areaOAC == 0 || areaOAB == 0)
        return false;
    if ((areaOBC + areaOAC + areaOAB == areaABC))
        return true;
    return false;
}