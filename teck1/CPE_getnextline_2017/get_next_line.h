/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>

#ifndef READ_SIZE
# define READ_SIZE 4096

char	*get_next_line(const int fd);
void	my_memset(char *str, int buffsize);
char	*re_malloc(void);
# endif /* !READ_SIZE */
#endif /*!GET_NEXT_LINE_H_ */
