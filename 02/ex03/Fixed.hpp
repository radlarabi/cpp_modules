/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:16 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/11 00:36:15 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int fp;
    static const int numFract;
public:
    Fixed ();
    Fixed (const int fp);
    Fixed (const float fp);
    Fixed (const Fixed &fixed);
    ~Fixed ();
    void operator = (const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed	operator+(Fixed fixed);
    Fixed	operator-(Fixed fixed);
    Fixed	operator*(Fixed fixed);
    Fixed	operator/(Fixed fixed);

    bool    operator==(Fixed fixed);
    bool    operator!=(Fixed fixed);
    bool    operator<(Fixed fixed);

};
std::ostream &operator << (std::ostream &out, Fixed const &fixed);
#endif