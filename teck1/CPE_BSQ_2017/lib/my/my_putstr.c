/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my_putstr
*/

#include "../../include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_putstr(char const *str)
{
	int ff = 0;

	while (str[ff] != '\0') {
		my_putchar(str[ff]);
		ff = ff +1;
	}
	return (0);
}
