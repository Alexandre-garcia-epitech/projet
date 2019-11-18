##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	=	gcc -g3 -W -Wall -Werror

SRC	=	main.c				\
		debug.c				\
		print_h.c			\
		flag.c				\
		my_strcpy.c			\
		check_tetrimino.c		\
		check_str_tetrimino.c		\
		display_tetrimino.c		\
		change_option.c			\
		change_dir.c			\
		check_str.c			\
		get_extend.c			\
		my_strlen.c			\
		error.c				\
		disp.c

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) libmy.a -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
