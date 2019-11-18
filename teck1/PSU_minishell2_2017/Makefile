##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	src/main.c		\
		src/check_exec_prog.c	\
		src/my_str_wordtab.c	\
		src/check_error.c	\
		src/my_strdupcat.c	\
		src/cd_function.c	\
		src/exit_function.c	\
		src/epur_str.c		\
		src/setenv_function.c	\
		src/my_str_isalpha.c	\
		src/get_next_line.c	\
		src/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
