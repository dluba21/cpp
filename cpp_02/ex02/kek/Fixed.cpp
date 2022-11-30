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

bool Fixed::operator==(const Fixed& a)
{
	if (_value == a._value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& a)
{
	if (_value == a._value)
		return (false);
	return (true);
}

bool Fixed::operator>(const Fixed& a)
{
	if (_value > a._value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& a)
{
	if (_value == a._value)
		return (true);
	return (false);
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
//
//
//#include "Fixed.hpp"
//
//Fixed::Fixed()
//{
//	_value = 0;
//}
//
//Fixed::Fixed(const Fixed &a)
//{
//	_value = a.getRawBits();
//}
//
//Fixed::~Fixed()
//{
//
//}
//
//Fixed & Fixed::operator=(Fixed const &a)
//{
//	if (this == &a)
//		return (*this);
//	_value = a.getRawBits();
//	return (*this);
//}
//
//int Fixed::getRawBits(void) const
//{
//	return (_value);
//}
//
//void Fixed::setRawBits(int const raw)
//{
//	_value = raw;
//}
//
//float Fixed::toFloat() const
//{
//	std::cout << "flaot coinstructor is called" << std::endl;
//	return ((float)_value / (1 << _fract_bits));
//}
//
//int Fixed::toInt(void) const
//{
//	std::cout << "int coinstructor is called" << std::endl;
//	return(_value >> 8);
//}
//
//Fixed::Fixed(const int num)
//{
//	_value = num << _fract_bits;
//}
//
//Fixed::Fixed(const float num)
//{
//	_value = roundf(num * (1 << _fract_bits));
//}
//
//bool Fixed::operator>(Fixed const & op) const
//{
//	return(_value > op._value);
//}
//bool Fixed::operator<(Fixed const & op) const
//{
//	 return(_value < op._value);
//}
//bool Fixed::operator>=(Fixed const & op) const
//{
//	 return(_value >= op._value);
//}
//bool Fixed::operator<=(Fixed const & op) const
//{
//	 return(_value <= op._value);
//}
//bool Fixed::operator==(Fixed const & op) const
//{
//	 return(_value == op._value);
//}
//bool Fixed::operator!=(Fixed const & op) const
//{
//	 return(_value != op._value);
//}
//Fixed Fixed::operator+(Fixed const & op) const
//{
//	Fixed	a;
//
//	a.setRawBits(op._value + _value);
//	return(a);
//}
//Fixed Fixed::operator-(Fixed const & op) const
//{
//	Fixed	a;
//
//	a.setRawBits(op._value - _value);
//	return(a);
//}
//Fixed Fixed::operator*(Fixed const & op) const
//{
//	Fixed a;
//
//	a.setRawBits((op._value >> Fixed::_fract_bits) * _value);
//	return(a);
//}
//
//Fixed Fixed::operator/(Fixed const & op) const
//{
//	Fixed	a;
//
//	a.setRawBits((_value << Fixed::_fract_bits) * op._value);
//	return(a);
//}
//
//Fixed &Fixed::operator++(void)
//{
//	std::cout << "b" << std::endl;
//	setRawBits(++_value);
//	return(*this);
//}
//Fixed Fixed::operator++(int)
//{
//	std::cout << "a" << std::endl;
//	Fixed a(*this);
//	setRawBits(++_value);
//	return(a);
//}
//Fixed &Fixed::operator--(void)
//{
//	setRawBits(--_value);
//	return(*this);
//}
//Fixed Fixed::operator--(int)
//{
//	Fixed a(*this);
//	setRawBits(--_value);
//	return(a);
//}
//Fixed &Fixed::min(Fixed &a,Fixed &b)
//{
//	if (a < b)
//		return (a);
//	return (b);
//}
//static Fixed const&Fixed::min(const Fixed &a,const Fixed &b)
//{
//	if (a < b)
//		return (a);
//	return (b);
//}
//static Fixed &Fixed::max(Fixed &a,Fixed &b)
//{
//	if (a > b)
//		return (a);
//	return (b);
//}
//static Fixed const&Fixed::max(const Fixed &a,const Fixed &b)
//{
//	if (a > b)
//		return (a);
//	return (b);
//}
//
//static std::ostream & operator << (std::ostream &stream, Fixed const & number)
//{
//	stream << number.toFloat();
//	return (stream);
//}
//
////Fixed	Fixed::max(Fixed &a, Fixed &b)
////{
////	if (a.toFloat() >= b.toFloat())
////		return (a.toFloat());
////	else
////		return (b.toFloat());
////}
