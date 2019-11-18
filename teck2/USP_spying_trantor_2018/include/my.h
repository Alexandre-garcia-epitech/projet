/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <stdio.h>
#include <netinet/ip.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/param.h>
#define BUFF 4096

	/* !trantor */
void    loop_function(int descript, char **av);
int    send_info_team(int descript, char **av);
int    main(int ac, char **av);
	/* !TEST */
int    test_dead_ext(int descript, char *str);
int    test_cmd(char *str);
int    error_server(char *str);
int    test_error_team(char *str, char **av);
int    error_argument(int ac);
	/* !SCND_TEST */
int    test_port(char *str);
int    error_socket(int descript);
int    error_connection(int connection, char **av);
	/* !STRLEN */
int    my_strlen(char *str);

#endif /* !MY_H_ */
