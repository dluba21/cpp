CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= g++
RM			= rm -f
OBJ			= ${SRC:.cpp=.o}
SRC			= Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp 			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp main.cpp
INC			= Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp 		 			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
NAME		= AForm

${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

%.o:%.cpp ${INC}
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

clean:
					${RM} ${OBJ} rm *_shrubbery

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re


