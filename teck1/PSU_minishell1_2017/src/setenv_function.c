/*
** EPITECH PROJECT, 2018
** setenv_unsetenv_function
** File description:
** setenv_unsetenv_function
*/

#include "../include/my.h"

char	**my_setenv_function(char **lm, char **env)
{
	int i;
	int z = -1;
	char **new;

	for (;check_setenv_error(lm, env) == -1;)
		return (env);
	for (i = 0; env[i]; i++)
		if (my_strncmp(lm[1], env[i], my_strlen(lm[1])) == 1)
			z = i;
	for (new = malloc((i + ((z != - 1) ? 1 : 2)) *
		sizeof(char *)); new == NULL;)
		return (NULL);
	for (i = 0; env[i]; i++)
		new[i] = (i == z) ? strcat_new(lm) : my_strdup(env[i]);
	if (z == -1) {
		new[i] = strcat_new(lm);
		new[i + 1] = NULL;
	}
	else
		new[i] = NULL;
	return (new);
}

int	check_setenv_error(char **lm, char **env)
{
	if (!lm[1]) {
		print_env(env);
		return (-1);
	}
	if (is_alpha(lm[1][0]) == 0) {
		write(2, "setenv: Variable name must ", 27);
		write(2, "begin with a letter.\n", 21);
		return (-1);
	}
	else if (my_str_isalpha(lm[1]) == 0) {
		write(2, "setenv: Variable ", 17);
		write(2, "name must contain only ", 23);
		write(2, "alphanumerical caracters.\n", 26);
		return (-1);
	}
	else
		return (0);
}

char	*strcat_new(char **lm)
{
	char *a;
	char *b;

	a = my_strcat(lm[1], "=");
	if (lm[2]) {
		b = my_strcat(a, lm[2]);
		return (b);
	}
	else
		return (a);
}

char	**my_unsetenv_function(char **lm, char **env)
{
	int i = 0;
	int t;
	int j = 0;
	char **new;

	for (t = check_unsetenv_error(lm, env); t == -1;)
		return (env);
	for (new = malloc(tab_strlen(env) * sizeof(char *));
	new == NULL;)
		return (NULL);
	for (i = 0, j = 0; env[i]; j++, i++) {
		if (i != t)
			new[j] = my_strdup(env[i]);
		else
			j--;
	}
	new[j] = NULL;
	return (new);
}

int	check_unsetenv_error(char **lm, char **env)
{
	int i = 0;

	if (!lm[1]) {
		write(2, "unsetenv: Not enough arguments.\n", 32);
		return (-1);
	}
	for (i = 0; env[i]; i++)
		if (my_strncmp(lm[1], env[i], my_strlen(lm[1])) == 1)
			return (i);
	return (-1);
}
