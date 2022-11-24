#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
//#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
public:
	virtual AForm();
	virtual AForm(const std::string &name, unsigned sign_grade, unsigned exec_grade);
	virtual AForm(const AForm &obj);
	virtual AForm &operator=(const AForm &obj_ref);
	~AForm();
	
	const std::string	&getName(void) const;
	bool				getIsSigned(void) const;
	unsigned		&getSignGrade(void) const;
	unsigned		&getExecGrade(void) const;
	
	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const & executor)

	class				GradeTooHighException;
	class				GradeTooLowException;
private:
	const std::string	_name;
	bool				_is_signed;
	unsigned			_sign_grade;
	unsigned			_exec_grade;
	
};

class AForm::GradeTooHighException: public std::exception
{
public:
	GradeTooHighException();
	GradeTooHighException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

class AForm::GradeTooLowException: public std::exception
{
public:
	GradeTooLowException();
	GradeTooLowException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

class AForm::FormIsNotSignedException: public std::exception
{
public:
	FormIsNotSignedException();
	const char *what() const throw();
private:
	const char	*_msg;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);


#endif

