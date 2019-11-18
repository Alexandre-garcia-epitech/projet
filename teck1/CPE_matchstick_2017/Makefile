##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	matchstick

CC	=	gcc -O3

RM	=	rm -f

SRCS	=	main.c			\
		src/str_str_1.c		\
		src/str_str_2.c		\
		src/check_prog.c	\
		src/generator_map.c	\
		src/game_loop.c		\
		src/ai_prog.c		\
		src/get_next_line.c	\
		src/str_tricks.c	\
		src/str_tricks_bis.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-I./include/

CFLAGS	+=	-W -Wall -Wextra -Werror -g3

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
