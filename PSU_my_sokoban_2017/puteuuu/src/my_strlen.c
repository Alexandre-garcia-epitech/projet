/*
** EPITECH PROJECT, 2017
** ffeef
** File description:
** afez
*/

#include "./../include/my.h"

int	my_strlen(char *buffer)
{
	int i = 0;

	while (buffer[i] != '\n')
		i++;
	i = i + 1;
	return (i);
}
