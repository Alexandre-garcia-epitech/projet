/*
** EPITECH PROJECT, 2018
** lib
** File description:
** return length of array of string
*/

#include "../include/util.h"

int array_lenght(char **tab)
{
    int count = 0;

    while (tab[count] != NULL)
        count += 1;
    return (count);
}
