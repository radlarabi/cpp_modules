/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:19 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 14:50:11 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    Point a(0.0, 0.0);
    Point b(1.0, 0.0);
    Point c(0.0, 1.0);
    Point point(0.5, 0.5);

    bool inside = bsp(a, b, c, point);

    if (inside) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }

    return 0;
}