/*
** EPITECH PROJECT, 2017
** my_putchar6
** File description:
** my_putchar03
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}
