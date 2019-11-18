/*
** EPITECH PROJECT, 2018
** lib
** File description:
** compare two string
*/

#include "../include/util.h"

int	string_compare_lenght(char *s1, char *s2)
{
    if (string_lenght(s1) < string_lenght(s2))
        return (-1);
    else if (string_lenght(s1) > string_lenght(s2))
        return (1);
    else
        return (0);
}
