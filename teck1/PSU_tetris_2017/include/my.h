/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <fcntl.h>
#include <dirent.h>
#include <curses.h>
#include <sys/ioctl.h>

void	my_putchar(char c);
int	check_argument(int ac);
int	check_displayer(int fd, char *av);
void	content_displayer(char *str, char *av, int check);
int	check_tetrimino(char *str);
char	*get_extend(char *str);
int	count_files(void);
char	*get_info(int fd);
char	*recove_line(char *str, char *ret);
void	debug_menu(void);
void	debug_menu_2(void);
void	print_h(char **av);
int	check_flag_main(int ac, char **av);
int	check_flag_1(char **av, int x);
int	check_flag_2(char **av, int x);
int	check_flag_3(char **av, int x);
int	check_flag_4(char **av, int x);
int	check_str(char *str, char *check);
char	*my_strcpy(char *dest, char const *src);
int	check_str_t(char *str);
char	*get_the_shape(char *str, char *tmp, int a);
int	check_l(char *str);
char	*get_l(char *str, char *tmp);
int	check_the_shape(char *str, char *tmp, int a);
void	display_content(char *str, char *av, int check);
char	*get_title(char *str);
char	*str_add_dir(char *str1, char *str2);
void	display_tetrimino(void);
int	my_printf(char *str, ...);
void	change_the_lvl(char *str);
void	change_file_tetris(char *str);
void	change_quit_prog(char *str);
void	the_world(char *str);
void	change_next_dir(void);
void	change_dir_left(char *str);
void	change_dir_right(char *str);
void	change_turn_round(char *str);
char	**sort_tab(char **tab);
char	**my_swap(char **tab, int i);
int	my_strlen(char *str);
int	my_error(int ac, char **av);
void	disp(char *str, char *av, int check,
	char *title, int s_1, int s_2, int color);

# endif /* !MY_H_ */
