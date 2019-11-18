/*
** EPITECH PROJECT, 2017
** koydfghjk
** File description:
** foiuhgfdsfghjk
*/

#include "./../include/my.h"

int	*my_find_O(char *buffer, t_ct *ct )
{
	int i = 0;
	int *nbo;

	ct->o = 0;
	while (buffer[i] != '\0') {
		if (buffer[i] == 'O')
			ct->o = ct->o + 1;
		i = i + 1;
	}
	nbo = malloc(sizeof(int) * (ct->o + 1));
	i = 0;
	ct->o = 0;
	while (buffer[i] != '\0') {
		if (buffer[i] == 'O') {
			nbo[ct->o] = i;
			ct->o = ct->o + 1;
		}
		i = i + 1;
	}
	nbo[ct->o] = -1;
	return (nbo);
}

int	my_check_O(char *buffer, int *nbo)
{
	int i = 0;
	
	while (nbo[i] != -1) {
		if (buffer[nbo[i]] == ' ')
			buffer[nbo[i]] = 'O';
		i++;
	}
	return (*buffer);
}
