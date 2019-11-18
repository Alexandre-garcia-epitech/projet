/*
** EPITECH PROJECT, 2018
** error
** File description:
** error
*/

#include "include/my.h"

int	my_error(int ac, char **av)
{
	ac = ac;
	if (av[1][0] != '-') {
		my_printf("ERROR\n");
		return (84);
	} else if ((av[1][1] != '-') && (av[1][1] != 'p') &&
		(av[1][1] != 'w') && (av[1][1] != 'l') &&
		(av[1][1] != 'r') && (av[1][1] != 't') &&
		(av[1][1] != 'D') && (av[1][1] != 'L') &&
		(av[1][1] != 'd') && (av[1][1] != 'q')) {
		my_printf("ERROR\n");
		return (84);
	}
	if ((av[1][2] != 'l') && (av[1][2] != 'k') && (av[1][2] != 'm') &&
	(av[1][2] != 'w') && (av[1][2] != 'd') &&
	(av[1][2] != 'h') && (av[1][2] != '\0')) {
			my_printf("ERROR\n");
			return (84);
	}
	return (0);
}
