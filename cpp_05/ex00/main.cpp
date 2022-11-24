#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat obj("Lol", 1);
	
	obj.decGrade();
	obj.incGrade();
	obj.incGrade();
	
	try
	{
		std::cout << "trying!\n" << std::endl;
		if (obj.getGrade() == 1)
			throw (Bureaucrat::GradeTooLowException());
		std::cout << "if is passed!\n" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "is cathed!\n" << e.what() << std::endl;
	}

	
}
