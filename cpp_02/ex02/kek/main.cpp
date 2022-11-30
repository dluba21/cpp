#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const Fixed &a)
{
	_value = a.getRawBits();
}

Fixed::~Fixed()
{

}

Fixed & Fixed::operator=(Fixed const &a)
{
	if (this == &a)
		return (*this);
	_value = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat() const
{
	return ((float)_value / (1 << _fract_bits));
}

int Fixed::toInt(void) const
{
	return(_value >> 8);
}

Fixed::Fixed(const int num)
{
	_value = num << _fract_bits;
}

Fixed::Fixed(const float num)
{
	_value = roundf(num * (1 << _fract_bits));
}

bool Fixed::operator>(Fixed const & op) const
{
	return(_value > op._value);
}
bool Fixed::operator<(Fixed const & op) const
{
	 return(_value < op._value);
}
bool Fixed::operator>=(Fixed const & op) const
{
	 return(_value >= op._value);
}
bool Fixed::operator<=(Fixed const & op) const
{
	 return(_value <= op._value);
}
bool Fixed::operator==(Fixed const & op) const
{
	 return(_value == op._value);
}
bool Fixed::operator!=(Fixed const & op) const
{
	 return(_value != op._value);
}
Fixed Fixed::operator+(Fixed const & op) const
{
	Fixed	a;

	a.setRawBits(op._value + _value);
	return(a);
}
Fixed Fixed::operator-(Fixed const & op) const
{
	Fixed	a;

	a.setRawBits(op._value - _value);
	return(a);
}
Fixed Fixed::operator*(Fixed const & op) const
{
	Fixed a;

	a.setRawBits((op._value >> Fixed::_fract_bits) * _value);
	return(a);
}

Fixed Fixed::operator/(Fixed const & op) const
{
	Fixed	a;

	a.setRawBits((_value << Fixed::_fract_bits) * op._value);
	return(a);
}

Fixed &Fixed::operator++(void)
{
		std::cout << "b" << std::endl;
	setRawBits(++_value);
	return(*this);
}
Fixed Fixed::operator++(int)
{
	std::cout << "a" << std::endl;
	Fixed a(*this);
	setRawBits(++_value);
	return(a);
}
Fixed &Fixed::operator--(void)
{
	setRawBits(--_value);
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed a(*this);
	setRawBits(--_value);
	return(a);
}
Fixed &Fixed::min(Fixed &a,Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
Fixed const&Fixed::min(const Fixed &a,const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a,Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
Fixed const&Fixed::max(const Fixed &a,const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream & operator << (std::ostream &stream, Fixed const & number)
{
	stream << number.toFloat();
	return (stream);
}
