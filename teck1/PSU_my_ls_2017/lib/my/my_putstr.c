/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my_putstr
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"
#include "../../include/my_ls.h"

int	my_putstr(char *str)
{
	int ff = 0;
	
	while (str[ff] != '\0') {
		my_putchar(str[ff]);
		ff = ff +1;
	}
	return (0);
}
