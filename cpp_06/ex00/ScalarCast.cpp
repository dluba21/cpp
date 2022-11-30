#include "ScalarCast.hpp"

ScalarCast::ScalarCast(std::string str): _t_flag(-1), _literal(str)
{
}

ScalarCast::ScalarCast(const ScalarCast &obj)
{
	*this = obj;
}

ScalarCast &ScalarCast::operator=(const ScalarCast &obj)
{
	this->_t_flag = obj._t_flag;
	this->_literal = obj._literal;
	return (*this);
}

ScalarCast::~ScalarCast()
{
}


void	ScalarCast::printChar(void)
{
	if (_t_flag == t_char)
		std::cout << "char : \'" << _literal << "\'" << std::endl;
	else if (_t_flag == t_nan)
		std::cout << "char : impossible" << std::endl;
	else
	{
		if ((int)std::atol(_literal.c_str()) > 255 || (int)std::atol(_literal.c_str()) < 0)
			std::cout << "char : overflow" << std::endl;
		else if (!std::isprint((int)std::atol(_literal.c_str())))
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char : \'" << (char)std::atoi(_literal.c_str()) << "\'" << std::endl;
	}
}

void	ScalarCast::printInt(void)
{
	std::string	str;

	if (_t_flag == t_nan)
		std::cout << "int : impossible" << std::endl;
	else
	{
		if (std::atol(_literal.c_str()) > INT_MAX || std::atol(_literal.c_str()) < INT_MIN)
			std::cout << "int : overflow" << std::endl;
		else if (_t_flag == t_char)
			std::cout << "int : " << (int)_literal[0] << std::endl;
		else
			std::cout << "int : " << std::atoi(_literal.c_str()) << std::endl;
	}
}

void	ScalarCast::printFloat(void)
{
	std::string	str;

	if (_t_flag == t_nan)
		std::cout << "float : nanf" << std::endl;
	else if (_t_flag == t_char)
		std::cout << "float : " << (int)_literal[0] << "f" << std::endl;
	else
	{
		std::cout << "float : " << std::atof(_literal.c_str());
		if (std::atof(_literal.c_str()) >= 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void	ScalarCast::printDouble(void)
{
	std::string	str;

	if (_t_flag == t_nan)
		std::cout << "double : nan" << std::endl;
	else if (_t_flag == t_char)
		std::cout << "double : " << (int)_literal[0] << std::endl;
	else
	{
		std::cout << "double : " << std::atof(_literal.c_str());
		if (std::atof(_literal.c_str()) >= 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

int			ScalarCast::getFlag(void) const
{
	return (_t_flag);
}

std::string			ScalarCast::getLiteral(void) const
{
	return (_literal);
}


void	ScalarCast::parseLiteral(void)
{
	int	len;
	int	i = 0;

	len = _literal.length();
	if (_literal == "nan" || _literal == "nanf" || _literal == "+inf" || _literal == "-inf")
	{
		_t_flag = t_nan;
		return ;
	}
	if (!isdigit(_literal[0]))
	{

		if (len != 1 && _literal[0] != '-' && _literal[0] != '+' && _literal[0] != '.')
			throw MyException("Error: identifed t_char has length > 1!");
		else if (len == 1)
		{
			_t_flag = t_char;
			return ;
		}
	}
	if (_literal[0] == '-' || _literal[0] == '+')
		++i;
	while (i < len)
	{
		if (_literal[i] == '.')
		{
			++i;

			while (i < len && std::isdigit(_literal[i])) //то есть если после точки
				i++;
			std::cout << _literal[i] << std::endl;
			if (i >= 2 && _literal[i] == 'f' && (i + 1 == len))
			{
				_t_flag = t_float;
				return ;
			}
			else if (i >= 2 && i == len) //.
			{
				_t_flag = t_double;
				return ;
			}
			else
				throw MyException("Parse error: expected double or float, but there are incorrect chars!");
		}
		else if (_literal[i] == 'f' && i + 1 == len) //последнее - случай "f"
		{
			_t_flag = t_float;
			return ;
		}
		else if (!std::isdigit(_literal[i]))
			throw MyException("Parse error: expected number, but there are incorrect chars!");
		i++;
	}
	if (len == i)
		_t_flag = t_int;
	else
		throw MyException("Parse error: expected int, but there are incorrect chars!");
}

void	ScalarCast::PrintResult(void)
{
	try
	{
		this->parseLiteral();
		this->printChar();
		this->printInt();
		this->printFloat();
		this->printDouble();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
	
ScalarCast::MyException::MyException(const char *msg): _msg(msg)
{
}

const char *ScalarCast::MyException::what(void) const throw()
{
	return (_msg);
}

