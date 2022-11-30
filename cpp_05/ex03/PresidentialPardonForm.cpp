#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target)
{
	std::cout << "PresidentialPardonForm default constructor is called" << std::endl;
	setSignGrade(145);
	setExecGrade(137);
	setName("PresidentialPardonForm");

}


void		PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << _target <<  " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

