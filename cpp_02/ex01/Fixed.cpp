#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = a.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &a)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &a)
		return (*this);
	this->_value = a.getRawBits();
	return (*this);
}

std::ostream &operator << (std::ostream &os, const Fixed& ref_Fixed)
{
	return (os << ref_Fixed.toFloat());
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _fract_bits));
}
			
int Fixed::toInt(void) const
{
	return(_value >> _fract_bits);
}

Fixed::Fixed(const int num)
{
	_value = num << _fract_bits;
	std::cout << "Integer constructor called " << std::endl;
}

Fixed::Fixed(const float fnumber)
{
	_value = roundf(fnumber * (1 << _fract_bits));
	std::cout << "Float constructor called " << std::endl;
}
