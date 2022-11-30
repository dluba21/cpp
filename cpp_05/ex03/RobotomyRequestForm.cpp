#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target)
{
	std::cout << "RobotomyRequestForm default constructor is called" << std::endl;
	setSignGrade(145);
	setExecGrade(137);
	setName("RobotomyRequestForm");
}

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout <<"*drilling noises*" << std::endl << _target << " has been robotomized successfully 50% of the time." << std::endl;
}

