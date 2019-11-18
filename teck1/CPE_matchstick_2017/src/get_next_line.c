/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#include "include/my.h"

void	*my_memset(char *str, int c, int n)
{
	int	i = 0;

	for (i = 0; i != n; i++)
		str[i] = c;
	return (str);
}

char	*get_next_line(int fd)
{
	static	char	buf[READ_SIZE];
	static	int	k = 0;
	char	*s;
	int	j = 0;
	int	i = 0;

	if ((s = malloc(sizeof(char) * 10000)) == NULL || fd == -1)
		return (NULL);
	while (1337) {
		if (k == 0) {
			my_memset(buf, '\0', READ_SIZE);
			i = read(fd, buf, READ_SIZE);
		}
		if (k == 0 && ((i == 0 && k ) || (i == 0 && !k) || i < 0))
			return (i == 0 && i ? buf : NULL);
		while (buf[k] != '\0' && buf[k] != '\n' && (s[j++] = buf[k++]));
		if (buf[k++] == '\n' && !(s[j] = '\0'))
			return (s);
		k = 0;
	}
}
