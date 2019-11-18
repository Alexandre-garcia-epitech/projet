/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/mylist.h"
#include <stdarg.h>

int	my_tab_flag(va_list ap, int j)
{
	int(*ptr[11])(va_list);

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
	(*ptr[j])(ap);
	return (0);
}

int	check_flag(char *str, va_list ap)
{
	char *flag = "csiboXxd%up";
	int i = 0;
	int j = 0;

	while (str[i]) {
		if (str[i] == '%') {
			while ((str[i + 1] != flag[j]) || str[i + 1] == '\0') {
				if (j > 11)
					return (84);
				j++;
			}
			my_tab_flag(ap, j);
			i++;
		}
		else {
			if (str[i] == '\n') {
				my_putchar('\n');
			}
			else if ((str[i] >=33 && str[i] <= 126) && (str[i + 1] == ' '))
				my_putchar(' ');
			i++;
		}
		j = 0;
	}
	return(0);
}

int	my_printf(char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	check_flag(str, ap);
	va_end(ap);
	return(0);
}
