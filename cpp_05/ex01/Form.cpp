#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name(""), _is_signed(false), _sign_grade(0), _exec_grade(0)
{
	std::cout << "Form default constructor is called" << std::endl;
}

Form::Form(const std::string &name, const unsigned sign_grade, const unsigned exec_grade): _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
//хз ведь grades константы, как исключения проверить?!!!!!!!!!!!!!
{
	std::cout << "Form default constructor is called" << std::endl;
	try
	{
		if (sign_grade <= 0 || exec_grade <= 0)
			throw (GradeTooHighException("Form exception: inserted grade is too high!"));
		if (sign_grade > 150 || exec_grade > 150)
			throw (GradeTooLowException("Form exception: inserted grade is too low!"));
//		_sign_grade = sign_grade;
//		_exec_grade = exec_grade;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(const Form &obj): _name(obj._name), _is_signed(false), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	std::cout << "Form copy constructor is called" << std::endl;
}

Form &Form::operator=(const Form &obj_ref)
{
	std::cout << "Form assignment constructor is called" << std::endl;
	_is_signed = obj_ref._is_signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor is called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException(): _msg("Grade is too high!")
{
	std::cout << "GradeTooHighException default constructor is called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException(const char *msg): _msg(msg)
{
	std::cout << "GradeTooHighException default string constructor is called" << std::endl;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return (_msg);
}

Form::GradeTooLowException::GradeTooLowException(): _msg("Grade is too low!")
{
	std::cout << "GradeTooLowException default constructor is called" << std::endl;
}


Form::GradeTooLowException::GradeTooLowException(const char *msg): _msg(msg)
{
	std::cout << "GradeTooLowException default string constructor is called" << std::endl;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return (_msg);
}

const std::string	&Form::getName(void) const
{
	return (_name);
}

const unsigned	&Form::getExecGrade(void) const
{
	return (_exec_grade);
}

bool	Form::getIsSigned(void) const
{
	return (_is_signed);
}

const unsigned	&Form::getSignGrade(void) const
{
	return (_sign_grade);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > _sign_grade)
			throw (GradeTooLowException());
		_is_signed = true;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	return (os << "Form name: " << form.getName() << ", grade_to_sign: " << form.getSignGrade() << ", form grade_to_exec: " << form.getExecGrade() << ", is_signed state: " << form.getIsSigned() << std::endl);
}
