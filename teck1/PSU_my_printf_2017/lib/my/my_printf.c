/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"
#include <stdarg.h>

int	my_tab_flag(va_list ap, int j)
{
	int(*ptr[12])(va_list);

	ptr[0] = &my_c;
	ptr[1] = &my_s;
	ptr[2] = &my_i;
	ptr[3] = &my_b;
	ptr[4] = &my_o;
	ptr[5] = &my_X;
	ptr[6] = &my_x;
	ptr[7] = &my_d;
	ptr[8] = &my_modulo;
	ptr[9] = &my_u;
	ptr[10] = &my_p;
	ptr[11] = &my_S;
	(*ptr[j])(ap);
	return (0);
}

int	check_flag(char *str, va_list ap)
{
	char *flag = "csiboXxd%upS";

	int i = -1;
	int j = -1;

	while (str[++i]) {
		if (str[i] == '%') {
			while ((str[i + 1] != flag[++j]) || str[i + 1] == '\0') {
				if (j > 12) {
					my_putstr("%\n");
					return (84);
				}
			}
			my_tab_flag(ap, j);
			i += 1;
		}
		else
			my_putchar(str[i]);
		j = -1;
	}
	return (0);
}

int	my_printf(char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	check_flag(str, ap);
	va_end(ap);
	return(0);
}
