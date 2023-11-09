/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:19:53 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/09 20:34:44 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::numFract = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed(const float fp)
{
    setRawBits(std::roundf(fp * (1 << this->numFract)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int fp)
{
    setRawBits(fp << this->numFract);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(fixed.fp);
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &fixed)
{
    setRawBits(fixed.fp);
    std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream &operator << (std::ostream &out, Fixed const &fixed){
    out << fixed.toFloat();
    return out;
}
