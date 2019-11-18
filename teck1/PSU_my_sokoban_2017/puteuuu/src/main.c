/*
** EPITECH PROJECT, 2017
** frfrfrrrf
** File description:
** frffrf
*/

#include "./../include/my.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (84);
	else
		my_sokoban(av[1]);
	if (av[1][0] == '-' && av[1][1] == 'h') {
		my_help();
		return (0);
	}
	else
		return (84);
}
