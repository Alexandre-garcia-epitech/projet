/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "include/my.h"

int	main(int ac, char **av)
{
	t_struct *tmp = malloc(sizeof(t_struct));
	int ret;
	srandom(time(NULL));
	if (check_prog(ac, av) != -1) {
		tmp->size = my_getnbr(av[1]);
		tmp->limit = my_getnbr(av[2]);
		map_generator(tmp);
		complete_stick(tmp);
		display_map(tmp);
		if ((ret = loop_game(tmp)) == 1) {
			my_putstr("You lost, too bad...\n");
			return (2);
		} else if (ret == 2) {
			my_putstr("I lost... snif... but");
			my_putstr(" i'll get you next time!!\n");
			return (1);
		} else if (ret == -1) return (0);
	} else
		return (84);
	return (0);
}
