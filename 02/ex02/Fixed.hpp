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