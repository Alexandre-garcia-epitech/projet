/*
** EPITECH PROJECT, 2017
** zdd
** File description:
** zd
*/

#include "./../include/my.h"

void	my_help(void)
{
	my_putstr("USAGE\n");
	my_putstr("     ./my_sokoban map\n\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("     map    file representing the warehouse");
	my_putstr("map, containing '#' for walls,\n");
	my_putstr("           'P' for the player, 'X' ");
	my_putstr("for boxes and 'O' for storage locations.\n");
}
