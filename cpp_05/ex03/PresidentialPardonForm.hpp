#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm(std::string target);
	virtual void		execute(Bureaucrat const &executor) const;
private:
	std::string	_target;
};


#endif

