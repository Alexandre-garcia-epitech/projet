/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct	s_element
{
	char *tmp;
	int leigth;
	int weight;
	int size_x;
	int size_y;
	int size_size;

} t_element;

void	print_map(t_element *aff_map);
char	value_position(t_element *aff_amp, int x, int y);
int	my_map(t_element *aff_map, int x, int y, int size);
int	bsq(t_element *aff_map);
void	search_squares(t_element *aff_map, int x, int y);
int	get_line(char *str);
int	height_leigth(char *str);
t_element	*my_read(char *path);
int	my_putstr(char const *str);
int	main(int ac, char **av);
void	my_putchar(char c);
# endif /* !MY_H_ */
