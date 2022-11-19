#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed (const Fixed &refFixed);
	Fixed& operator=(const Fixed& ref_Fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					_value;
	static const int 	_fract_bits = 0;
};

//static const int	Fixed::_fract_bits = 0;
#endif
