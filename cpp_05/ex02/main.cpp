#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"




int main()
{;
	AForm *ptr = nullptr;
	
//	ptr = new AForm("lol", 130, 3);
	(void)ptr;
//	AForm obj("lol", 130, 3);
//	delete ptr;
	Bureaucrat bureaucrat_1("Ivan", 1);
	Bureaucrat bureaucrat_2("Nachalnik", 130);
//
////	AForm	form("Default", 130, 3);
//
	PresidentialPardonForm president_form("target_president");
	RobotomyRequestForm robot_form("target_robot");
	ShrubberyCreationForm shrub_form("target_shrab");
////
////	std::cout << robot_form;
////	robot_form.beSigned(bureaucrat_2);
	bureaucrat_1.signForm(shrub_form);
	bureaucrat_2.executeForm(shrub_form);
//
//	bureaucrat_1.signForm(president_form);
//	bureaucrat_2.executeForm(president_form);
//
////	bureaucrat_1.signForm(shrub_form);
////	bureaucrat_2.executeForm(shrub_form);
////
//	bureaucrat_2.signForm(shrub_form);
//	bureaucrat_2.executeForm(shrub_form);
////	std::cout << form;
////	std::cout << robot_form;
	
	
//	bureaucrat.signForm(form);
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
