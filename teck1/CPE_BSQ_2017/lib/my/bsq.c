/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** bsq
*/

#include "../../include/my.h"

void	search_squares(t_element *aff_map, int x, int y)
{
	int i = 1;

	while (my_map(aff_map, x, y, i)) {
		if (i > aff_map->size_size) {
			aff_map->size_size = i;
			aff_map->size_x = x;
			aff_map->size_y = y;
		}
		i = i + 1;
	}
}

int	bsq(t_element *aff_map)
{
	int x;
	int y = -1;

	while (++y < aff_map-> leigth) {
		x = -1;
		while (++x < aff_map->weight) {
			search_squares(aff_map, x, y);
		}
	}
	return (0);
}

int	my_map(t_element *aff_map, int x, int y, int size)
{
	int i = -1;
	int j;

	if (x + size > aff_map->weight || y + size > aff_map->leigth ||
	    x < 0 || y < 0)
		return (0);
	while (++i < size) {
		j = -1;
		while (++j < size) {
			if (value_position(aff_map, x + j, y + i) != '.')
				return (0);
		}
	}
	return (1);
}

char	value_position(t_element *aff_map, int x, int y)
{	
	if (x < 0 || x >= aff_map->weight || y >= aff_map->leigth || y < 0)
		return (0);
	return (aff_map->tmp[x + y * (aff_map->weight + 1)]);
}

void	print_map(t_element *aff_map)
{
	int i = -1;
	int j;

	while (++i < aff_map->leigth) {
		j = -1;
		while (++j < aff_map->weight) {
			if (j >= aff_map->size_x && j < aff_map->size_x + aff_map->size_size &&
			    i >= aff_map->size_y && i < aff_map->size_y + aff_map->size_size)
				write(1, "x", 1);
			else
				write(1, &(aff_map->tmp[j + i * (aff_map->weight + 1)]), 1);
		}
		write(1, "\n", 1);
	}
}
