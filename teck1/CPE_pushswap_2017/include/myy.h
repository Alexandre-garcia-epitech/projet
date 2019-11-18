/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** 
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av);
void	my_putchar(char c);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
char	*my_revstr(char *str);
int	egal(char *str1, char *str2, char *calc);
int	sup(char *str1, char *str2, char *calc);
int	infin_add(char *str1, char *str2);

#endif
