/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#include "get_next_line.h"

void	my_memset(char *str, int buffsize)
{
	while (--buffsize >= 0)
		str[buffsize] = 0;
}

char	*re_malloc(void)
{
	char *str;

	if ((str = malloc(sizeof(char) * READ_SIZE + 1)) == NULL)
		return (NULL);
	return (str);
}

char	*get_next_line(const int fd)
{
	static int j = 0;
	static char buffer[READ_SIZE + 1];
	char *tmp;
	int a = 0;
	int b = 0;

	if ((tmp = re_malloc()) == NULL) {
		return (NULL);
	}
	my_memset(tmp, READ_SIZE);
	while (b == 0) {
		if (j == 0 && ((read(fd, buffer, READ_SIZE)) <= 0)) {
			free (tmp);
			return (NULL);
		}
		my_memset(buffer, j);
		while (buffer[j] != '\0' && buffer[j] != '\n')
			tmp[a++] = buffer[j++];
		b = 1;
		if (buffer[a++] != '\n')
			b = 1;
		else
			j = 0;
	}
	return (tmp);
}
