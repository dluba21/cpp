#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int inumber);
	Fixed(const float fnumber);
	Fixed(const Fixed &refFixed);
	Fixed& operator=(const Fixed& ref_Fixed);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt( void ) const;
	float	toFloat( void ) const;
private:
	int					_value;
	static const int 	_fract_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed& ref_Fixed);
#endif
