/*
** EPITECH PROJECT, 2018
** lib
** File description:
** put error and exit program
*/

#include "../include/util.h"

void error_perror(char *str, int code)
{
    perror(str);
    exit(code);
}

void error_put(char *str, int code)
{
    write(2, str, string_lenght(str));
    exit(code);
}
