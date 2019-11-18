/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/
#include "../include/my.h"

int	main(int ac, char **av, char **env)
{
	char *a;
	char *b;
	char **n_env;

	n_env = copy_tab(env);
	while (42) {
		display_prompt();
		for (a = get_next_line(0); a == NULL;)
			my_exit_function(NULL);
		for (b = my_epurstr(a); b == NULL;)
			return (0);
		n_env = check_prog(b, n_env);
	}
	return (1);
}

char	**check_prog(char *tmp, char **env)
{
	char **lm;
	char **path;
	char i;

	if (env[0] == NULL) {
		print_not_found(tmp);
		return (env);
	}
	lm = my_str_to_wordtab(tmp, ' ');
	path = add_the_path(lm, get_the_path(env));
	i = check_exec_1(lm, path);
	env = check_function(i, lm, path, env);
	return (env);
}

char	**add_the_path(char **lm, char **path)
{
	char **new;
	int i = 0;
	int j = 0;

	while (path[i] != NULL)
		i += 1;
	new = malloc((i + 1) * sizeof(char *));
	while (path[j] != NULL) {
		new[j] = my_strdup(my_strcat(path[j], my_strcat("/", lm[0])));
		j += 1;
	}
	new[j] = my_strdup(lm[0]);
	return (new);
}

char	**get_the_path(char **env)
{
	int i = 0;
	char **tab;

	while (env[i] != NULL) {
		if (env[i][0] == 'P' && env[i][1] == 'A' && env[i][2] == 'T'
		&& env[i][3] == 'H')
			tab = my_str_to_wordtab(env[i] + 5, ':');
		i++;
	}
	return (tab);
}

void	print_env(char **env)
{
	int i = 0;

	while (env[i] != NULL) {
		my_putstr(env[i]);
		my_putchar('\n');
		i += 1;
	}
}
