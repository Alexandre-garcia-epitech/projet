/*
** EPITECH PROJECT, 2018
** server.c
** File description:
** set server
*/

#include "include/cloning_trantor.h"

void srv_set(srv *srv, char **tab)
{
    srv->port = srv_fill_arg(tab, "-p", 4242);
    srv->nb_client = srv_fill_arg(tab, "-c", 2);
    srv->height = srv_fill_arg(tab, "-h", 10);
    srv->width = srv_fill_arg(tab, "-w", 10);
    srv->freq = srv_fill_arg(tab, "-f", 100);
    srv->p_list = malloc(sizeof(pj*) * 1);
    srv->p_list[0] = NULL;
    srv->items = malloc(sizeof(char*) * 9);
    srv->cmds = malloc(sizeof(char*) * 8);
    srv_set_items(srv);
    srv_set_cmds(srv);
    srv->addr_srv.sin_family = AF_INET;
    srv->addr_srv.sin_port = htons(srv->port);
    srv->addr_srv.sin_addr.s_addr = htonl(INADDR_ANY);
    map_set(srv);
}

int srv_fill_arg(char **tab, char *str, int z)
{
    for (int i = 0; i < array_lenght(tab); i++) {
        if (strcmp(tab[i], str) == 0)
            return (string_to_int(tab[i + 1]));
    }
    return (z);
}

void srv_set_cmds(srv *srv)
{
    srv->cmds[0] = string_duplicate("forward");
    srv->cmds[1] = string_duplicate("left");
    srv->cmds[2] = string_duplicate("right");
    srv->cmds[3] = string_duplicate("look");
    srv->cmds[4] = string_duplicate("inventory");
    srv->cmds[5] = string_duplicate("take");
    srv->cmds[6] = string_duplicate("drop");
    srv->cmds[7] = NULL;
}

void srv_set_items(srv *srv)
{
    srv->items[0] = string_duplicate("deraumere");
    srv->items[1] = string_duplicate("food");
    srv->items[2] = string_duplicate("linemate");
    srv->items[3] = string_duplicate("mendiane");
    srv->items[4] = string_duplicate("phiras");
    srv->items[5] = string_duplicate("sibur");
    srv->items[6] = string_duplicate("thystame");
    srv->items[7] = string_duplicate("player");
    srv->items[8] = NULL;
}
