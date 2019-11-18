/*
** EPITECH PROJECT, 2018
** lib
** File description:
** display a string
*/

#include "../include/util.h"

void string_put(char *str)
{
    write(1, str, string_lenght(str));
}

void string_print(char *str)
{
    printf("%s\n", str);
}
