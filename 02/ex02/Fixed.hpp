/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:04 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/09 21:55:25 by rlarabi          ###   ########.fr       */
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
    void operator =(const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed	operator+(Fixed fixed) ;
    // Fixed operator + (const Fixed& other);

    Fixed	operator/(Fixed fixed) ;
    Fixed	operator-(Fixed fixed) ;
    Fixed	operator*(Fixed fixed) ;

    Fixed operator--(int);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed &operator++(void);

    bool operator<(Fixed fixed);
    bool operator>(Fixed fixed);
    bool operator<=(Fixed fixed);
    bool operator>=(Fixed fixed);
    bool operator==(Fixed fixed);
    bool operator!=(Fixed fixed);

    static const Fixed &max(Fixed &a, Fixed const &b);
    static const Fixed &min(Fixed &a, Fixed const &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
};
std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
#endif