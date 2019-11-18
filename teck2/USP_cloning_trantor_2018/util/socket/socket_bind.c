/*
** EPITECH PROJECT, 2018
** lib
** File description:
** link address with socket server
*/

#include "../include/util.h"

int socket_bind(int sock, struct sockaddr* s, socklen_t len)
{
    int b = bind(sock, s, len);

    if (b == -1)
        error_perror("bind() ", 84);
    return (b);
}
