/*
** EPITECH PROJECT, 2018
** lib
** File description:
** malloc string
*/

#include "../include/util.h"

char *string_malloc(int nbchar)
{
    char *str = malloc(sizeof(char) * (nbchar + 1));

    if (str == NULL)
        error_put("stringMalloc() : error\n", 84);
    return (str);
}
