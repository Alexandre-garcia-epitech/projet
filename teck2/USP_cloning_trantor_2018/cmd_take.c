/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd take functions
*/

#include "./include/cloning_trantor.h"

void cmd_take(srv *srv, pj *pj, char *a)
{
    pj->rep = string_duplicate("ko\n");
    for (int y = 0; y < (array_lenght(srv->items) - 1); y++) {
        if (strcmp(a, srv->items[y]) == 0)
            take(srv, pj, y);
    }
}

void take(srv *srv, pj *pj, int i)
{
    if (srv->m_list[pj->y][pj->x].rsc[i] > 0) {
        srv->m_list[pj->y][pj->x].rsc[i] -= 1;
        pj->inv[i] += 1;
        pj->rep = string_duplicate("ok\n");
    }
}
