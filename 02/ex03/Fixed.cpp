/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:14 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/10 23:45:05 by rlarabi          ###   ########.fr       */
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
    this->fp = std::roundf(fp * (1 << this->numFract));
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

float	Fixed::operator+(Fixed fixed) const{
    return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const{
    return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const{
    return (this->toFloat() * fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed){
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed fixed){
    return this->getRawBits() != fixed.getRawBits();
}