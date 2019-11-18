/*
** EPITECH PROJECT, 2018
** get_extend
** File description:
** get_extend
*/

#include "include/my.h"

char	*get_extend(char *str)
{
	int x = 0;
	int y = 0;

	while (str[x] != '.')
		x = x + 1;
	while (str[x] != '\0') {
		str[y] = str[x];
		x = x + 1;
		y = y + 1;
	}
	str[y] = '\0';
	return (str);
}
