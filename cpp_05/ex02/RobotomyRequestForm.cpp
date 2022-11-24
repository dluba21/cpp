#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target)
{
	std::cout << "RobotomyRequestForm default constructor is called" << std::endl;
	_exec_grade = 45;
	_sign_grade = 72;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj_ref)
{
	std::cout << "RobotomyRequestForm copy constructor is called" << std::endl;
	*this = obj_ref;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj_ref)
{
	std::cout << "RobotomyRequestForm assignment constructor is called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

