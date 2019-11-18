/*
** EPITECH PROJECT, 2018
** ai
** File description:
** ai
*/

#include "../include/my.h"

int	ai_action(t_struct *tmp)
{
	int	i = 0;
	int	count = 0;

	while (tmp->map[tmp->ai_line][i]) {
		if (tmp->map[tmp->ai_line][i] == '|')
			count++;
		i++;
	}
	return (count);
}

void	ai_turn_round(t_struct *tmp)
{
	int	ok = 0;

	my_putstr("\nAI's turn...\n");
	while (ok == 0) {
		tmp->ai_line = (random() % tmp->size) + 1;
		tmp->ai_nb_stick = (random() % tmp->limit) + 1;
		if (tmp->ai_nb_stick <= ai_action(tmp))
			ok = 1;
	}
	my_putstr("AI removed ");
	my_putnbr(tmp->ai_nb_stick);
	my_putstr(" match(es) from line ");
	my_putnbr(tmp->ai_line);
	my_putchar('\n');
	delete_stick_ai(tmp);
}
