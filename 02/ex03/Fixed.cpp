/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:14 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/12 01:37:24 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::numFract = 8;

Fixed::Fixed()
{
    setRawBits(0);
}

Fixed::Fixed(const float fp)
{
    this->fp = roundf(fp * (1 << this->numFract));
}

Fixed::Fixed(const int fp)
{
    setRawBits(fp << this->numFract);
}

Fixed::Fixed(const Fixed &fixed)
{
    setRawBits(fixed.fp);
}

Fixed::~Fixed()
{
}

void Fixed::operator=(const Fixed &fixed){
    setRawBits(fixed.fp);
}

int Fixed::getRawBits(void) const{
    return this->fp;
}

void Fixed::setRawBits( int const raw ){
    this->fp = raw;
}

float Fixed::toFloat( void ) const{
    return (this->getRawBits()  / (float)( 1 << numFract ));
}

int Fixed::toInt( void ) const{
    return this->fp >> this->numFract;
}


// Arithmetic operations

Fixed	Fixed::operator+(Fixed fixed)
{
    this->fp += fixed.fp;
    return *this;
}

Fixed	Fixed::operator-(Fixed fixed){
    this->fp -= fixed.fp;
    return *this;
}  

Fixed	Fixed::operator*(const  Fixed& fixed)
{
    this->fp *= fixed.getRawBits();
    return *this;
}

Fixed	Fixed::operator/(Fixed fixed) {
    if (!fixed.getRawBits())
        return *this;
    this->fp /= fixed.getRawBits();
    return *this;
}

bool Fixed::operator==(Fixed fixed){
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed fixed){
    return this->getRawBits() != fixed.getRawBits();
}

bool Fixed::operator<(Fixed fixed){
    return this->getRawBits() < fixed.getRawBits();
}

std::ostream &operator << (std::ostream &out, Fixed const &fixed){
    std::cout << "fixed " << fixed.getRawBits() << std::endl;
    out << fixed.toFloat();
    return out;
}