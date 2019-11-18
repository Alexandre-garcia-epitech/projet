/*
** EPITECH PROJECT, 2018
** check_tetrimino
** File description:
** check_tetrimino
*/

#include "include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	check_argument(int ac)
{
	if (ac != 2) {
		write(2, "Wrong arguments\n", 16);
		return (1);
	}
	else
		return (0);
}

int	check_displayer(int fd, char *av)
{
	char	*str = malloc(sizeof(char) * 50);
	int	ret;
	int	validity;

	ret = read(fd, str, 50);
	if (ret != -1) {
		str[ret] = '\0';
		validity = check_str_t(str);
		if (validity == 1) {
			display_content(str, av, validity);
			free(str);
			return (1);
		}
		else
			display_content(str, av, validity);
		free(str);
		return (0);
	}
	else
		return (1);
}

void	display_content(char *str, char *av, int check)
{
	int	s_1 = (str[0] - 48);
	int	s_2 = (str[2] - 48);
	int	color = (str[4] - 48);
	int	x = 0;
	char	*title = malloc(sizeof(char) * 50);

	while (av[x] != '.') {
		title[x] = av[x];
		x = x + 1;
	}
	title[x] = '\0';
	x = 0;
	my_printf("Tetriminos :  Name %s :  ", title + 11);
	disp(str, av, check, title, s_1, s_2, color);
	free(title);
}

int	check_tetrimino(char *dest)
{
	int	check;
	int	fd;
	char	*str = dest;

	fd = open(str, O_RDONLY);
	if (fd == -1) {
		return (1);
	}
	check = check_displayer(fd, str);
	if (check == 1) {
		return (1);
	}
	return (0);
}
