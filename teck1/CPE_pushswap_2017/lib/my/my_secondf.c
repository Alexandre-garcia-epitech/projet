/*
** EPITECH PROJECT, 2017
** secondf
** File description:
** secondf
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

int	my_X(va_list ap)
{
	my_put_nbr_base_hex_caps(va_arg(ap, unsigned int));
	return (0);
}

int	my_x(va_list ap)
{
	my_put_nbr_base_hex(va_arg(ap, unsigned int));
	return (0);
}

int	my_d(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
	return (0);
}

int	my_modulo(va_list ap)
{
	va_arg(ap, int);
	my_putchar('%');
	return (0);
}

int	my_u(va_list ap)
{
	my_put_nbr_unsigned_int(va_arg(ap, unsigned int));
	return (0);
}
