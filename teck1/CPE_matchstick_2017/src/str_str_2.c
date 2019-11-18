/*
** EPITECH PROJECT, 2017
** str_param
** File description:
** str_param
*/

#include "../include/my.h"

int	my_getnbr(char const *str)
{
	long	cmp = 0;
	int	nb = 1;
	int	i = 0;

	while (str[i]) {
		(str[i] == '-') ? nb *= -1 : 0;
		if (str[i] >= '0' && str[i] <= '9') {
			while (str[i] >= '0' && str[i] <= '9') {
				cmp = (cmp * 10) + str[i] - '0';
				i++;
			}
			cmp *= nb;
			if (cmp <= 2147483647 && cmp >= -2147483648)
				return (cmp);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

int	my_putnbr(int nb)
{
	int	i = 1;
	int	op = nb;

	if (nb < 0) {
		write(1, "-", 1);
		nb = nb * (-1);
	}
	while (op >= 10) {
		op = op / 10;
		i = i * 10;
	}
	while (i != 0) {
		my_putchar((nb / i) + 48);
		nb = nb % i;
		i = i / 10;
	}
	return (0);
}
