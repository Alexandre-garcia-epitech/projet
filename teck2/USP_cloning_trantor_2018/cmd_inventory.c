/*
** EPITECH PROJECT, 2018
** Cloning_Trantor
** File description:
** cmd inventory function
*/

#include "./include/cloning_trantor.h"

void cmd_inventory(srv *srv, pj *pj, UNUSED char *a)
{
    char *str = string_duplicate("[food ");
    char str2[10];

    str = string_concat(str, int_to_string(pj->inv[1], str2, 10));
    str = string_concat(str, ", sibur ");
    str = string_concat(str, int_to_string(pj->inv[5], str2, 10));
    str = string_concat(str, ", phiras ");
    str = string_concat(str, int_to_string(pj->inv[4], str2, 10));
    str = string_concat(str, ", linemate ");
    str = string_concat(str, int_to_string(pj->inv[2], str2, 10));
    str = string_concat(str, ", mendiane ");
    str = string_concat(str, int_to_string(pj->inv[3], str2, 10));
    str = string_concat(str, ", thystame ");
    str = string_concat(str, int_to_string(pj->inv[6], str2, 10));
    str = string_concat(str, ", deraumere ");
    str = string_concat(str, int_to_string(pj->inv[0], str2, 10));
    str = string_concat(str, "]\n");
    pj->rep = string_duplicate(str);
}
