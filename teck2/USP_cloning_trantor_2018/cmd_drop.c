/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd drop functions
*/

#include "./include/cloning_trantor.h"

void cmd_drop(srv *srv, pj *pj, char *a)
{
    pj->rep = string_duplicate("ko\n");
    for (int y = 0; y < (array_lenght(srv->items) -1); y++) {
        if (strcmp(a, srv->items[y]) == 0)
            drop(srv, pj, y);
    }
}

void drop(srv *srv, pj *pj, int i)
{
    if (pj->inv[i] > 0) {
        pj->inv[i] -= 1;
        srv->m_list[pj->y][pj->x].rsc[i] += 1;
        pj->rep = string_duplicate("ok\n");
    }
}
