CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= c++ -g
RM			= rm -f
OBJ			= ${SRC:.cpp=.o}
SRC			= main.cpp
INC			= main.hpp

NAME		= Serialization

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

