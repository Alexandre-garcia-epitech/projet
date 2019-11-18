/*
** EPITECH PROJECT, 2018
** check_str
** File description:
** check_str
*/

#include "include/my.h"

int	check_str(char *str, char *check)
{
	int x = 0;
	int ret = 0;

	while (str[x] != '\0') {
		if (str[x] != check[x])
			ret = 1;
		x = x + 1;
	}
	return (ret);
}
