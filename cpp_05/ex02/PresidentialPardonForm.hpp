#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &obj_ref);
	PresidentialPardonForm &operator=(PresidentialPardonForm &obj_ref);
	~PresidentialPardonForm();
	
	virtual void		execute(Bureaucrat const &executor);
private:
	std::string	_target;
	
};


#endif

