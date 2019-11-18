/*
** EPITECH PROJECT, 2018
** lib
** File description:
** define the queue of connection for socket server
*/

#include "../include/util.h"

int socket_listen(int sock, int backlog)
{
    int lst = listen(sock, backlog);

    if (lst == -1)
        error_perror("listen() ", 84);
    return (lst);
}
