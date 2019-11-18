/*
** EPITECH PROJECT, 2017
** thirdf
** File description:
** thirdf
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/mylist.h"
#include <stdarg.h>

int	my_p(va_list ap)
{
	my_putchar('0');
	my_putchar('x');
	my_put_nbr_base_hex(va_arg(ap, unsigned int));
	return (0);
}
