##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	=	gcc -Wall -Werror

SRC	=	lib/my/my_putchar.c			\
		lib/my/my_put_nbr.c			\
		lib/my/my_printf.c			\
		lib/my/my_putstr.c			\
		lib/my/my_first_f.c			\
		lib/my/my_second_f.c			\
		lib/my/my_put_nbr_base.c		\
		lib/my/my_put_nbr_base_all.c		\
		lib/my/my_put_nbr_unsigned_int.c	\
		lib/my/my_third_f.c			\
		lib/my/my_S_octal.c			\
		lib/my/my_put_nbr_long_int.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) lib/my/
		cp $(NAME) lib/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME) lib/my/libmy.a
	rm -f $(NAME) lib/libmy.a

re:	fclean all
