/*
** EPITECH PROJECT, 2018
** my_epur_str
** File description:
** my_epur_str
*/
#include "../include/my.h"

char	*my_epurstr(char *str)
{
	char *new;
	int i;
	int j;

	for (i = 0, j = 0; str[i]; i++, j++)
		if ((str[i] == ' ' || str[i] == '\t')
		&& (!str[i + 1] || str[i + 1] == ' ' || str[i + 1] == '\t'))
			j--;
	for (new = malloc((j + 1) * sizeof(char)); new == NULL;)
		return (NULL);
	for (i = 0, j = 0; str[i]; i++, j++) {
		if ((str[i] == ' ' || str[i] == '\t')
		&& str[i + 1] && str[i + 1] != ' ' && str[i + 1] != '\t')
			new[j] = ' ';
		else
			(str[i] == ' ' || str[i] == '\t') ?
			j -= 1 : (new[j] = str[i]);
	}
	new[j] = '\0';
	return (new);
}
