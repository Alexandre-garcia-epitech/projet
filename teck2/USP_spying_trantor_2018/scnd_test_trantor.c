/*
** EPITECH PROJECT, 2018
** scnd_test_trantor
** File description:
** scnd_test_trantor
*/

#include "include/my.h"

int    test_port(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < '0' || str[a] > '9')
	    exit(84);
	a = a + 1;
    }
    return (0);
}

int    error_socket(int descript)
{
    if (descript == -1)
        exit(84);
    return (0);
}

int    error_connection(int connection, char **av)
{
    if (connection == -1)
        exit(84);
    return (0);
}
