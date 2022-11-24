CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= g++
RM			= rm -f
OBJ			= ${SRC:.cpp=.o}
SRC			= Bureaucrat.cpp Form.cpp main.cpp
INC			= Bureaucrat.hpp Form.hpp
NAME		= Form

${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

%.o:%.cpp ${INC}
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

clean:
					${RM} ${OBJ}

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re


