/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** my_sokoban
*/

#include "../../include/my.h"

char	*initmap(char *str1)
{
	int fd = open(str1, O_RDONLY);
	int a;
	char *str = malloc(sizeof(char) * 651);
	dprintf(2, "%d\n", fd); 
	if (fd == -1) {
		free(str);
		return (NULL);
	}
	a = read(fd, str, 650);
	str[a] = '\0';
	return (str);
}

int	map(char *str1)
{
	char *str = initmap(str1);
	int c;
	WINDOW *window;
	
	initscr();
	cbreak();
	noecho();
	curs_set(0);
	window = newwin(1920, 1080, 0, 0);
	keypad(window, TRUE);
	wprintw(window, "%s", str);
	wrefresh(window);
        while ((c = wgetch(window)) != 27) {
		wrefresh(window);
	}
	endwin();
	free(str);
	return (0);
}

void	config(char *str1)
{
	int player;

	if (str1[player - my_strlen(str1)] == 'X') {
		if (str1[player - my_strlen(str1) - my_strlen(str1)] != '#' && str1[player - my_strlen(str1) - my_strlen(str1)] != 'X') {
			str1[player - my_strlen(str1)] = str1[player];
			str1[player - my_strlen(str1) - my_strlen(str1)] = 'X';
			str1[player] = ' ';
		}
	}
	else {
		str1[player - my_strlen(str1)] = str1[player];
		str1[player] = ' ';
	}
}

void	config_2(char *str1)
{
	if (str1[player + my_strlen(str1)] == 'X') {
		if (str1[player + my_strlen(str1) + my_strlen(str1)] != '#' && str1[player + my_strlen(str1) + my_strlen(str1)] != 'X') {
			str1[player + my_strlen(str1)] = str1[player];
			str1[player + my_strlen(str1) + my_strlen(str1)] = 'X';
			str1[player] = ' ';
		}
	}
	else {
		str1[player + my_strlen(str1)] = str1[player];
		str1[player] = ' ';
	}
}

void	config_3(char *str1)
{
	if (str1[player - 1] == 'X') {
		if (str1[player - 2] != '#' && str1[player - 2] != 'X') {
			str1[player - 1] = str1[player];
			str1[player - 2] = 'X';
			str1[player] = ' ';
		}
	}
	else {
		str1[player - 1] = str1[player];
		str1[player] = ' ';
	}
}
