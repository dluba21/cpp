#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"




int main()
{
	Intern intern;
	AForm* rrf;
	
	
	
	
//	std::cout << *rrf << std::endl;
//	Bureaucrat bureaucrat_1("Ivan", 1);
//	Bureaucrat bureaucrat_2("Nachalnik", 130);

//		rrf = intern.makeForm("kek", "lol");
	rrf = intern.makeForm("presidential pardon", "lol");
//		std::cout << "kek" << std::endl;
	std::cout << *rrf << std::endl;
		//хз почему выводится кек(вроде бросаю throw в интерне, то есть код не должен идти дальше, но не робит)

//	(void)rrf;
	delete rrf;
//
////	AForm	form("Default", 130, 3);
//
//	PresidentialPardonForm president_form("target_president");
//	RobotomyRequestForm robot_form("target_robot");
//	ShrubberyCreationForm shrub_form("target_shrab");
////
////	std::cout << robot_form;
////	robot_form.beSigned(bureaucrat_2);
//	bureaucrat_1.signForm(robot_form);
//	bureaucrat_2.executeForm(robot_form);
//
//	bureaucrat_1.signForm(president_form);
//	bureaucrat_2.executeForm(president_form);
//
////	bureaucrat_1.signForm(shrub_form);
////	bureaucrat_2.executeForm(shrub_form);
////
//	bureaucrat_2.signForm(shrub_form);
//	bureaucrat_2.executeForm(shrub_form);
//	std::cout << form;
//	std::cout << robot_form;
	
	
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
