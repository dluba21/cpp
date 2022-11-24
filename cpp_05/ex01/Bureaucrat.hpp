#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, unsigned grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj_ref);
	~Bureaucrat();
	
	const std::string	&getName(void) const;
	unsigned			getGrade(void) const;
	void				incGrade(void);
	void				decGrade(void);
	
	class				GradeTooHighException;
	class				GradeTooLowException;
	
	void				signForm(Form &form);
private:
	const std::string	_name;
	unsigned			_grade;
};

class Bureaucrat::GradeTooHighException: public std::exception
{
public:
	GradeTooHighException();
	GradeTooHighException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

class Bureaucrat::GradeTooLowException: public std::exception
{
public:
	GradeTooLowException();
	GradeTooLowException(const char *msg);
	const char *what() const throw();
private:
	const char	*_msg;
};

#endif
