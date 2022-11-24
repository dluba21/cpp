#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target)
{
	std::cout << "PresidentialPardonForm default constructor is called" << std::endl;
	_exec_grade = 137;
	_sign_grade = 145;
}



PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj_ref)
{
	std::cout << "PresidentialPardonForm copy constructor is called" << std::endl;
	*this = obj_ref;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &obj_ref)
{
	std::cout << "PresidentialPardonForm assignment constructor is called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

virtual void		PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	AForm::execute()
	
}

