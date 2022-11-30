#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum unique_forms
{
	presidential_pardon,
	robotomy_request,
	shrubbery_creation
};

class Intern
{
public:
	Intern(void);
	Intern(const Intern &obj);
	Intern &operator=(const Intern &obj_ref);
	~Intern();
	
	AForm	*makeForm(std::string form_name, std::string target);
	class FormNotExistException;
};

class Intern::FormNotExistException: public std::exception
{
public:
	FormNotExistException();
	const char *what() const throw();
private:
	const char	*_msg;
};

#endif
