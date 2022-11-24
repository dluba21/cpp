#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
//#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string &name, const unsigned sign_grade, const unsigned exec_grade);
	Form(const Form &obj);
	Form &operator=(const Form &obj_ref);
	~Form();
	
	const std::string	&getName(void) const;
	bool				getIsSigned(void) const;
	const unsigned		&getSignGrade(void) const;
	const unsigned		&getExecGrade(void) const;
	
	void				beSigned(Bureaucrat &bureaucrat);

	class				GradeTooHighException;
	class				GradeTooLowException;
private:
	const std::string	_name;
	bool				_is_signed;
	const unsigned		_sign_grade;
	const unsigned		_exec_grade;
	
};

class Form::GradeTooHighException: public std::exception
{
public:
	GradeTooHighException();
	GradeTooHighException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

class Form::GradeTooLowException: public std::exception
{
public:
	GradeTooLowException();
	GradeTooLowException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif

