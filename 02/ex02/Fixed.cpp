/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:01 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/09 22:00:23 by rlarabi          ###   ########.fr       */
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
    setRawBits(std::roundf(fp * (1 << this->numFract)));
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


// operations << 

std::ostream &operator << (std::ostream &out, Fixed const &fixed){
    out << fixed.toFloat();
    return out;
}

// Arithmetic operations

Fixed	Fixed::operator+(Fixed fixed){
    this->fp += fixed.fp;
    return *this;
}

Fixed	Fixed::operator-(Fixed fixed){
    this->fp -= fixed.fp;
    return *this;
}  

Fixed	Fixed::operator*(Fixed fixed)
{
    this->fp *= fixed.getRawBits() / (1 << numFract);
    return *this;
}

Fixed	Fixed::operator/(Fixed fixed) {
    if (!fixed.getRawBits())
        return *this;
    this->fp /= fixed.getRawBits() / (1 << numFract);
    return *this;
}

// pre-increment & pre-decrement

Fixed &Fixed::operator++(void) {
    this->fp++;
    return (*this);
}

Fixed &Fixed::operator--(void) {
    this->fp--;
    return (*this);
}

// post-increment & post-decrement

Fixed	Fixed::operator++(int){
    Fixed tmp = *this;
    this->fp++;
    return  tmp;
}

Fixed	Fixed::operator--(int){
    Fixed tmp = *this;
    this->fp--;
    return  tmp;
}

// comparison operators  <, > ,>=, <=, == and !=
 
bool Fixed::operator<(Fixed fixed){
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>(Fixed fixed){
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<=(Fixed fixed){
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator>=(Fixed fixed){
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator==(Fixed fixed){
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed fixed){
    return this->getRawBits() != fixed.getRawBits();
}

// Max and Min (const)

Fixed const &Fixed::max(Fixed &a, Fixed const &b){
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}

Fixed const &Fixed::min(Fixed &a, Fixed const &b){
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

// Max and Min  

Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}