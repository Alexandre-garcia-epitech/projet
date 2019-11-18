/*
** EPITECH PROJECT, 2018
** generator_map
** File description:
** generator_map
*/

#include "../include/my.h"

void	complete_stick(t_struct *tmp)
{
	int	i = 0;
	int	x = 1;
	int	y = tmp->size;

	if (tmp->map[x] != NULL)
		while (x < (tmp->size + 1)) {
			y = tmp->size - i;
			while (y <= (tmp->size + i)) {
				tmp->map[x][y] = '|';
				y++;
			}
			i++;
			x++;
		}
}

char	*complete_char(char *str, char c, int size)
{
	int	i = 0;

	while (i < size) {
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**create_map(int size)
{
	int	i = 0;
	char	**map;

	if ((map = malloc(sizeof(char *) * (size + 3))) == NULL)
		return (NULL);
	while (i < (size + 2)) {
		if ((map[i] = malloc(sizeof(char) * (size * 2) + 3)) == NULL)
			return (NULL);
		i++;
	}
	map[i] = NULL;
	return (map);
}

int	map_generator(t_struct *tmp)
{
	int	i = 1;

	if ((tmp->map = create_map(tmp->size)) == NULL)
		return (-1);
	if ((tmp->map[0] = complete_char(tmp->map[0], '*',
		(tmp->size * 2) + 1)) == NULL)
		return (-1);
	if ((tmp->map[tmp->size + 1] = complete_char
		(tmp->map[tmp->size + 1], '*', (tmp->size * 2) + 1))
		== NULL)
		return (-1);
	while (i < (tmp->size + 1)) {
		tmp->map[i] = complete_char
		(tmp->map[i], ' ', (tmp->size * 2) + 1);
		tmp->map[i][0] = '*';
		tmp->map[i][tmp->size * 2] = '*';
		i++;
	}
	return (0);
}

void	display_map(t_struct *tmp)
{
	int	i = 0;

	while (tmp->map[i]) {
		my_putstr(tmp->map[i]);
		my_putchar('\n');
		i++;
	}
}
