/*
** EPITECH PROJECT, 2018
** lib
** File description:
** duplicate string
*/

#include "../include/util.h"

char *string_dup(char *str)
{
    char *dest = string_duplicate(str);

    if (dest == NULL)
        error_put("stringDup() : error\n", 84);
    return (dest);
}

char *string_duplicate(char *str)
{
    char *dest = string_malloc(string_lenght(str));

    for (int x = 0; x < string_lenght(str); x++)
        dest[x] = str[x];
    dest[string_lenght(str)] = '\0';
    return (dest);
}
