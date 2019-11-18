/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "../../include/my.h"

int	main(int ac, char **av)
{
	int i;
	
	if(ac != 2)
		return (84);
	else

	if (ac > 1) {
		if(av[1][0] == '-' && av[1][1] == 'h')
			my_sokoban_h();
		else
			i = map(av[1]);
	}
	if (i == 1)
		return (84);

}
