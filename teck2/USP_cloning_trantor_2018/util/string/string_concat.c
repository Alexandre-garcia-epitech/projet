/*
** EPITECH PROJECT, 2018
** lib
** File description:
** second string add in first string
*/

#include "../include/util.h"

char *string_concat(char *dest, char *str)
{
    int data[4] = {0, 0, 0, 0};
    char *temp = dest;

    data[0] = string_lenght(dest);
    data[1] = string_lenght(str);
    dest = string_malloc(data[0] + data[1]);
    for (data[2] = 0; data[2] < data[0]; data[2]++)
        dest[data[2]] = temp[data[2]];
    for (data[3] = 0; data[3] < data[1]; data[3]++)
        dest[data[2] + data[3]] = str[data[3]];
    dest[data[2] + data[3]] = '\0';
    return (dest);
}
