/*
** EPITECH PROJECT, 2018
** long int
** File description:
** long int
*/

#include "../../include/my.h"

int	display_long_int(long int fin, int nb, long int ch)
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

int	my_put_nbr_long_int(int nb)
{
	long int fin = 1;
	long int ch = 0;

	if (nb < 0) {
		nb = nb * (-1);
	}
	if (nb != 0) {
		while (fin <= nb) {
			fin = fin * 10;
		}
		fin = fin / 10;
	}
	display_long_int(fin, nb, ch);
	return (0);
}
