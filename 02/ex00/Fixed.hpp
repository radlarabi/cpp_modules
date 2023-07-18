#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int fp;
    static const int numFract;
public:
    Fixed ();
    Fixed (const Fixed &fixed);
    ~Fixed ();
    void operator =(const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif