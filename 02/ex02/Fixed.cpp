#include "Fixed.hpp"

const int Fixed::numFract = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed(const float fp)
{
    this->fp = std::roundf(fp * (1 << this->numFract));
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int fp)
{
    setRawBits(fp << this->numFract);
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    setRawBits(fixed.fp);
}

Fixed::~Fixed()
{
    // std::cout << "destructor called" << std::endl;
}


void Fixed::operator=(const Fixed &fixed)
{
    setRawBits(fixed.fp);
    // std::cout << "Copy assignment operator called" << std::endl;
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


// operations

std::ostream &operator << (std::ostream &out, Fixed const &fixed){
    out << fixed.toFloat();
    return out;
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

float	Fixed::operator/(Fixed fixed) const{
    return (this->toFloat() / fixed.toFloat());
}

// pre-increment & pre-decrement

Fixed Fixed::operator++(void) {
    this->fp++;
    return (*this);
}
Fixed Fixed::operator--(void) {
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

// comparison operators  >=, <=, == and !=
 
Fixed Fixed::operator<(Fixed fixed)
{
    if (this->getRawBits() < fixed.getRawBits())
        return *this;
    else
        return fixed;
}

Fixed Fixed::operator>(Fixed fixed)
{
    if (this->getRawBits() > fixed.getRawBits())
        return *this;
    else
        return fixed;
}

Fixed Fixed::operator<=(Fixed fixed)
{
    if (this->getRawBits() <= fixed.getRawBits())
        return *this;
    else
        return fixed;
}

Fixed Fixed::operator>=(Fixed fixed)
{
    if (this->getRawBits() >= fixed.getRawBits())
        return *this;
    else
        return fixed;
}

// Fixed Fixed::operator==(Fixed fixed)
// {
//     if (this->getRawBits() == fixed.getRawBits())
//         return *this;
//     else
//         return fixed;
// }
// Fixed Fixed::operator!=(Fixed fixed)
// {
//     if (this->getRawBits() != fixed.getRawBits())
//         return *this;
//     else
//         return fixed;
// }

