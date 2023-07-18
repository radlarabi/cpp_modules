#include "Fixed.hpp"

const int Fixed::numFract = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    this->fp = fixed.fp;
    std::cout << "Copy constructor called" << std::endl;
}

void Fixed::operator=(const Fixed &fixed)
{
    this->fp = fixed.fp;
    std::cout << "Copy assignment operator called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fp;
}
void Fixed::setRawBits( int const raw ){
    this->fp = raw;
}