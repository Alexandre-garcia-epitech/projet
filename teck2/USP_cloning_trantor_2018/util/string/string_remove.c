/*
** EPITECH PROJECT, 2018
** lib
** File description:
** remove functions
*/

#include "../include/util.h"

char *string_remove_char(char *str, char clear)
{
    char *dest = string_malloc(string_lenght(str));
    int x2 = 0;

    for (int x1 = 0; x1 < string_lenght(str); x1++) {
        if (str[x1] != clear) {
            dest[x2] = str[x1];
            x2 += 1;
        }
    }
    dest[x2] = '\0';
    return (dest);
}
