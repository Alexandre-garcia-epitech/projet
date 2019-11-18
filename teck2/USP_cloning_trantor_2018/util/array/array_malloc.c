/*
** EPITECH PROJECT, 2018
** lib
** File description:
** malloc an array
*/

#include "../include/util.h"

char **array_malloc(int line, int col)
{
    char **tab = malloc(sizeof(char*) * (line + 1));

    if (tab == NULL)
        error_perror("malloc() ", 84);
    for (int y = 0; y < line; y++) {
        tab[y] = malloc(sizeof(char) * (col + 1));
        if (tab[y] == NULL)
            error_perror("malloc() ", 84);
    }
    tab[line] = NULL;
    return (tab);
}
