/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** my_str_isalpha
*/

#include "../include/my.h"

int	my_str_isalpha(char const *str)
{
	int i = 0;
	
	while (str[i] != '\0') {
		if (str[i] < 123 && str[i] > 96 || str[i] < 91 && str[i] > 64)
			i++;
		else if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
			
	}
	if (str[i] == '\0') 
		return (1);
}

int	is_alpha(char c)
{
	if (c < 123 && c > 96 || c < 91 && c > 64)
		return (1);
	else
		return (0);
}
