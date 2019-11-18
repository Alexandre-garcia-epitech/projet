/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include "../util/include/util.h"

typedef struct pj {
    int x;
    int y;
    int fwd_x;
    int fwd_y;
    int move;
    int lvl;
    int sock;
    char *rep;
    int *inv;
}pj;

typedef struct cell {
    int x;
    int y;
    int *rsc;
}cell;

typedef struct srv {
    int port;
    int nb_client;
    int height;
    int width;
    int freq;
    pj **p_list;
    cell **m_list;
    struct sockaddr_in addr_srv;
    struct sockaddr_in addr_clt;
    char **items;
    char **cmds;
    int sock_srv;
    int sock_clt;
}srv;

int check_arg(char **tab);
void arg_check(char **tab, int i);

void *client_set(void *arg);
void client_connection(srv *srv, int p);
void client_cmd_check(srv *srv, int p, char **cmd);
int client_check_cmd2(srv *srv, int p, char *str, char *arg);

void cmd_drop(srv *srv, pj *pj, char *a);
void drop(srv *srv, pj *pj, int i);

void cmd_forward(srv *srv, pj *pj, UNUSED char *a);
void forward_right(srv *srv, pj *pj);
void forward_bottom(srv *srv, pj *pj);
void forward_left(srv *srv, pj *pj);
void forward_top(srv *srv, pj *pj);

void cmd_inventory(srv *srv, pj *pj, UNUSED char *a);

void cmd_left(srv *srv, pj *pj, UNUSED char *a);

void cmd_look(srv *srv, pj *pj, UNUSED char *a);
char *look_right(srv *srv, pj *pj, char *str);
char *look_bottom(srv *srv, pj *pj, char *str);
char *look_left(srv *srv, pj *pj, char *str);
char *look_top(srv *srv, pj *pj, char *str);

void cmd_right(srv *srv, pj *pj, UNUSED char *a);

void cmd_tab(srv *srv, pj *pj, char *arg, int cmd);

void cmd_take(srv *srv, pj *pj, char *a);
void take(srv *srv, pj *pj, int i);

void map_set(srv *srv);
void map_fill(cell *c, int i, int j);
char *map_check(srv *srv, cell m, char *src);

int player_set(srv *srv);
void player_set2(srv *srv, pj *pj);
int player_fwd_x(int x, int view, int max);
int player_fwd_y(int y, int view, int max);

void srv_set(srv *srv, char **tab);
int srv_fill_arg(char **tab, char *str, int z);
void srv_set_cmds(srv *srv);
void srv_set_items(srv *srv);

#endif /*MY_H_*/
