/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** my_ls
*/

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "../../include/my.h"

int	MMA()
{
	struct dirent *rb;
	DIR *rep;
	rep = opendir(".");
	int i = 0;
	while ((rb = readdir(rep))!=NULL) {	
		if(rb->d_name[0] != '.')
			i++;
	}
	closedir(rep);
	return (i);
}
