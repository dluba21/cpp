#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
//#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(const std::string name, unsigned sign_grade, unsigned exec_grade);
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj_ref);
	virtual ~AForm();
	
	std::string			getName(void) const;
	bool				getIsSigned(void) const;
	unsigned			getSignGrade(void) const;
	unsigned			getExecGrade(void) const;
	void				setName(std::string name);
	void				setIsSigned(unsigned is_signed);
	void				setSignGrade(unsigned sign_grade);
	void				setExecGrade(unsigned exec_grade);
	
	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const;
	
	class				GradeTooHighException;
	class				GradeTooLowException;
	class				FormIsNotSignedException;
private:
	std::string			_name;
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
	FormIsNotSignedException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};


std::ostream &operator<<(std::ostream &os, const AForm &form);


#endif

