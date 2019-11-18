/*
** EPITECH PROJECT, 2018
** check_prog
** File description:
** check_prog
*/

#include "../include/my.h"

int	win_game(t_struct *tmp, int ret)
{
	int	i = 0;
	int	count = 0;

	while (tmp->map[i]) {
		count += stick_in_line(tmp->map[i]);
		i++;
	}
	if (count == 0)
		return (ret);
	else
		return (0);
}

void	delete_stick(t_struct *tmp)
{
	int	count = tmp->nb_stick;
	int	len = my_strlen(tmp->map[tmp->line], '\n') - 2;

	while (count > 0) {
		if (tmp->map[tmp->line][len] == '|') {
			tmp->map[tmp->line][len] = ' ';
				count--;
		}
		len--;
	}
}

void	delete_stick_ai(t_struct *tmp)
{
	int count = tmp->ai_nb_stick;
	int len = my_strlen(tmp->map[tmp->ai_line], '\n') - 2;

	while (count > 0) {
		if (tmp->map[tmp->ai_line][len] == '|') {
			tmp->map[tmp->ai_line][len] = ' ';
				count--;
		}
		len--;
	}
}

int	str_is_num(char *str)
{
	int	i = 0;

	if (str[i] == '\0')
		return (-1);
	while (str[i]) {
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (-1);
	}
	return (0);
}

int	check_prog(int ac, char **av)
{
	int	i = 1;

	if (ac != 3)
		return (-1);
	while (i != ac) {
		if (str_is_num(av[i]) == -1)
			return (-1);
		i++;
	}
	if (my_getnbr(av[1]) > 99 || my_getnbr(av[1]) < 2)
		return (-1);
	if (my_getnbr(av[2]) <= 0)
		return (-1);
	return (0);
}
