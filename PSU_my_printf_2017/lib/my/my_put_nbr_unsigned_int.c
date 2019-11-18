/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

int	display_unsigned_int(unsigned int fin, int nb, unsigned int ch)
{
	while (fin >= 1) {
		ch = nb / fin;
		nb = nb - ch * fin;
		ch = ch + 48;
		my_putchar(ch);
		fin = fin / 10;
	}
	return (0);
}

int     my_put_nbr_unsigned_int(int nb)
{
	unsigned int fin = 1;
	unsigned int ch = 0;
	unsigned int yes = 0;

	yes = yes;
	if (nb < 0) {
		nb = nb * (-1);
	}
	yes = nb;
	if (nb != 0) {
		while (fin <= yes) {
			fin = fin * 10;
		}
		fin = fin / 10;
	}
	display_unsigned_int(fin, nb, ch);
	return (0);
}
