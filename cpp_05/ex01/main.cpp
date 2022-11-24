#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bureaucrat("Lol", 1);
	Form	form("kek", 151, 3);
	
	form.beSigned(bureaucrat);
	bureaucrat.signForm(form);
	std::cout << form;
//	obj.decGrade();
//	obj.incGrade();
//	obj.incGrade();
	
//	try
//	{
//		std::cout << "trying!\n" << std::endl;
//		if (obj.getGrade() == 1)
//			throw (Bureaucrat::GradeTooLowException());
//		std::cout << "if is passed!\n" << std::endl;
//	}
//	catch (std::exception & e)
//	{
//		std::cout << "is cathed!\n" << e.what() << std::endl;
//	}

	
}
