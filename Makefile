SRCS = // METTRE LES SRCS ICI


OBJS = ${SRCS:.c=.o}

BOBJS = ${BONUS:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CREATE = ar rcs

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}				

${NAME}: ${OBJS}
		@echo "Creating the lib for printf wih the .o files..."
		${CREATE} ${NAME} ${OBJS}

run:	all
		@echo "Compiling and running the files..."
		${CC} ${CFLAGS} -I. -L. -lft
		

bonus:	${OBJS} ${BOBJS}
		@echo "Creating the lib printf wih the .o bonus files..."
		${CREATE} ${NAME} ${OBJS} ${BOBJS}
		@touch bonus

all:	${NAME}

clean:
		${RM} ${OBJS} ${BOBJS} ${NAME} bonus

fclean: clean
		${RM} ${OBJS} ${BOBJS} ${NAME} bonus

re: 	fclean run

.PHONY: all clean fclean re run bonus
