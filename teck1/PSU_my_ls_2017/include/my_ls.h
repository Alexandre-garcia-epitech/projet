/*
** EPITECH PROJECT, 2017
** ls
** File description:
** ls
*/



#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

typedef struct element
{
	char *name;
	struct element *next;
	struct element *prev;
}t_element;

typedef struct my_ls
{
	t_element *list;
	char ** path;
	int tab[5];
}my_ls;

//typedef	void (*ptr) (char *flag);
//ptr ls_flag[5];

int	my_option(char **av, my_ls *ls);
int	my_check(char *flag, my_ls *ls);
int	my_putstr(char *str);
void    my_l(struct dirent *rb, DIR *rep, char *flag);
void    ls_course(struct stat nb);
void    my_print_ls(struct stat nb, struct dirent *rb);
int     main(int ac, char **av);
