/*
** EPITECH PROJECT, 2018
** disp
** File description:
** disp
*/

#include "include/my.h"

void	disp(char *str, char *av, int check, char *title,
	int s_1, int s_2, int color)
{
	int x = 0;

	av = av;
	if (check == 1)
		my_printf("Error\n");
	else {
		my_printf("Size %d*%d :  ", s_1, s_2);
		my_printf("Color %d :\n", color);
		while (str[x] != '\n')
			x = x + 1;
		x = x + 1;
		while (str[x] != '\0') {
			title[check] = str[x];
			check = check + 1;
			x = x + 1;
		}
		title[check] = '\0';
		my_printf("%s", title);
	}
}
