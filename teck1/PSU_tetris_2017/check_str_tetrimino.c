/*
** EPITECH PROJECT, 2018
** check_str
** File description:
** check_str
*/

#include "include/my.h"

int	check_l(char *str)
{
	int	a = 0;

	while (str[a] != '\0') {
		if (a == 1 || a == 3 || a >= 5)
			if (str[a] != ' ')
				return (1);
		if (a == 0 || a == 2 || a == 4)
			if (str[a] < '1' || str[a] > '9')
				return (1);
		a = a + 1;
	}
	return (0);
}

char	*get_the_shape(char *str, char *tmp, int a)
{
	int	y = 0;

	while (str[a] != '\0') {
		tmp[y] = str[a];
		a = a + 1;
		y = y + 1;
	}
	tmp[(y - 1)] = '\0';
	if (y < 0)
		return (NULL);
	return (tmp);
}

char	*get_l(char *str, char *tmp)
{
	int	a = 0;

	while (str[a] != '\n') {
		tmp[a] = str[a];
		a = a + 1;
	}
	tmp[a] = '\0';
	if (a < 0)
		return (NULL);
	return (tmp);
}

int	check_the_shape(char *str, char *tmp, int a)
{
	int	check = 0;
	int	check_t = 0;
	int	check_l = 0;

	while (tmp[a] != '\0') {
		while (tmp[a] != '\n' && tmp[a] != '\0') {
			if (tmp[a] == '*' || ((tmp[a] == ' ' &&
					tmp[a+1] == '*')))
				check_t = check_t + 1;
			a = a + 1;
		} if (check_t > check)
			check = check_t;
		check_t = 0;
		check_l = check_l + 1;
		if (tmp[a] != '\0')
			a = a + 1;
	}
	if (check != (str[0] - 48)) return (1);
	if (check_l != (str[2] - 48)) return (1);
	return (0);
}

int	check_str_t(char *str)
{
	int	a = 1;
	char	*tmp = malloc(sizeof(char) * 50);
	int	check;

	while (str[(a - 1)] != '\n') {
		a = a + 1;
	}
	tmp = get_l(str, tmp);
	check = check_l(tmp);
	if (check == 1) {
		free(tmp);
		return (1);
	}
	tmp = get_the_shape(str, tmp, a);
	check = check_the_shape(str, tmp, check);
	free(tmp);
	if ((str[4] - 48) < 1 || (str[4] - 48) > 7)
		return (1);
	if (check == 1) return (1);
	return (0);
}
