/*
** EPITECH PROJECT, 2018
** check_flag
** File description:
** check_flag
*/

#include "include/my.h"

int	check_flag_2(char **av, int x)
{
	int check;
	int d = 0;

	check = check_str("-p", av[x]);
	if (check == 0)
		the_world(av[(x + 1)]);
	check = check_str("-w", av[x]);
	if (check == 0)
		change_next_dir();
	check = check_str("--without-next", av[x]);
	if (check == 0)
		change_next_dir();
	if (d == 1)
		debug_menu();
	return (0);
}

int	check_flag_3(char **av, int x)
{
	int check;
	int d = 0;

	check = check_str("-l", av[x]);
	if (check == 0 && av[x + 1])
		change_dir_left(av[(x + 1)]);
	check = check_str("-r", av[x]);
	if (check == 0 && av[x + 1])
		change_dir_right(av[(x + 1)]);
	check = check_str("-t", av[x]);
	if (check == 0 && av[x + 1])
		change_turn_round(av[(x + 1)]);
	if (d == 1)
		debug_menu();
	return (0);
}

int	check_flag_4(char **av, int x)
{
	int check;
	int d = 0;

	check = check_str("-D", av[x]);
	if (check == 0 && av[x])
		d = 1;
	check = check_str("--debuf", av[x]);
	if (check == 0)
		d = 1;
	if (d == 1)
		debug_menu();
	return (0);
}

int	check_flag_1(char **av, int x)
{
	if (check_str("-L", av[x]) == 0) {
		if (!av[x + 1])
			return (84);
		else
			change_the_lvl(av[(x + 1)]);
	}
	if (check_str("-d", av[x]) == 0) {
		if (!av[x + 1])
			return (84);
		else
			change_file_tetris(av[(x + 1)]);
	}
	if (check_str("-q", av[x]) == 0) {
		if (!av[x + 1])
			return (84);
		else
			change_quit_prog(av[(x + 1)]);
	}
	return (0);
}

int	check_flag_main(int ac, char **av)
{
	static int x = 1;
	int check;

	for ( ; x <= (ac - 1) ; x++) {
		check = check_str("--help", av[x]);
		if (check == 0) {
			print_h(av);
			return (0);
		}
		if (check_flag_1(av, x) == 84)
			return (84);
		if (check_flag_2(av, x) == 84)
			return (84);
		if (check_flag_3(av, x) == 84)
			return (84);
		if (check_flag_4(av, x) == 84)
			return (84);
	}
	return (0);
}
