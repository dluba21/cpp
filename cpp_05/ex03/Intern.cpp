#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor is called" << std::endl;
}

Intern::Intern(const Intern &obj_ref)
{
	std::cout << "Intern copy constructor is called" << std::endl;
	*this = obj_ref;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor is called" << std::endl;
}


Intern &Intern::operator=(const Intern &obj_ref)
{
	std::cout << "Intern assignment constructor is called" << std::endl;
	(void)obj_ref;
	return (*this);
}

AForm *Intern::makeForm(std::string form_name, std::string target)//&string
{
	int	i;
	std::string func_name_array[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	
	i = 0;
	while (i < 3 && form_name != func_name_array[i])
		++i;	
	try
	{
		switch (i)
		{
			case presidential_pardon:
				std::cout <<"Intern creates " << form_name << " to " << target << std::endl;
				return (new PresidentialPardonForm(target));
				break;
			case robotomy_request:
				std::cout <<"Intern creates " << form_name << " to " << target << std::endl;
				return (new RobotomyRequestForm(target));
				break;
			case shrubbery_creation:
				std::cout <<"Intern creates " << form_name << " to " << target << std::endl;
				return (new ShrubberyCreationForm(target));
				break;
			default:
				throw (FormNotExistException());
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (nullptr);
}

Intern::FormNotExistException::FormNotExistException(): _msg("Appropriate form doesn't exist!")
{
}


const char *Intern::FormNotExistException::what(void) const throw()
{
	return (_msg);
}
