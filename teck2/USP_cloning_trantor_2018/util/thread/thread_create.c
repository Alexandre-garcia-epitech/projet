/*
** EPITECH PROJECT, 2018
** lib
** File description:
** thread create function
*/

#include "../include/util.h"

int thread_create(pthread_t *thread, pthread_attr_t *attr,
void *(*func)(void *), void *arg)
{
    int p;

    if (p = pthread_create(thread, attr, func, arg) != 0)
        error_perror("pthread_create() ", 84);
    return (p);
}
