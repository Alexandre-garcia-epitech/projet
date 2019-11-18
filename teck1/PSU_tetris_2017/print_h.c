/*
** EPITECH PROJECT, 2018
** print_h
** File description:
** print_h
*/

#include "include/my.h"

void	print_h(char **av)
{
	int fd = open("help.txt", O_RDONLY);
	char *str = malloc(sizeof(char) * 801);
	int ret;

	ret = read(fd, str, 801);
	str[ret] = '\0';
	my_printf("Usage: %s [options]\n", av[0]);
	my_printf(str);
	free(str);
}
