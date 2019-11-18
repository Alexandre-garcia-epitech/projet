/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** bsq
*/

#include "../../include/my.h"

int	get_line(char *str)
{
	int i = -1;

	while (str[++i] != '\n' && str[i] != '\0');
	return (i);
}

int     height_leigth(char *str)
{
	int i = -1;
	int size_height = 1;
	int leigth = 0;

	while (str[++i] != '\n' && str[i] != '\0') {
		if (str[i] == '-') {
			size_height *= -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			leigth = (leigth * 10) + (str[i] - '0');
		else
			return (0);
	}
	return (leigth * size_height);
}

t_element	*my_read(char *path)
{
	struct stat sb;
	char *buffer;
	t_element *structure;
	int size_read, fd;
	int i = -1;

	if ((structure = malloc(sizeof(t_element))) == NULL) return (NULL);
	if ((fd = open(path, O_RDONLY)) < 0) return (NULL);
	if (stat(path, &sb) < 0) return (NULL);
	if ((buffer = malloc(sizeof(char) * (sb.st_size + 1))) == NULL)
		return (NULL);
	if ((size_read = read(fd, buffer, sb.st_size)) < 1) return (NULL);
	buffer[size_read] = '\0';
	structure->leigth = height_leigth(buffer);
	while (buffer[++i] != '\n' && buffer[i] != '\0');
	i = i + 1;
	structure->tmp = &buffer[i];
	structure->weight = get_line(&buffer[i]);
	close(fd);
	return (structure);
}

int	main(int ac, char **av)
{
	t_element *aff_map;

	if (ac < 2) {
		my_putstr("ERROR\n");
		return (84);
	}
	if ((aff_map = my_read(av[1])) == NULL) {
		my_putstr("ERROR_CMD\n");
		return (84);
	}
	aff_map->size_x = 0;
	aff_map->size_y = 0;
	aff_map->size_size = 0;
	bsq(aff_map);
	print_map(aff_map);
	return (0);
}
