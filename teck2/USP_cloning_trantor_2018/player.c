/*
** EPITECH PROJECT, 2018
** player.c
** File description:
** player
*/

#include "./include/cloning_trantor.h"

int player_set(srv *srv)
{
    int x = 0;
    pj *p = malloc(sizeof(*p));

    p->sock = srv->sock_clt;
    srand(time(NULL));
    player_set2(srv, p);
    for (x = 0; srv->p_list[x] != NULL; x++);
    srv->p_list = realloc(srv->p_list, sizeof(pj*) * (x + 2));
    srv->p_list[x] = p;
    srv->p_list[x + 1] = NULL;
    return (x);
}

void player_set2(srv *srv, pj *pj)
{
    pj->move = rand() % (5 - 1) + 1;
    pj->x = rand() % srv->width;
    pj->y = rand() % srv->height;
    srv->m_list[pj->y][pj->x].rsc[7] += 1;
    pj->fwd_x = player_fwd_x(pj->x, pj->move, srv->width);
    pj->fwd_y = player_fwd_y(pj->y, pj->move, srv->height);
    pj->inv = malloc(sizeof(int) * 7);
    for (int y = 0; y < 7; y++) {
        if (y == 1)
            pj->inv[y] = 10;
        else
            pj->inv[y] = 0;
    }
    pj->lvl = 1;
}

int player_fwd_x(int x, int view, int max)
{
    switch (view) {
    case 1:
        if ((x += 1) >= max)
            return (0);
        break;
    case 3:
        if ((x -= 1) < 0)
            return (max - 1);
        break;
    }
    return (x);
}

int player_fwd_y(int y, int view, int max)
{
    switch (view) {
    case 2:
        if ((y += 1) >= max)
            return (0);
        break;
    case 4:
        if ((y -= 1) < 0)
            return (max - 1);
        break;
    }
    return (y);
}
