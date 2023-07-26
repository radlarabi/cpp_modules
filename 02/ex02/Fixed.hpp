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

    float	operator+(Fixed fixed) const;
    float	operator/(Fixed fixed) const;
    float	operator-(Fixed fixed) const;
    float	operator*(Fixed fixed) const;

    Fixed operator--(int);
    Fixed operator++(int);
    Fixed operator--(void);
    Fixed operator++(void);

    Fixed operator<(Fixed fixed);
    Fixed operator>(Fixed fixed);
    Fixed operator<=(Fixed fixed);
    Fixed operator>=(Fixed fixed);
};
std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
#endif