/*
** EPITECH PROJECT, 2018
** check_exec
** File description:
** check_exec
*/

#include "../include/my.h"

int	my_strncmp(char const *a, char const *b, int n)
{
	int i = 0;

	while (i != n && a[i] == b[i])
		i++;
	if (i == n)
		return (1);
	else
		return (0);
}

char	check_exec_1(char **lm, char **path)
{
	if (my_strncmp(lm[0], "cd", 2) == 1)
		return (1);
	if (my_strncmp(lm[0], "env", 3) == 1)
		return (2);
	if (my_strncmp(lm[0], "setenv", 6) == 1)
		return (3);
	if (check_exec_2(lm, path) >= 4 && check_exec_2(lm, path) <= 6)
		return (check_exec_2(lm, path));
	return (7);
}

char	check_exec_2(char **lm, char **path)
{
	if (my_strncmp(lm[0], "unsetenv", 8) == 1)
		return (4);
	if (my_strncmp(lm[0], "exit", 4) == 1 && !lm[0][4])
		return (5);
	if (access_path(path) != NULL)
		return (6);
}

char	**check_function(char i, char **lm, char **path, char **env)
{
	i == 1 ? my_cd_function(lm, env) : 0;
	i == 2 ? print_env(env) : 0;
	i == 3 ? env = my_setenv_function(lm, env) : 0;
	i == 4 ? env = my_unsetenv_function(lm, env) : 0;
	i == 5 ? my_exit_function(lm) : 0;
	i == 6 ? launch_prog(access_path(path), lm, env) : 0;
	i == 7 ? print_not_found(lm[0]) : 0;
	return (env);
}

void	tab_free(char **tab)
{
	int i;

	for (i = 0; tab[i]; ++i)
		free(tab[i]);
	free(tab);
}
