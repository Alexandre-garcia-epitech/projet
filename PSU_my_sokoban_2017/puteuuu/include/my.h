/*
** EPITECH PROJECT, 2017
** vsv
** File description:
** qfe
*/

#ifndef MY_H_
#define MY_H_

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct s_ct
{
	int player;
	int key;
	int fd;
	int ret;
	int o;
	int cases;
} t_ct;

void	my_help(void);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *buffer);
int	*my_find_O(char *buffer, t_ct *ct);
void	key_right(t_ct *ct, char *buffer);
void	key_left(t_ct *ct, char *buffer);
void	key_up(t_ct *ct, char *buffer);
void	key_down(t_ct *ct, char *buffer);
void	key_reset(char *av, t_ct *ct, char *buffer);
void	key_ESC();
int	my_check_O(char *buffer, int *nbo);
int	my_sokoban(char *av);

#endif
