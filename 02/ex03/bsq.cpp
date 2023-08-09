/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:11 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 14:51:34 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const o){
    
    double areaABC = 0.5 * std::abs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));

    double areaOBC = 0.5 * std::abs(o.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - o.getY()) + c.getX() * (o.getY() - b.getY()));

    double areaOAC = 0.5 * std::abs(a.getX() * (o.getY() - c.getY()) + o.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - o.getY()));

    double areaOAB = 0.5 * std::abs(a.getX() * (b.getY() - o.getY()) + b.getX() * (o.getY() - a.getY()) + o.getX() * (a.getY() - b.getY()));

    if ((areaOBC + areaOAC + areaOAB == areaABC) && areaABC && areaOBC && areaOAC && areaOAB)
        return true;
    return false;
}