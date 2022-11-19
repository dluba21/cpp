#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ref_Fixed)
{
	std::cout << "Copy constructor called " << std::endl;
	_value = ref_Fixed.getRawBits();
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

Fixed &Fixed::operator = (const Fixed &ref_Fixed)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (&ref_Fixed == this) //? ref_Fixed == this
		return (*this);
	_value = ref_Fixed.getRawBits();
	return (*this);
}
