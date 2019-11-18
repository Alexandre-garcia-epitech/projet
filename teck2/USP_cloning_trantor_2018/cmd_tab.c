/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd tab functions
*/

#include "./include/cloning_trantor.h"

void cmd_tab(srv *serv, pj *ply, char *arg, int cmd)
{
    void (*tab[7])(srv*, pj*, char*);
    tab[0] = cmd_forward;
    tab[1] = cmd_left;
    tab[2] = cmd_right;
    tab[3] = cmd_look;
    tab[4] = cmd_inventory;
    tab[5] = cmd_take;
    tab[6] = cmd_drop;
    (tab[cmd])(serv, ply, arg);
}
