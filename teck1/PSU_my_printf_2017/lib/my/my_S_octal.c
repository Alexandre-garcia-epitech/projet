/*
** EPITECH PROJECT, 2017
** my_S_octal
** File description:
** my_S_octal
*/

#include "../../include/my.h"
#include <stdarg.h>

void	my_S_octal(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 31 && str[i] < 128)
			my_putchar(str[i]);
		else {
			my_putstr("\\0");
			if (str[i] < 8)
				my_putchar('0');
			my_put_nbr_base_oct(str[i]);
		}
		str++;
	}
}
