/*
** EPITECH PROJECT, 2018
** lib
** File description:
** display a character
*/

#include "../include/util.h"

void char_put(char c)
{
    write(1, &c, 1);
}

void char_print(char c)
{
    printf("%c\n", c);
}
