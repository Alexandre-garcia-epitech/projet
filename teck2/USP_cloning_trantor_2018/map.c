/*
** EPITECH PROJECT, 2018
** map.c
** File description:
** map functions
*/

#include "./include/cloning_trantor.h"

void map_set(srv *srv)
{
    srv->m_list = malloc(sizeof(cell*) * srv->height);
    cell c;

    srand(time(NULL));
    for (int i = 0; i < srv->height; i++) {
        srv->m_list[i] = malloc(sizeof(cell) * srv->width);
        for (int j = 0; j < srv->width; j++) {
            map_fill(&c, i, j);
            srv->m_list[i][j] = c;
        }
    }
    srv->m_list[srv->height] = NULL;
}

void map_fill(cell *c, int i, int j)
{
    c->y = i;
    c->x = j;
    c->rsc = malloc(sizeof(int) * 8);
    c->rsc[0] = rand() % 3;
    c->rsc[1] = rand() % 5;
    c->rsc[2] = rand() % 3;
    c->rsc[3] = rand() % 3;
    c->rsc[4] = rand() % 3;
    c->rsc[5] = rand() % 3;
    c->rsc[6] = rand() % 2;
    c->rsc[7] = 0;
}

char *map_check(srv *srv, cell m, char *src)
{
    for (int i = 0; i < m.rsc[7]; i++) {
        src = string_concat(src, srv->items[7]);
        src = string_concat(src, " ");
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < m.rsc[i]; j++) {
            src = string_concat(src, srv->items[i]);
            src = string_concat(src, " ");
        }
    }
    src[string_lenght(src) - 1] = '\0';
    return (src);
}
