/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** my_getnbr
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

int	my_getnbr(char const *str)
{
	int i = 0;
	int c = 0;
	int h = 0;
	
	while (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			h = h + 1;
		
	}
	while (str[i] >= '0' && str[i] <= '9') {
		if (str[i] >= '0' && str[i] <= '9') {
			c = c * 10;
			c = c + (str[i] - '0');
		}
		i = i + 1;
	}
	if ((h % 2) > 0)
		c = c * (-1);
	if (c >= 214783647 || c <= -2147483648)
		return (0);
	return (c);
}
