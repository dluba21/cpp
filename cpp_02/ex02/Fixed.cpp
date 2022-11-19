#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const int inumber)
{
	_value = inumber << _fract_bits;
}

Fixed::Fixed(const float fnumber)
{
	_value = roundf(fnumber * (1 << _fract_bits));
}

Fixed::Fixed(const Fixed& ref_Fixed)
{
	_value = ref_Fixed.getRawBits();
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(int const number)
{
	_value = number << _fract_bits;
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

int Fixed::toInt( void ) const
{
	return (_value / (1 << _fract_bits));
}

float Fixed::toFloat( void ) const
{
	return ((float)_value / (1 << _fract_bits));
}

Fixed&	Fixed::operator=(const Fixed& ref_Fixed)
{
	if (&ref_Fixed	== this)
		return (*this);
	this->_value = ref_Fixed._value;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed& ref_Fixed)
{
	return (os << ref_Fixed.toFloat());
}


Fixed	operator + (Fixed &a, Fixed &b)
{
	return (Fixed(a.getRawBits() + b.getRawBits()));
}

Fixed	operator - (Fixed &a, Fixed &b)
{
	return (Fixed(a.getRawBits() - b.getRawBits()));
}

Fixed	Fixed::operator++()
{
	_value += 10;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;
	
	temp = *this;
	_value += 10;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	_value -= 10;
	return (temp);
}

Fixed	Fixed::operator--()
{
	_value -= 10;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& a)
{
	return (Fixed(a.toFloat() + this->toFloat()));
}

Fixed	Fixed::operator-(const Fixed& a)
{
	return (Fixed(a.toFloat() - this->toFloat()));
}


Fixed	Fixed::operator*(const Fixed& a)
{
	return (Fixed(a.toFloat() * this->toFloat()));
}


Fixed	Fixed::operator/(const Fixed& a)
{
	return (Fixed(a.toFloat() / this->toFloat()));
}


Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}


