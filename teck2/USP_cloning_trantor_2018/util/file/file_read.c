/*
** EPITECH PROJECT, 2018
** lib
** File description:
** read size character in the file descriptor
*/

#include "../include/util.h"

ssize_t file_read(int fd, char *dest, size_t len)
{
    int r = read(fd, dest, len);

    if (r == -1)
        error_perror("read() ", 84);
    if (dest == NULL)
        return (-1);
    return (r);
}

char *file_read_line(int fd)
{
    char c;
    int len = 10;
    char *dest = string_malloc(len);
    int z;

    for (int x = 0; (z = file_read(fd, &c, 1)) != 0
    && z != -1 && c != '\n'; x++) {
        if (x >= len) {
            len += 10;
            dest = realloc(dest, sizeof(char) * len);
        }
        if (c != 0)
            dest[x] = c;
    }
    return (dest);
}
