/*
** EPITECH PROJECT, 2018
** my_str_str
** File description:
** my_str_str
*/

#include "../include/my.h"

int	stick_in_line(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i]) {
		if (str[i] == '|')
			count++;
		i++;
	}
	return (count);
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

void	my_puterror(char *str)
{
	int	i = -1;

	while (str[++i])
		write(2, &str[i], 1);
}

int	my_strlen(char *str, char c)
{
	int	i = 0;

	while (str[i] && str[i] != c)
		i++;
	return (i);
}
