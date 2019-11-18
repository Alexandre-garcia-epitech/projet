/*
** EPITECH PROJECT, 2018
** lib
** File description:
** accept connection for socket server
*/

#include "../include/util.h"

int socket_accept(int sock, struct sockaddr *addr, socklen_t *len)
{
    int a = accept(sock, addr, len);

    if (a == -1)
        error_perror("accept() ", 84);
    return (a);
}
