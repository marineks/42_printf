# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/02 14:46:18 by msanjuan          #+#    #+#              #
#    Updated: 2021/08/04 04:21:18 by msanjuan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# /* ~~~~~~ SOURCES ~~~~~~ */
SRCS_DIR= srcs
SRCS = $(filter-out ${SRCS_DIR}/main.c, $(wildcard ${SRCS_DIR}/*.c))
OBJS = ${SRCS:.c=.o}

# /* ~~~~~~~ INCLUDING LIBFT ~~~~~~~ */
LIBFT_DIR = libft
LIBFT_MAKE = Makefile
LIBFT_PATH = ${LIBFT_DIR}/libft.a

# /* ~~~~~~~ COMPILING INFO ~~~~~~~ */
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ${LIBFT_DIR}

# /* ~~~~~~~ OTHER ~~~~~~~ */
NAME = libftprintf.a
CREATE_LIB = ar rcs
RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}	

all:	${NAME}

${NAME}: ${OBJS} ${LIBFT_DIR}
		@echo "Creating the lib for printf wih the .o files..."
		${CREATE_LIB} ${NAME} ${OBJS}
		

${LIBFT_DIR}: 
				@echo "Calling make in sub directory libft..."
				@make -s -C ${LIBFT_DIR} -f ${LIBFT_MAKE} all
				@cp ${LIBFT_PATH} ${NAME}

run_tests:	all
		@echo "Compiling and running the files..."
		${CC} ${CFLAGS} ${SRCS_DIR}/main.c -I. -L. -lftprintf
		./a.out

clean:
		${RM} ${OBJS} ${NAME} a.out
		make -C ${LIBFT_DIR} -f ${LIBFT_MAKE} clean

fclean: clean
		${RM} ${OBJS} ${NAME} a.out
		make -C ${LIBFT_DIR} -f ${LIBFT_MAKE} clean

re: 	fclean all

.PHONY: all clean fclean re run_tests make ${LIBFT_DIR}
