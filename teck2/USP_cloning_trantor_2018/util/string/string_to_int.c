/*
** EPITECH PROJECT, 2018
** lib
** File description:
** convert string to integer
*/

#include "../include/util.h"

int	string_to_int(char *str)
{
    if (str == NULL)
        return (-1);
    return (atoi(str));
}
