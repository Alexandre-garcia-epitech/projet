/*
** EPITECH PROJECT, 2017
** ls_ls
** File description:
** ls_ls
*/

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include "../../include/my.h"
#include "../../include/my_ls.h"
#include <pwd.h>

//typedef void (*ptr) (char *flag);
//ptr ls_flag[5];

/*int	my_option(char **av, my_ls *ls)
{
	int i = 0;
		
	while (av[i]) {
		if (av[i][0] == '-') {
			if (my_check(&av[i][1],ls) != 0)
				printf("ERROR %s\n", av[i]);
		}
		i++;
	}
	return (0);
}

int	my_check(char *tab, my_ls *ls)
{
	char *str = "lRdrt";
	int j = 0;
	int k = 0;
	int l = -1;
	
	while (tab[j]) {
		k = 0;
		while (str[k]) {
			if (str[k] && str[k] == tab[j]) {
				l = 0;
				ls->tab[k] = 1;
			}
			k++;
		}
		j++;
	}
	return (l);
}
*/
int	LCL()
{
	struct dirent *rb;
	DIR *rep;
	rep = opendir(".");
	//int j = 0;
	//j = MMA();
	while ((rb = readdir(rep)) != NULL) {
		if ( rb->d_name[0] != '.')
			my_printf("%s ", rb->d_name);
}
	my_printf("\n");
	//my_printf("%d",j);
	closedir(rep);
	return (0);
}

 /*void	my_l(struct dirent *rb, DIR *rep, char *tab)
{
	struct stat nb;

	rep = opendir(tab);
	rb = readdir(rep);
	while(rb != NULL) {
		if (rb->d_name, &nb);
		ls_course(nb);
		(nb.st_mode & S_IRUSR) ? my_printf("r") : my_printf("-");
		(nb.st_mode & S_IWUSR) ? my_printf("w") : my_printf("-");
		(nb.st_mode & S_IXUSR) ? my_printf("x") : my_printf("-");
		(nb.st_mode & S_IRGRP) ? my_printf("r") : my_printf("-");
		(nb.st_mode & S_IWGRP) ? my_printf("w") : my_printf("-");
		(nb.st_mode & S_IXGRP) ? my_printf("x") : my_printf("-");
		(nb.st_mode & S_IROTH) ? my_printf("r") : my_printf("-");
		(nb.st_mode & S_IWOTH) ? my_printf("w") : my_printf("-");
		(nb.st_mode & S_IXOTH) ? my_printf("x. ") : my_printf("-. ");
		my_print_ls(nb, rb);
		my_printf("\n");
	}
	rb = readdir(rep);
}
 */
  /*
void	ls_course(struct stat nb)
{
	if (S_ISREG(nb.st_mode))
		my_printf("-");
	if (S_ISDIR(nb.st_mode))
		my_printf("d");
	if (S_ISCHR(nb.st_mode))
		my_printf("c");
	if (S_ISBLK(nb.st_mode))
		my_printf("b");
	if (S_ISLNK(nb.st_mode))
		my_printf("l@");
	if (S_ISFIFO(nb.st_mode))
		my_printf("p|");
	if (S_ISSOCK(nb.st_mode))
		my_printf("s=");
}

void	my_print_ls(struct stat nb, struct dirent *rb)
{
	struct passwd *pc_name = getpwuid(nb.st_uid);
	struct passwd *id_gid = getpwuid(nb.st_gid);
	my_printf("%d ", nb.st_nlink);
	my_printf("%s ", pc_name->pw_name);
	my_printf("%s ", id_gid->pw_name);
	my_printf("%d ", nb.st_size);
	my_printf(" %s", rb->d_name);
}
  */
/*void	flag(void)
{
        ls_flag[0] = &my_l;
	//ls_flag[1] = &my_R;
	//ls_flag[2] = &my_d;
	//ls_flag[3] = &my_r;
	//ls_flag[4] = &my_t;
}
*/
