#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm(std::string target);
	virtual void		execute(Bureaucrat const &executor) const;
private:
	std::string	_target;
};


#endif
