/*
** EPITECH PROJECT, 2018
** lib
** File description:
** verif if the string passed as parameter is a number
*/

#include "../include/util.h"

bool string_is_number(char *str)
{
    for (int x = 0; x < string_lenght(str); x++) {
        if (str[x] < '0' || str[x] > '9')
            return (false);
    }
    return (true);
}
