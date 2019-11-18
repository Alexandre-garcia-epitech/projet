##
## EPITECH PROJECT, 2018
## makefile_gen
## File description:
## makefile_done
##

SRC_PREFIX=	src/

SRC_FILES=	main.c			\
		help.c			\
		my_bind_key.c		\
		my_motherfucking_o.c	\
		my_putchar.c		\
		my_putstr.c		\
		my_sokoban.c		\
		my_strlen.c

SRC=	$(addprefix $(SRC_PREFIX),$(SRC_FILES))

NAME=	my_sokoban

CC=	gcc -W -Wall -Wextra -Werror

RM=	rm -f

LIB=	-lncurses

OBJ=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	@echo -n "[ "
	@echo -n "OK"
	@echo -n " ] "
	@echo "Compiled succed"
	@$(CC) $(OBJ) -o $(NAME) $(LIB)
%.o:	%.c
	@echo -n "[ "
	@echo -n "OK"
	@echo -n " ] "
	@echo "Compiling" $<
	@$(CC) -o $@ -c $<

all:	$(NAME)

clean:
	@echo -n "[ "
	@echo -n "OK"
	@echo -n " ] "
	@echo "Removing OBJ files ..."
	@$(RM) $(OBJ)

fclean:	clean
	@echo -n "[ "
	@echo -n "OK"
	@echo -n " ] "
	@echo "Deleting binaries ..."
	@$(RM) $(NAME)

re:	fclean all

debug: clean
	valgrind ./$(NAME)
