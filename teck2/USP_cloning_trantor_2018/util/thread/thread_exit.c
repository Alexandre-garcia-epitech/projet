/*
** EPITECH PROJECT, 2018
** lib
** File description:
** thread create function
*/

#include "../include/util.h"

int thread_exit_with_msg(char *exit, int fd, char *msg)
{
    write(fd, msg, string_lenght(msg));
    pthread_exit(exit);
}
