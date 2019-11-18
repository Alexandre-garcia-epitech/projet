/*
** EPITECH PROJECT, 2018
** cd_function
** File description:
** cd_function
*/

#include "../include/my.h"

void	my_cd_function(char **lm, char **env)
{
	if (!lm[1])
		swap_directory(env);
	else if (lm[1] && !lm[2]) {
		if (lm[1][0] == '-' && lm[1][1] == 0)
			remove_directory(lm, env);
		else
			cd_conf_base(lm, env);
	}
	else
		write(2, "cd: Too much arguments.\n", 24);
}

void	cd_conf_base(char **lm, char **env)
{
	struct stat st;

	if (stat(lm[1], &st) == 0 && !lm[2]) {
		if (!S_ISDIR(st.st_mode)) {
			write(2, lm[1], my_strlen(lm[1]));
			write(2, ": Not a directory.\n", 19);
		}
	}
	chdir(lm[1]) == - 1 ? aff_errno_cd(lm) : 0;
}

void	aff_errno_cd(char **lm)
{
	if (errno == EACCES) {
		write(2, lm[1], my_strlen(lm[1]));
		write(2, ": Permission denied.\n", 21);
	}
	else if (errno == ENOENT) {
		write(2, lm[1], my_strlen(lm[1]));
		write(2, ": No such file or directory.\n", 29);
	}
}

void	remove_directory(char **lm, char **env)
{
	int i = 0;
	char *lin = NULL;

	while (env[i] != NULL) {
		if (my_strncmp(env[i], "OLDPWD=", 7) == 1)
			lin = my_strdup(env[i] + 7);
		i++;
	}
	if (!lin)
		write(2, ": No such file or directory.\n", 29);
	else
		chdir(lin);
	free(lin);
}

void	swap_directory(char **env)
{
	char *direct;
	int i = 0;

	while (env[i] != NULL) {
		if (my_strncmp(env[i], "HOME=", 5) == 1)
			direct = my_strdup(env[i] + 5);
		i++;
	}
	chdir(direct);
	free(direct);
}
