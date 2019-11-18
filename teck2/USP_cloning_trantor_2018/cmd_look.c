/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd look functions
*/

#include "./include/cloning_trantor.h"

void cmd_look(srv *srv, pj *pj, UNUSED char *a)
{
    char *str = string_duplicate("[");

    switch (pj->move) {
    case 1:
        str = look_right(srv, pj, str);
        break;
    case 2:
        str = look_bottom(srv, pj, str);
        break;
    case 3:
        str = look_left(srv, pj, str);
        break;
    case 4:
        str = look_top(srv, pj, str);
        break;
    }
    str = string_concat(str, "]\n");
    pj->rep = string_duplicate(str);
}

char *look_right(srv *srv, pj *pj, char *str)
{
    int p1;
    int p2;

    for (int x = 0; x <= pj->lvl; x = (x + 1) % srv->width) {
        p1 = abs((pj->x + x) % srv->width);
        for (int y = -x; y <= x; y = (y + 1) % srv->height) {
            p2 = abs((pj->y - y) % srv->height);
            str = map_check(srv, srv->m_list[p2][p1], str);
            if (x != pj->lvl || y != x)
                str = string_concat(str, ", ");

        }
    }
    return (str);
}

char *look_bottom(srv *srv, pj *pj, char *str)
{
    int p1;
    int p2;

    for (int y = 0; y <= pj->lvl; y = (y + 1) % srv->height) {
        p1 = abs((pj->y + y) % srv->height);
        for (int x = -y; x <= y; x = (x + 1) % srv->width) {
            p2 = abs((pj->x - x) % srv->width);
            str = map_check(srv, srv->m_list[p1][p2], str);
            if (y != pj->lvl || x != y)
                str = string_concat(str, ", ");
        }
    }
    return (str);
}

char *look_left(srv *srv, pj *pj, char *str)
{
    int p1;
    int p2;

    for (int x = 0; x <= pj->lvl; x = (x + 1) % srv->width) {
        p1 = abs((pj->x - x) % srv->width);
        for (int y = -x; y <= x; y = (y + 1) % srv->height) {
            p2 = abs((pj->y - y) % srv->height);
            str = map_check(srv, srv->m_list[p2][p1], str);
            if (x != pj->lvl || y != x)
                str = string_concat(str, ", ");
        }
    }
    return (str);
}

char *look_top(srv *srv, pj *pj, char *str)
{
    int p1;
    int p2;

    for (int y = 0; y <= pj->lvl; y = (y + 1) % srv->height) {
        p1 = abs((pj->y - y) % srv->height);
        for (int x = -y; x <= y; x = (x + 1) % srv->width) {
            p2 = abs((pj->x - x) % srv->width);
            str = map_check(srv, srv->m_list[p1][p2], str);
            if (y != pj->lvl || x != y)
                str = string_concat(str, ", ");
        }
    }
    return (str);
}
