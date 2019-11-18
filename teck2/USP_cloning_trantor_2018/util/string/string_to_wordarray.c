/*
** EPITECH PROJECT, 2018
** lib
** File description:
** str to wordtab
*/

#include "../include/util.h"

int	nb_word(char *str, char sep)
{
    int i = 0;
    int nb = 1;

    while (str[i]) {
        if (str[i] == sep)
            nb += 1;
        i += 1;
    }
    return (nb);
}

char **string_to_wordarray(char *str, char sep)
{
    char **tab;
    int j = 1;

    if (str == NULL || strcmp(str, "") == 0)
        return (NULL);
    tab = malloc(sizeof(char*) * (nb_word(str, sep) + 1));
    tab[nb_word(str, sep)] = NULL;
    tab[0] = str;
    for (int i = 0; str[i]; i++) {
        if (str[i] == sep) {
            str[i] = 0;
            i += 1;
            tab[j] = &str[i];
            j += 1;
        }
    }
    return (tab);
}
