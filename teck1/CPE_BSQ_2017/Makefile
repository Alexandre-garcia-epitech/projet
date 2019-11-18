##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

RM	=	rm -f

CC	=	gcc -Wall -Werror

SRC 	=	lib/my/my_read.c	\
		lib/my/bsq.c		\
		lib/my/my_putstr.c

OBJ	=	$(SRC:.c=.o)

FLAG	=	-Linclude.lib/	

NAME 	=	bsq

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME) $(FLAG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
