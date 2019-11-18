/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>
#include <curses.h>

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
char	*my_strcpy(char *dest, char const *src);
char	*my_revstr(char *str);
char	*my_strstr(char *str);
int	check_flag(char *str, va_list ap);
int	my_tab_flag(va_list ap, int j);
int	my_c(va_list ap);
int	my_s(va_list ap);
int	my_i(va_list ap);
int	my_b(va_list ap);
int	my_o(va_list ap);
int	my_X(va_list ap);
int	my_x(va_list ap);
int	my_d(va_list ap);
int	my_u(va_list ap);
int	my_modulo(va_list ap);
int	my_p(va_list ap);
int	my_printf(char *str, ...);
void     my_put_nbr_base(int c, char *base);
int	display(int fin,int nb, int ch);
void    my_put_nbr_base_bin(unsigned int nbr);
void	my_put_nbr_base_oct(unsigned int nbr);
void	my_put_nbr_base_hex_caps(unsigned int nbr);
void	my_put_nbr_base_hex(unsigned int nbr);
int	my_put_nbr_unsigned_int(int nb);
int	display_unsigned_int(unsigned int fin, int nb, unsigned int ch);
int	my_sokoban_h();
int	main(int ac, char **av);
char	*initmap(char *str);
int	map(char *str);
