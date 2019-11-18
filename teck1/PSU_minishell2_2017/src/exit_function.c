/*
** EPITECH PROJECT, 2018
** my_exit_function
** File description:
** my_exit_function
*/
#include "../include/my.h"

void	my_exit_function(char **lm)
{
	int i = 0;

	if (lm == NULL) {
		write(1, "exit\n", 5);
		exit(i);
	}
	if (lm[1]) {
		for (i = my_get_nbr(lm[1]); i == -1 || lm[2];) {
			write(2, "exit: Invalid Syntax.\n", 22);
			return ;
		}
	}
	write(1, "exit\n", 5);
	exit(i);
}

int	my_get_nbr(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] >= 48 && str[i] <= 57) {
		n = n + (str[i] - 48);
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			n *= 10;
		i++;
	}
	if (str[i] == '\0' || str[i] == '\n')
		return (n);
	else
		return (-1);
}

char	**copy_tab(char **tab)
{
	int i;
	char **n_tab;

	for (n_tab = malloc((tab_strlen(tab) + 1) * sizeof(char *)); n_tab == NULL;)
		return (NULL);
	for (i = 0; tab[i]; i++)
		n_tab[i] = my_strdup(tab[i]);
	n_tab[i] = NULL;
	return (n_tab);
}

int	tab_strlen(char **tab)
{
	int i;

	for (i = 0; tab[i]; i++);
	return (i);
}
