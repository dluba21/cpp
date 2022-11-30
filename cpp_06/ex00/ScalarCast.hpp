#ifndef SCALARCAST_HPP
#define SCALARCAST_HPP

#include <stdlib.h>
#include <iostream>
#include <limits>


enum Types
{
	t_char, //0
	t_int, //1
	t_float, //2
	t_double, //3
	t_nan //4
};

class ScalarCast
{
public:
	ScalarCast(std::string str);
	ScalarCast(const ScalarCast &obj);
	ScalarCast &operator=(const ScalarCast &obj);
	~ScalarCast();
	
	
	void		setFlag(int);
	int			getFlag(void) const;
	void		setLiteral(std::string);
	std::string	getLiteral(void) const;
	
	void		parseLiteral(void);
	void		printChar(void);
	void		printInt(void);
	void		printFloat(void);
	void		printDouble(void);
	void		PrintResult(void);
	
	class		MyException;
private:
	int			_t_flag;
	std::string	_literal;
};


class ScalarCast::MyException: public std::exception
{
public:
	MyException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

#endif
