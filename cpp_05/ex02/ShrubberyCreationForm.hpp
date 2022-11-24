#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &obj_ref);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj_ref);
	~ShrubberyCreationForm();
	
	virtual void		execute(Bureaucrat const &executor);
private:
	std::string	_target;
};


#endif
