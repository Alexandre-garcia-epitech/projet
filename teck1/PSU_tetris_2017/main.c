/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "include/my.h"

int	main(int ac, char **av)
{
	int check = 0;

	if (ac < 2)
		return (0);
	check = check_flag_main(ac, av);
	if (my_error(ac, av) == 84)
		return (84);
	if (check == 84)
		return (84);
	return (0);
}
