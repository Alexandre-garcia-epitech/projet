/*
** EPITECH PROJECT, 2018
** change_file
** File description:
** change_file
*/

#include "include/my.h"

void	change_file_tetris(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 18, SEEK_SET);
	fputc(b, file);
}

void	change_dir_left(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];
	char *space = "(space)";

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 1, SEEK_SET);
	if (str[0] == ' ')
		fputs(space, file);
	else
		fputc(b, file);
}

void	change_dir_right(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];
	char *space = "(space)";

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 5, SEEK_SET);
	if (str[0] == ' ')
		fputs(space, file);
	else
		fputc(b, file);
}

void	change_turn_round(char *str)
{
	FILE *file = NULL;
	int a = 0;
	char b = str[0];
	char *space = "(space)";

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 10, SEEK_SET);
	if (str[0] == ' ')
		fputs(space, file);
	else
		fputc(b, file);
}

void	change_next_dir(void)
{
	FILE *file = NULL;
	int a = 0;

	a = a;
	file = fopen("info.txt", "r+");
	a = fseek(file, 24, SEEK_SET);
	fputs("No ", file);
}
