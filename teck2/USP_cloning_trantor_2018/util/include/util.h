/*
** EPITECH PROJECT, 2018
** Lib
** File description:
** header of util function
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/param.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <pthread.h>

#define UNUSED __attribute__((unused))

/*----------------*/
//Foleder : array

//File : array_display.c
void array_put(char **tab);
void array_print(char **tab);

//File : array_lenght.c
int array_lenght(char **tab);

//File : array_malloc.c
char **array_malloc(int line, int col);

/*----------------*/
//Folder : char

//File : char_display.c
void char_put(char c);
void char_print(char c);

/*----------------*/
//Folder : error

//File : error_display.c
void error_perror(char *str, int code);
void error_put(char *str, int code);

/*----------------*/
//Folder : file

//File : file_read.c
ssize_t file_read(int fd, char *dest, size_t len);
char *file_read_line(int fd);

/*----------------*/
//Folder : int

//File : int_to_string.c
void swap(char *x, char *y);
char *reverse(char *buffer, int i, int j);
char *int_to_string(int value, char* buffer, int base);

/*----------------*/
//Folder : socket

//File : socketAccept.c
int socket_accept(int sock, struct sockaddr *addr, socklen_t *len);

//File : socketBind.c
int socket_bind(int sock, struct sockaddr* server, socklen_t len);

//File : socketCreate.c
int socket_create(int family, int type, int protocol);

//File : socketListen.c
int socket_listen(int sock, int backlog);

/*----------------*/
//Folder : string

//File : string_compare.c
int string_compare_lenght(char *s1, char *s2);

//File : string_concat.c
char *string_concat(char *dest, char *str);

//File : string_display.c
void string_put(char *str);
void string_print(char *str);

//File : string_duplicate.c
char *string_dup(char *str);
char *string_duplicate(char *str);

//File : string_is_number.c
bool string_is_number(char *str);

//File : string_lenght.c
int string_lenght(char *str);

//File : string_malloc.c
char *string_malloc(int nbchar);

//File : string_remove.c
char *string_remove_char(char *str, char clear);

//File : string_to_int.c
int string_to_int(char *str);

//File : string_to_wordarray.c
char **string_to_wordarray(char *str, char sep);

/*----------------*/
//Folder : thread

//File : thread_create.c
int thread_create(pthread_t *thread, pthread_attr_t *attr,
void *(*func)(void *), void *arg);
int thread_exit_with_msg(char *exit, int fd, char *msg);
