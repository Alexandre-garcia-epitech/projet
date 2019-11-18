/*
** EPITECH PROJECT, 2018
** display_tetrimino
** File description:
** display_tetrimino
*/

#include "include/my.h"

char	*get_title(char *str)
{
	char *ret = malloc(sizeof(char) * 50);
	int x = 0;
	int y = 0;

	while (str[x] != '/')
		x = x + 1;
	x = x + 1;
	while (str[x] != '\0') {
		ret[y] = str[x];
		x = x + 1;
		y = y + 1;
	}
	ret[y] = '\0';
	free(str);
	return (ret);
}

char	*str_add_dir(char *str1, char *str2)
{
	char *ret = malloc(sizeof(char) * 50);
	int x = 0;
	int y = 0;

	while (str1[x] != '\0') {
		ret[y] = str1[x];
		x = x + 1;
		y = y + 1;
	}
	x = 0;
	while (str2[x] != '\0') {
		ret[y] = str2[x];
		x = x + 1;
		y = y + 1;
	}
	ret[y] = '\0';
	return (ret);
}

void	display_tetrimino(void)
{
	DIR *directory;
	struct dirent *entry;
	int check = 0;
	int i = 0;
	char **tab = malloc(sizeof(char *) * 10);

	check = check;
	directory = opendir("Tetriminos");
	while ((entry = readdir(directory)) != NULL) {
		if (entry->d_type == DT_REG) {
			tab[i] = malloc(sizeof(char) *
					my_strlen(entry->d_name));
			tab[i] = str_add_dir("Tetriminos/", entry->d_name);
			i++;
		}
	} tab[i] = NULL;
	closedir(directory);
	tab = sort_tab(tab);
	i = 0;
	while (tab[i]) {
		check = check_tetrimino(tab[i]);
		i++;
	}
}

char	**my_swap(char **tab, int i)
{
	char *ptr;

	ptr = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = ptr;
	return (tab);
}

char	**sort_tab(char **tab)
{
	int i = 0;
	int j = 0;

	while (tab[i] && tab[i + 1]) {
		(tab[i][j] < tab[i + 1][j]) ? j = 0, i++ :
		(tab[i][j] > tab[i + 1][j]) ? tab = my_swap(tab, i), i = 0 :
		(tab[i][j] == tab[i + 1][j]) ? j++ :
		(tab[i]) ? j++, i++ : 0;
	}
	return (tab);
}
