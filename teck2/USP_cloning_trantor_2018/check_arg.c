/*
** EPITECH PROJECT, 2018
** check_arg.c
** File description:
** verif arguments
*/

#include "./include/cloning_trantor.h"

int check_arg(char **tab)
{
    for (int i = 1; i < array_lenght(tab); i++) {
        if ((strcmp(tab[i], "-w") == 0 || strcmp(tab[i], "-h") == 0
        || strcmp(tab[i], "-p") == 0 || strcmp(tab[i], "-c") == 0
        || strcmp(tab[i], "-f") == 0) && (i + 1) < array_lenght(tab)) {
            i += 1;
            arg_check(tab, i);
        }
        else if (strcmp(tab[i], "-n") == 0 && (i + 1) < array_lenght(tab)
        && tab[i + 1][0] != '-') {
            for (i += 1; i < array_lenght(tab) && tab[i][0] != '-'; i++);
            if (i >= array_lenght(tab))
                return (0);
            i -= 1;
        }
        else {
            write(2, "bad arguments\n", 14);
            exit(84);
        }
    }
    return (0);
}

void arg_check(char **tab, int i)
{
    if (string_is_number(tab[i]) == false) {
        write(2, "bad arguments\n", 14);
        exit(84);
    }
}
