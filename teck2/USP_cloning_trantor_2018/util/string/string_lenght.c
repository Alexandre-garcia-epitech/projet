/*
** EPITECH PROJECT, 2018
** lib
** File description:
** return length of string
*/

#include "../include/util.h"

int string_lenght(char *str)
{
    int count;

    for (count = 0; str[count] != '\0'; count++);
    return (count);
}
