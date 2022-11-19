CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= c++
RM			= rm -f
OBJ			= ${SRC:.cpp=.o}
SRC			= main.cpp ClapTrap.cpp
INC			= ClapTrap.hpp

NAME		= ClapTrap

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

