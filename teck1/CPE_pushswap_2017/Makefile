##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

RM	=	rm -f

CC	=	gcc -Wall -Werror

SRC 	=	lib/my/my_params_to_list.c		\
		lib/my/my_putstr.c			\
		lib/my/my_putchar.c			\
		lib/my/my_put_nbr.c			\
		lib/my/my_firstf.c			\
		lib/my/my_put_nbr_base.c		\
		lib/my/my_put_nbr_base_all.c		\
		lib/my/my_secondf.c			\
		lib/my/my_thirdf.c			\
		lib/my/my_put_nbr_unsigned_int.c	\
		lib/my/my_printf.c			\
		lib/my/my_getnbr.c			\
		lib/my/push_swap.c

OBJ	=	$(SRC:.c=.o)

FLAG	=	-Linclude.lib/	

NAME 	=	push_swap

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME) $(FLAG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
