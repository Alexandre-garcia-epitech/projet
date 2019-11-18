/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd left function
*/

#include "./include/cloning_trantor.h"

void cmd_left(srv *srv, pj *pj, UNUSED char *a)
{
    pj->move -= 1;
    if (pj->move < 1)
        pj->move = 4;
    pj->fwd_y = pj->y;
    pj->fwd_x = pj->x;
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
    pj->rep = "ok\n";
}
