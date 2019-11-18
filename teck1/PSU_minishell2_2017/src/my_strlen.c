/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** my_strlen
*/

#include "../include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

void	my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
}
