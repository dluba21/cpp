#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor is called" << std::endl;
	_exec_grade = 5;
	_sign_grade = 25;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj_ref)
{
	std::cout << "ShrubberyCreationForm copy constructor is called" << std::endl;
	*this = obj_ref;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj_ref)
{
	std::cout << "ShrubberyCreationForm assignment constructor is called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}

