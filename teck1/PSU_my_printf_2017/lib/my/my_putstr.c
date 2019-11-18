/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my_putstr
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

int	my_putstr(char *str)
{
	int f = 0;

	while (str[f] != '\0') {
		my_putchar(str[f]);
		f = f + 1;
	}
	return (0);
}
