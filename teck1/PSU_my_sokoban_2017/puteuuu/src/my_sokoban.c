/*
** EPITECH PROJECT, 2017
** euytdfgh
** File description:
** qfklgfdg
*/


#include "./../include/my.h"

int	my_player(char *av, char *buffer, t_ct ct)
{
	ct.player = 0;
	ct.key = getch();
	while (buffer[ct.player] != 'P')
		ct.player = ct.player + 1;
	if (ct.key == KEY_RIGHT && buffer[ct.player + 1] != '#')
		key_right(&ct, buffer);
	if (ct.key == KEY_LEFT && buffer[ct.player - 1] != '#')
		key_left(&ct, buffer);
	if (ct.key == KEY_UP &&
	    buffer[ct.player - my_strlen(buffer)] != '#')
		key_up(&ct, buffer);
	if (ct.key == KEY_DOWN && buffer[ct.player + my_strlen(buffer)] != '#')
		key_down(&ct, buffer);
	if (ct.key == 32)
		key_reset(av, &ct, buffer);
	if (ct.key == 27)
		key_ESC(av, &ct, buffer);
	return (0);
}

int	my_affmap(char *av, char *buffer, t_ct ct)
{
	int *nbo;
	
	nbo = my_find_O(buffer, &ct);
	initscr();
	curs_set(0);
	keypad(stdscr, TRUE);
	while (1) {
		clear();
		mvprintw(0, 0, buffer);
		my_player(av, buffer, ct);
		my_check_O(buffer, nbo);
		refresh();
	}
	endwin();
	return (0);
}

int	my_checkmap(char *buffer)
{
	int i = 0;

	while (buffer[i] != '\0') {
		if (buffer[i] != '#' && buffer[i] != 'X' && buffer[i] != ' ' && buffer[i] != 'O'&& buffer[i] != 'P' && buffer[i] != '\n') {
			my_putstr("Map not available\n");
			return (84);
		}
		else
			i++;
	}
	return (*buffer);
}

int	my_sokoban(char *av)
{
	t_ct ct;
	char *buffer;
	
	if ((buffer = malloc(sizeof(char) * 4096)) == NULL)
		return (84);
	ct.fd = open(av, O_RDONLY);
	if (open(av, O_RDONLY) == -1)
		return (84);
	ct.ret = read(ct.fd, buffer, 4095);
	if (my_checkmap(buffer) == 84)
		return (84);
	my_affmap(av, buffer, ct);
	close(ct.fd);
	free(buffer);
	return (0);
}
