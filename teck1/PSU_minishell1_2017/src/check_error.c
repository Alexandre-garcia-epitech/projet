/*
** EPITECH PROJECT, 2018
** check_error
** File description:
** check_error
*/
#include "../include/my.h"

char	*access_path(char **path)
{
	int i;

	for (i = 0; access(path[i], F_OK) != 0 && path[i] != NULL; i++);
	return (path[i]);
}

int	launch_prog(char *path, char **lm, char **env)
{
	pid_t pid;
	struct stat st;

	if (env[0] == NULL) {
		print_not_found(lm[0]);
		return (1);
	}
	stat(path, &st);
	if (S_ISDIR(st.st_mode)) {
		write(2, path, my_strlen(path));
		write(2, ": Permission denied.\n", 21);
		return (0);
	}
	for (pid = fork(); pid == -1;) {
		perror("fork");
		return (0);
	}
	if (pid == 0) {
		execve(path, lm, env);
		return (0);
	}
	else
		check_error(pid);
	return (1);
}

void    check_error(pid_t pid)
{
	int status;

	waitpid(pid, &status, 0);
	if (WTERMSIG(status) == 8) {
		write (2, "Floating exception", 18);
		WCOREDUMP(status) ? write(2, " (core dumped)", 14) : 0;
		write(2, "\n", 1);
	}
	if (WTERMSIG(status) == 11) {
		write(2, "Segmentation fault", 18);
		WCOREDUMP(status) ? write(2, " (core dumped)", 14) : 0;
		write (2, "\n", 1);
	}
}

void	print_not_found(char *name)
{
	char	*str = ": Command not found.\n";
	write(1, name, my_strlen(name));
	write(1, str, my_strlen(str));
}

void	display_prompt(void)
{
	write(0, ">$: ", 4);
}
