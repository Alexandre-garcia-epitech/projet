/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/
#ifndef _MY_H_
# define _MY_H_

#include <stdio.h>
#include <errno.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

#ifndef READ_SIZE
# define READ_SIZE 4096

char	**my_unsetenv_function(char **lm, char **env);
char	**my_setenv_function(char **lm, char **env);
char	*strcat_new(char **lm);
char	**get_the_path(char **env);
char	**add_the_path(char **lm, char **path);
char	*access_path(char **path);
int	launch_prog(char *path, char **lm, char **env);
void	display_prompt(void);
void	my_putstr(char *str);
void	print_env(char **env);
char	**check_prog(char *tmp, char **env);
void	my_putchar(char c);
int	my_strlen(char const *str);
char	*my_strcat(char *str1, char *str2);
int	my_strncmp(char const *a, char const *b, int n);
char	**my_str_to_wordtab(char *str, char c);
char	*my_strdup(char const *src);
void	check_error(pid_t pid);
void	print_not_found(char *name);
char	**check_function(char i, char **lm, char **path, char **env);
void	my_cd_function(char **in, char **env);
void	swap_directory(char **env);
char	check_exec_1(char **lm, char **path);
char	check_exec_2(char **lm, char **path);
void	remove_directory(char **lm, char **env);
void	cd_conf_base(char **lm, char **env);
void	aff_errno_cd(char **lm);
void	tab_free(char **tab);
void	my_exit_function(char **lm);
int	my_get_nbr(char *str);
int	tab_strlen(char **tab);
char	**copy_tab(char **tab);
int	check_unsetenv_error(char **lm, char **env);
char	*my_epurstr(char *str);
int	is_alpha(char c);
int	my_str_isalpha(char const *str);
int	check_setenv_error(char **lm, char **env);
void	*my_memset(char *str, int c, int n);
char	*get_next_line(int fd);
void	my_putchar(char c);
void	my_putstr(char *str);
#endif /* !READ_SIZE */
# endif /* !MY_H_ */
