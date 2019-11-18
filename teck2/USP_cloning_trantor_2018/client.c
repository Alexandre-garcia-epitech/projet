/*
** EPITECH PROJECT, 2018
** client.c
** File description:
** client
*/

#include "./include/cloning_trantor.h"

void *client_set(void *arg)
{
    srv *srv = arg;
    int d = 0;
    char *cmd;
    char **cmdtab;
    int p = player_set(srv);

    client_connection(srv, p);
    while (1) {
        cmd = malloc(sizeof(char) * 100);
        cmd = file_read_line(srv->p_list[p]->sock);
        if (strlen(cmd) == 0 || cmd == NULL || strcmp(cmd, "\n") == 0)
        pthread_exit(NULL);
        if (d == 4)
            thread_exit_with_msg(NULL, srv->p_list[p]->sock, "dead\n");
        cmdtab = string_to_wordarray(cmd, ' ');
        client_cmd_check(srv, p, cmdtab);
        write(srv->p_list[p]->sock, srv->p_list[p]->rep,
        string_lenght(srv->p_list[p]->rep));
        d += 1;
    }
}

void client_connection(srv *srv, int p)
{
    char *s;
    char *b;

    write(srv->p_list[p]->sock, "WELCOME\n", 8);
    file_read_line(srv->p_list[p]->sock);
    b = malloc(sizeof(char) * 100);
    s = string_duplicate(int_to_string(srv->nb_client, b, 10));
    s = string_concat(s, "\n");
    free(b);
    b = malloc(sizeof(char) * 100);
    s = string_concat(s, int_to_string(srv->width, b, 10));
    s = string_concat(s, " ");
    free(b);
    b = malloc(sizeof(char) * 100);
    s = string_concat(s, int_to_string(srv->height, b, 10));
    s = string_concat(s, "\n");
    free(b);
    write(srv->p_list[p]->sock, s, string_lenght(s));
}

void client_cmd_check(srv *srv, int p, char **cmd)
{
    int i;

    for (int j = 0; j < array_lenght(cmd); j++) {
        i = client_check_cmd2(srv, p, cmd[j], cmd[j + 1]);
        if (i == 1)
            j += 1;
    }
}

int client_check_cmd2(srv *srv, int p, char *str, char *arg)
{
    for (int i = 0; i < array_lenght(srv->cmds); i++) {
        if (str == NULL)
            return (2);
        if (strcmp(str, srv->cmds[i]) == 0 && i < 5) {
            cmd_tab(srv, srv->p_list[p], "", i);
            return (0);
        }
        else if (strcmp(str, srv->cmds[i]) == 0 && i >= 5) {
            cmd_tab(srv, srv->p_list[p], arg, i);
            return (1);
        }
    }
}
