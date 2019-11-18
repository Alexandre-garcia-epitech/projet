/*
** EPITECH PROJECT, 2017
** my_firstf
** File description:
** my_firstf
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/mylist.h"
#include <stdarg.h>

int	my_c(va_list ap)
{
	my_putchar(va_arg(ap, int));
	return (0);
}

int	my_s(va_list ap)
{
	my_putstr(va_arg(ap, char *));
	return (0);
}

int	my_i(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
	return (0);
}

int	my_b(va_list ap)
{
	my_put_nbr_base_bin(va_arg(ap, unsigned int));
	return (0);
}

int	my_o(va_list ap)
{
	my_put_nbr_base_oct(va_arg(ap, unsigned int));
	return (0);
}
