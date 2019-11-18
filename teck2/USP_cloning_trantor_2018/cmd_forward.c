/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd forward function
*/

#include "./include/cloning_trantor.h"

void cmd_forward(srv *srv, pj *pj, UNUSED char *a)
{
    srv->m_list[pj->y][pj->x].rsc[7] -= 1;
    pj->x = pj->fwd_x;
    pj->y = pj->fwd_y;
    switch (pj->move) {
    case 1:
        forward_right(srv, pj);
        break;
    case 2:
        forward_bottom(srv, pj);
        break;
    case 3:
        forward_left(srv, pj);
        break;
    case 4:
        forward_top(srv, pj);
        break;
    }
    srv->m_list[pj->y][pj->x].rsc[7] += 1;
    pj->rep = string_duplicate("ok\n");
}

void forward_right(srv *srv, pj *pj)
{
    pj->fwd_x += 1;
    if (pj->fwd_x >= srv->width)
        pj->fwd_x = 0;
}

void forward_bottom(srv *srv, pj *pj)
{
    pj->fwd_y += 1;
    if (pj->fwd_y >= srv->height)
        pj->fwd_y = 0;
}

void forward_left(srv *srv, pj *pj)
{
    pj->fwd_x -= 1;
    if (pj->fwd_x < 0)
        pj->fwd_x = (srv->width - 1);
}

void forward_top(srv *srv, pj *pj)
{
    pj->fwd_y -= 1;
    if (pj->fwd_y < 0)
        pj->fwd_y = (srv->height - 1);
}
