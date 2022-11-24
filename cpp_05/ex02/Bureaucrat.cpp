#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned grade): _name(name)
{
	std::cout << "Bureaucrat default constructor is called" << std::endl;
	try
	{
		if (grade <= 0)
			throw (GradeTooLowException("Constructor exception: inserted grade must be > 0"));
		if (grade > 150)
			throw (GradeTooHighException("Constructor exception: inserted grade must be <= 150"));
		_grade = grade;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj_ref)
{
	std::cout << "Bureaucrat copy constructor is called" << std::endl;
	*this = obj_ref;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj_ref)
{
	std::cout << "Bureaucrat assignment constructor is called" << std::endl;
	_grade = obj_ref._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor is called" << std::endl;
}

const std::string	&Bureaucrat::getName(void) const
{
	return (_name);
}
unsigned	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incGrade(void)
{
	try
	{
		if (_grade > 150)
			throw (GradeTooLowException("incGrade exception: constructor is used incorrectly"));
		if (_grade == 1)
			throw (GradeTooHighException());
		_grade--;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decGrade(void)
{
	try
	{
		if (_grade > 150)
			throw (GradeTooLowException("decGrade exception: constructor is used incorrectly"));
		if (_grade == 150)
			throw (GradeTooLowException());
		_grade++;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	return (os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(): _msg("Grade is too high!")
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *msg): _msg(msg)
{
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return (_msg);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(): _msg("Grade is too low!")
{
}


Bureaucrat::GradeTooLowException::GradeTooLowException(const char *msg): _msg(msg)
{
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return (_msg);
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned() == true)
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because his grade is too low" << std::endl;
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute();
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//словить исключение
	
}
