/*
** EPITECH PROJECT, 2017
** put_nbr_base_all
** File description:
** put_nbr_base_all
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/mylist.h"

void	my_put_nbr_base_bin(unsigned int nbr)
{
	char *bin = "01";

	if (nbr > 1)
		my_put_nbr_base_bin(nbr / 2);
	my_put_nbr_base(nbr % 2, bin);
}

void	my_put_nbr_base_oct(unsigned int nbr)
{
	char *oct = "01234567";

	if (nbr > 7)
		my_put_nbr_base_oct(nbr / 8);
	my_put_nbr_base(nbr % 8, oct);
}

void	my_put_nbr_base_hex_caps(unsigned int nbr)
{
	char *hex_caps = "0123456789ABCDEF";

	if (nbr > 15)
		my_put_nbr_base_hex_caps(nbr / 16);
	my_put_nbr_base(nbr % 16, hex_caps);
}

void	my_put_nbr_base_hex(unsigned int nbr)
{
	char *hex = "0123456789abcdef";

	if (nbr > 15)
		my_put_nbr_base_hex(nbr / 16);
	my_put_nbr_base(nbr % 16, hex);
}
