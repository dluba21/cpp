#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name(""), _is_signed(false), _sign_grade(0), _exec_grade(0)
{
	std::cout << "AForm default constructor is called" << std::endl;
}

AForm::AForm(const std::string name, unsigned sign_grade, unsigned exec_grade): _name(name), _is_signed(false)
//хз ведь grades константы, как исключения проверить?!!!!!!!!!!!!!
{
	std::cout << "AForm default constructor is called" << std::endl;
	try
	{
		if (sign_grade <= 0 || exec_grade <= 0)
			throw (GradeTooHighException("AForm exception: inserted grade is too high!"));
		if (sign_grade > 150 || exec_grade > 150)
			throw (GradeTooLowException("AForm exception: inserted grade is too low!"));
		_sign_grade = sign_grade;
		_exec_grade = exec_grade;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

AForm::AForm(const AForm &obj): _name(obj._name), _is_signed(false), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	std::cout << "AForm copy constructor is called" << std::endl;
}

AForm &AForm::operator=(const AForm &obj_ref)
{
	std::cout << "AForm assignment constructor is called" << std::endl;
	_name = obj_ref._name;
	_is_signed = obj_ref._is_signed;
	_exec_grade = obj_ref._exec_grade;
	_sign_grade = obj_ref._sign_grade;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor is called" << std::endl;
}





AForm::GradeTooHighException::GradeTooHighException(): _msg("Grade is too high!")
{
}

AForm::GradeTooHighException::GradeTooHighException(const char *msg): _msg(msg)
{
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return (_msg);
}

AForm::GradeTooLowException::GradeTooLowException(): _msg("Grade is too low!")
{
}


AForm::GradeTooLowException::GradeTooLowException(const char *msg): _msg(msg)
{
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return (_msg);
}


const char *AForm::FormIsNotSignedException::what(void) const throw()
{
	return (_msg);
}

AForm::FormIsNotSignedException::FormIsNotSignedException(): _msg("Form exception: form is not signed!")
{
}

AForm::FormIsNotSignedException::FormIsNotSignedException(const char *msg): _msg(msg)
{
}







std::string	AForm::getName(void) const
{
	return (_name);
}

unsigned	AForm::getExecGrade(void) const
{
	return (_exec_grade);
}

bool	AForm::getIsSigned(void) const
{
	return (_is_signed);
}

unsigned	AForm::getSignGrade(void) const
{
	return (_sign_grade);
}


void	AForm::setName(const std::string name)
{
	_name = name;
}

void	AForm::setIsSigned(unsigned is_signed)
{
	_is_signed = is_signed;
}

void	AForm::setSignGrade(unsigned sign_grade)
{
	_sign_grade = sign_grade;
}

void	AForm::setExecGrade(unsigned exec_grade)
{
	_exec_grade = exec_grade;
}


void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > _sign_grade)
			throw (GradeTooLowException());
//		std::cout << _name << " is signed by " <<  bureaucrat.getName() << " successfully!" << std::endl;
		_is_signed = true;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
	return (os << "AForm name: " << AForm.getName() << ", grade_to_sign: " << AForm.getSignGrade() << ", AForm grade_to_exec: " << AForm.getExecGrade() << ", is_signed state: " << AForm.getIsSigned() << std::endl);
}

void	AForm::execute(Bureaucrat const &executor) const
{

	if (_is_signed == false)
		throw (FormIsNotSignedException());
	if (_exec_grade < executor.getGrade())
		throw (GradeTooLowException("Grade to execute is too low!"));
}
