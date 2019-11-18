/*
** EPITECH PROJECT, 2018
** trantor_main.c
** File description:
** main
*/

#include "include/cloning_trantor.h"

void main(int ac, char **av)
{
    srv *srv = malloc(sizeof(*srv));
    int len = sizeof(srv->addr_clt);
    pthread_t thid;

    check_arg(av);
    srv_set(srv, av);
    srv->sock_srv = socket_create(AF_INET, SOCK_STREAM, 0);
    socket_bind(srv->sock_srv, (struct sockaddr*)&(srv->addr_srv),
    sizeof(srv->addr_srv));
    socket_listen(srv->sock_srv, 5);
    while (1) {
        srv->sock_clt = socket_accept(srv->sock_srv,
        (struct sockaddr*)&(srv->addr_clt), &len);
        thread_create(&thid, NULL, client_set, (void*)srv);
    }
}
