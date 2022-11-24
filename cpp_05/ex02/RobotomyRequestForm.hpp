#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &obj_ref);
	RobotomyRequestForm &operator=(RobotomyRequestForm &obj_ref);
	~RobotomyRequestForm();
	
	virtual void		execute(Bureaucrat const &executor);
private:
	std::string	_target;
};


#endif
