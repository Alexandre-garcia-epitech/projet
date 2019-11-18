/*
** EPITECH PROJECT, 2018
** change_lvl.c
** File description:
** upd lvl
*/

#include "include/my.h"

void	change_the_lvl(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 28, SEEK_SET);
	fputc(b, file);
	if (str[1] >= '0' && str[1] <= '9')
		b = str[1];
	else
		b = ' ';
	fputc(b, file);
}

void	the_world(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 22, SEEK_SET);
	fputc(b, file);
}

void	change_quit_prog(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 20, SEEK_SET);
	fputc(b, file);
}
