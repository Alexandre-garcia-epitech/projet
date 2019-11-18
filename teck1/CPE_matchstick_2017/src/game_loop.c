/*
** EPITECH PROJECT, 2018
** game_loop
** File description:
** game_loop
*/

#include "../include/my.h"

int	stick_line(t_struct *tmp)
{
	int	i = 0;
	int	count = 0;

	while (tmp->map[tmp->line][i]) {
		if (tmp->map[tmp->line][i] == '|')
			count++;
		i++;
	}
	return (count);
}

int	check_stick(t_struct *tmp)
{
	char	*str;
	int	ok = 0;
	my_putstr("Matches: ");
	if ((str = get_next_line(0)) == NULL) return (-1);
	while (42) { if (ok == 1) return (1);
		if (str_is_num(str) == -1) { my_putstr("Error: invalid input ");
			my_putstr("(positive number expected)\n");
			ok = 1;
		} else { tmp->nb_stick = my_getnbr(str);
			(tmp->nb_stick == 0) ? str_tricks_1(), ok = 1 :
				(tmp->nb_stick > tmp->limit) ? str_tricks_2(),
				my_putnbr(tmp->limit), str_tricks_3(), ok = 1 :
				(tmp->nb_stick > stick_line(tmp)) ?
				str_tricks_4(), ok = 1 : 0;
			if (tmp->nb_stick != 0 && tmp->nb_stick <= tmp->limit &&
				tmp->nb_stick <= stick_line(tmp))
				return (0);
		}
	}
	return (-1);
}

int	check_line(t_struct *tmp)
{
	char	*str = NULL;
	int	ok = 0;

	my_putstr("Line: ");
	if ((str = get_next_line(0)) == NULL) return (-1);
	while (1) {
		if (ok == 1) { my_putstr("Line: ");
			if ((str = get_next_line(0)) == NULL) return (-1);
			ok = 0;
		} if (str_is_num(str) == -1){
			str_tricks_6();
			ok = 1;
		} else { tmp->line = my_getnbr(str);
			(tmp->line < 1 || tmp->line > tmp->size) ?
				str_tricks_5(), ok = 1 : 0;
			if (ok == 0)
				return (check_stick(tmp));
		}
	}
	return (-1);
}

int	turn_player(t_struct *tmp)
{
	int ret = 0;

	my_putstr("\nYour turn:\n");
	while (1) {
		if ((ret = check_line(tmp)) == -1)
			return (-1);
		else if (ret == 0)
			return (0);
	}
}

int	loop_game(t_struct *tmp)
{
	int	ret = -1;
	int	test;
	while (1) {
		if ((test = turn_player(tmp)) != -1) {
			my_putstr("Player removed ");
			my_putnbr(tmp->line);
			my_putstr(" match(es) from line ");
			my_putnbr(tmp->line);
			my_putchar('\n');
			delete_stick(tmp);
			display_map(tmp);
			if ((ret = win_game(tmp, 1)) == 1) return (1);
		} else if (test == -1)
			return (-1);
		ai_turn_round(tmp);
		display_map(tmp);
		if ((ret = win_game(tmp, 2)) == 2)
			return (2);
	}
	return (0);
}
