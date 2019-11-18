/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>

#ifndef READ_SIZE
# define READ_SIZE 4096

typedef struct	s_struct
{
	int	limit;
	int	size;
	int	line;
	int	nb_stick;
	int	count_stick;
	int	ai_line;
	int	ai_nb_stick;
	char	**map;
} t_struct;

int	turn_player(t_struct *tmp);
int	stick_in_line(char *str);
void	my_putstr(char *str);
void	my_puterror(char *str);
void	my_putchar(char c);
int	my_strlen(char *str, char c);
int	my_getnbr(char const *str);
int	my_putnbr(int nb);
int	win_game(t_struct *tmp, int ret);
void	delete_stick(t_struct *tmp);
void	delete_stick_ai(t_struct *tmp);
int	str_is_num(char *str);
int	check_prog(int ac, char **av);
char	*complete_char(char *str, char c, int size);
void	complete_stick(t_struct *tmp);
char	**create_map(int size);
int	map_generator(t_struct *tmp);
void	display_map(t_struct *tmp);
int	stick_line(t_struct *tmp);
int	check_line(t_struct *tmp);
int	loop_game(t_struct *tmp);
int	ai_action(t_struct *tmp);
void	ai_turn_round(t_struct *tmp);
void	*my_memset(char *str, int c, int n);
char	*get_next_line(int fd);
void	str_tricks_1(void);
void	str_tricks_2(void);
void	str_tricks_3(void);
void	str_tricks_4(void);
void	str_tricks_5(void);
void	str_tricks_6(void);

#endif /* !READ-SIZE */
# endif /* !MY_H_ */
