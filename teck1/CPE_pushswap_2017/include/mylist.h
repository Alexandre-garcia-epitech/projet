/*
** EPITECH PROJECT, 2017
** struct
** File description:
** struct
*/

#ifndef MYLIST_H_
#define MYLIST_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct element
{
	int save;
	struct element *next;
	struct element *prev;
}t_element;

typedef struct linked_list
{
	t_element *first;
	t_element *last;
}t_linked;

/*	FONCTIONS	*/

t_linked	*get_list(int nb);
void		add_element(t_linked *list, int nb);
void		my_putchar(char c);
int		my_putstr(char *str);
int		display_loop_(int fin, int nb, int ch);
int		my_put_nbr(int nb);
int		my_print_list(t_linked *list);
int		check_flag(char *str, va_list ap);
int		my_tab_flag(va_list ap, int j);
int		my_c(va_list ap);
int		my_s(va_list ap);
int		my_i(va_list ap);
int		my_b(va_list ap);
int		my_o(va_list ap);
int		my_X(va_list ap);
int		my_x(va_list ap);
int		my_d(va_list ap);
int		my_u(va_list ap);
int		my_modulo(va_list ap);
int		my_p(va_list ap);
int		my_printf(char *str, ...);
void		 my_put_nbr_base(int c, char *base);
int		display(int fin,int nb, int ch);
void		my_put_nbr_base_bin(unsigned int nbr);
void		my_put_nbr_base_oct(unsigned int nbr);
void		my_put_nbr_base_hex_caps(unsigned int nbr);
void		my_put_nbr_base_hex(unsigned int nbr);
int		my_put_nbr_unsigned_int(int nb);
int		display_unsigned_int(unsigned int fin, int nb, unsigned int ch);
int		my_printf(char *str, ...);
int		my_getnbr(char const *str);
void		my_swap_list(t_linked *list);
int		my_sa_fonction(t_linked *la);
int		my_sb_fonction(t_linked *lb);
int		my_sc_fonction(t_linked *la, t_linked *lb);
void		my_rev_list(t_linked *list, t_linked *lb);
int		my_pb_fonction(t_linked *la, t_linked *lb);
void		my_rev_fonction(t_linked *list);
int		my_ra_fonction(t_linked *la);
#endif /* !MYLIST_H_ */
