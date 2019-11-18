/*
** EPITECH PROJECT, 2018
** lib
** File description:
** function for socket
*/

#include "../include/util.h"

int socket_create(int family, int type, int protocol)
{
    int sock = socket(family, type, protocol);

    if (sock == -1)
        error_perror("socket() ", 84);
    return (sock);
}
