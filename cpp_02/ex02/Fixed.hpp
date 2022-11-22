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
	Fixed (const Fixed &refFixed);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int	toInt( void ) const;
	float	toFloat( void ) const;
	Fixed&	operator=(const Fixed& ref_Fixed);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
	Fixed operator+(const Fixed& a);
	Fixed operator-(const Fixed& a);
	Fixed operator*(const Fixed& a);
	Fixed operator/(const Fixed& a);
	bool operator==(const Fixed& a);
	bool operator!=(const Fixed& a);
	bool operator>(const Fixed& a);
	bool operator<(const Fixed& a);
	bool operator>=(const Fixed& a);
	bool operator<=(const Fixed& a);


	
	static Fixed max(Fixed &a, Fixed &b);
	static Fixed max(const Fixed &a, const Fixed &b);
	static Fixed min(Fixed &a, Fixed &b);
	static Fixed min(const Fixed &a, const Fixed &b);
private:
	int					_value;
	static const int 	_fract_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed& ref_Fixed);

#endif
