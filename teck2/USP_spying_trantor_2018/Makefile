##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	test_trantor.c		\
		spyingtrantor.c		\
		scnd_test_trantor.c	\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	drone_RC

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
