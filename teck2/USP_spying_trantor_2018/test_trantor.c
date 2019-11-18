/*
** EPITECH PROJECT, 2018
** test_trantor.c
** File description:
** test_trantor.c
*/

#include "include/my.h"

int    test_dead_ext(int descript, char *str)
{
    if (strcmp(str, "dead\n") == 0) {
        close(descript);
        exit(0);
    }
    return (0);
}

int    test_cmd(char *str)
{
    if (strcmp(str, ""))
        exit(0);
    if ((strncmp(str, "drop", 4) != 0) && (strcmp(str, "look\n") != 0)
        && (strncmp(str, "taken", 4) != 0)
        && (strcmp(str, "inventory\n") != 0)
        && (strcmp(str, "right\n") != 0) && (strcmp(str, "left\n") != 0)
        && (strcmp(str, "forward\n") != 0))
        return (1);
    return (0);
}

int    error_server(char *str)
{
    if (strcmp(str, "WELCOME\n") != 0)
        exit(84);
    return (0);
}

int    test_error_team(char *str, char **av)
{
    if (strstr(str, "ko"))
        exit(84);
    write(1, "connected to a drone from ",
    my_strlen("connected to a drone from "));
    write(1, av[3], my_strlen(av[3]));
    write(1, " on port ", my_strlen(" on port "));
    write(1, av[2], my_strlen(av[2]));
    write(1, "\n", 1);
    return (0);
}

int    error_argument(int ac)
{
    if (ac != 4)
        exit(84);
    return (0);
}
