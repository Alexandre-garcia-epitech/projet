/*
** EPITECH PROJECT, 2018
** debug
** File description:
** debug
*/

#include "include/my.h"

int	count_files(void)
{
	int nb = 0;
	DIR *directory;
	struct	dirent *entry;
	char *str = malloc(sizeof(char) * 25);
	int check;

	directory = opendir("Tetriminos");
	while ((entry = readdir(directory)) != NULL) {
		if (entry->d_type == DT_REG) {
			my_strcpy(str, entry->d_name);
			str = get_extend(str);
			check = check_str(".tetrimino", str);
			if (check == 0)
				nb = nb + 1;
		}
	}
	free(str);
	closedir(directory);
	return (nb);
}

char	*get_info(int fd)
{
	char *str = malloc(sizeof(char) * 801);
	int ret;

	ret = read(fd, str, 800);
	str[ret] = '\0';
	return (str);
}

char	*retrieve_line(char *str, char *ret)
{
	static int x = 0;
	int y = 0;

	while (str[x] != '\n' && str[x] != '\0') {
		ret[y] = str[x];
		x = x + 1;
		y = y + 1;
	}
	x = x + 1;
	ret[y] = '\0';
	return (ret);
}

void	debug_menu(void)
{
	int fd = open("info.txt", O_RDWR);
	char *str = get_info(fd);
	char *ret = malloc(sizeof(char) * 10);

	my_printf("*** DEBUG MODE ***\n");
	ret = retrieve_line(str, ret);
	my_printf("Key Left :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Key Right :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Key Turn :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Key Drop :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Key Quit :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Key Pause :   %s\n", ret);
	debug_menu_2();
	free(ret);
	free(str);
}

void	debug_menu_2(void)
{
	int fd = open("info.txt", O_RDWR);
	char *str = get_info(fd);
	char *ret = malloc(sizeof(char) * 10);
	int nb_f = count_files();

	ret = retrieve_line(str, ret);
	my_printf("Next :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Level :  %s\n", ret);
	ret = retrieve_line(str, ret);
	my_printf("Size :  %s\n", ret);
	my_printf("Tetriminos :  %d\n", nb_f);
	display_tetrimino();
	my_printf("Press any key to start Tetris\n");
	free(ret);
	free(str);
}
