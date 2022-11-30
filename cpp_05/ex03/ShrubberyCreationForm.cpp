#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor is called" << std::endl;
	setSignGrade(25);
	setExecGrade(5);
	setName("ShrubberyCreationForm");

}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream	myfile;
	try
	{
		myfile.open(_target + "_shrubbery", std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (!myfile.is_open())
			throw (-1);
		myfile << "                    _-_       \n    /~~   ~~\\    \n    /~~         ~~\\ \n   {               }\n    \\  _-     -_  / \n      ~  \\\\ //  ~   \n   _- -   | | _- _  \n     _ -  | |   -_  \n         // \\\\       " << std::endl;
	}
	catch (int e)
	{
		std::cerr << "File is not opened" << std::endl;
	}
	myfile.close();
}
