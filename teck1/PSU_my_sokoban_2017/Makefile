##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

RM	=	rm -f

CC	=	gcc -Wall -Werror -g3

SRC 	=	lib/my/my_putstr.c			\
		lib/my/my_putchar.c			\
		lib/my/my_put_nbr.c			\
		lib/my/my_firstf.c			\
		lib/my/my_put_nbr_base.c		\
		lib/my/my_put_nbr_base_all.c		\
		lib/my/my_secondf.c			\
		lib/my/my_thirdf.c			\
		lib/my/my_put_nbr_unsigned_int.c	\
		lib/my/my_printf.c			\
		lib/my/my_sokoban-h.c			\
		lib/my/main.c				\
		lib/my/my_sokoban.c

OBJ	=	$(SRC:.c=.o)

FLAG	=	-Linclude.lib/	

NAME 	=	my_sokoban

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME) $(FLAG) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
