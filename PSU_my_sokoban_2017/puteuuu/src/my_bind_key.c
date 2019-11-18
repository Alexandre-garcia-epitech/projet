/*
** EPITECH PROJECT, 2017
** ddhekzjfhczejldhl
** File description:
** didozidozidozi
*/

#include "./../include/my.h"

void	key_reset(char *av, t_ct *ct, char *buffer)
{
	ct->fd = open(av, O_RDONLY);
	ct->ret = read(ct->fd, buffer, 4095);
}

void	key_ESC(void)
{
	endwin();
	exit(1);
}

void	key_up(t_ct *ct, char *buffer)
{
	if (buffer[ct->player - my_strlen(buffer)] == 'X') {
		if (buffer[ct->player - my_strlen(buffer) - my_strlen(buffer)] != '#' && buffer[ct->player - my_strlen(buffer) - my_strlen(buffer)] != 'X') {
			buffer[ct->player - my_strlen(buffer)] = buffer[ct->player];
			buffer[ct->player - my_strlen(buffer) - my_strlen(buffer)] = 'X';
			buffer[ct->player] = ' ';
		}
	}
	else {
	    buffer[ct->player - my_strlen(buffer)] = buffer[ct->player];
	    buffer[ct->player] = ' ';
	}
}

void	key_down(t_ct *ct, char *buffer)
{
	if (buffer[ct->player + my_strlen(buffer)] == 'X') {
		if (buffer[ct->player + my_strlen(buffer) + my_strlen(buffer)] != '#' && buffer[ct->player + my_strlen(buffer) + my_strlen(buffer)] != 'X') {
			buffer[ct->player + my_strlen(buffer)] = buffer[ct->player];
			buffer[ct->player + my_strlen(buffer) + my_strlen(buffer)] = 'X';
			buffer[ct->player] = ' ';
		}
	}
	else {
		buffer[ct->player + my_strlen(buffer)] = buffer[ct->player];
		buffer[ct->player] = ' ';
	}
}

void	key_left(t_ct *ct, char *buffer)
{
	if (buffer[ct->player - 1] == 'X') {
		if (buffer[ct->player - 2] != '#' && buffer[ct->player - 2] != 'X') {
			buffer[ct->player - 1] = buffer[ct->player];
			buffer[ct->player - 2] = 'X';
			buffer[ct->player] = ' ';
		}
	}
	else {
		buffer[ct->player - 1] = buffer[ct->player];
		buffer[ct->player] = ' ';
	}
}

void	key_right(t_ct *ct, char *buffer)
{
	if (buffer[ct->player + 1] == 'X') {
		if (buffer[ct->player + 2] != '#'&& buffer[ct->player + 2] != 'X') {
			buffer[ct->player + 1] = buffer[ct->player];
			buffer[ct->player + 2] = 'X';
			buffer[ct->player] = ' ';
		}
	}
	else {
		buffer[ct->player + 1] = buffer[ct->player];
		buffer[ct->player] = ' ';
	}
}
