/*
** EPITECH PROJECT, 2018
** strdupcat
** File description:
** strdupcat
*/

#include "../include/my.h"

char	*my_strdup(char const *src)
{
	int i = 0;
	char *dest;

	for (;src[i]; i++);
	dest = malloc(sizeof(char) * (i + 1));
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*my_strcat(char *str1, char *str2)
{
	char *str;
	int len;
	int i = -1;
	int j = -1;

	len = my_strlen(str1) + my_strlen(str2) + 1;
	for (str = malloc(sizeof(char) * len); str == NULL;)
		return (NULL);
	while (str1 && str1[++i] != '\0')
		str[i] = str1[i];
	i--;
	while (str2 && str2[++j])
		str[++i] = str2[j];
	str[++i] = '\0';
	return (str);
}
