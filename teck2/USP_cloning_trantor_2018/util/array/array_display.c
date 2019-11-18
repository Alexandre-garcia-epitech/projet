/*
** EPITECH PROJECT, 2018
** lib
** File description:
** display a array
*/

#include "../include/util.h"

void array_put(char **tab)
{
    for (int y = 0; y < array_lenght(tab); y++)
        string_put(tab[y]);
}

void array_print(char **tab)
{
    for (int y = 0; y < array_lenght(tab); y++)
        printf("%s\n", tab[y]);
}
