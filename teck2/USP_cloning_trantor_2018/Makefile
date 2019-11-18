##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	trantor_v1

CC	=	gcc -lpthread

RM	=	rm -rf

SRC	=	./check_arg.c				\
		./client.c				\
		./cmd_drop.c				\
		./cmd_forward.c				\
		./cmd_inventory.c			\
		./cmd_left.c				\
		./cmd_look.c				\
		./cmd_right.c				\
		./cmd_tab.c				\
		./cmd_take.c				\
		./map.c					\
		./player.c				\
		./server.c				\
		./trantor_main.c			\
		util/array/array_display.c		\
		util/array/array_lenght.c		\
		util/array/array_malloc.c		\
		util/char/char_display.c		\
		util/error/error_display.c		\
		util/file/file_read.c			\
		util/int/int_to_string.c		\
		util/socket/socket_accept.c		\
		util/socket/socket_bind.c		\
		util/socket/socket_create.c		\
		util/socket/socket_listen.c		\
		util/string/string_compare.c		\
		util/string/string_concat.c		\
		util/string/string_display.c		\
		util/string/string_duplicate.c		\
		util/string/string_is_number.c		\
		util/string/string_lenght.c		\
		util/string/string_malloc.c		\
		util/string/string_remove.c		\
		util/string/string_to_int.c		\
		util/string/string_to_wordarray.c	\
		util/thread/thread_create.c		\
		util/thread/thread_exit.c

OBJ	=	$(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) *~
	$(RM) *#
	$(RM) *.o
	$(RM) */*~
	$(RM) */*#
	$(RM) */*.o
	$(RM) */*/*.o
	$(RM) */*/*#
	$(RM) */*/*~

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
