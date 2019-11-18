/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

int     display_loop(int fin, int nb, int ch)
{
  while (fin >= 1) {
    ch = nb / fin;
    nb = nb - ch * fin;
    ch = ch + 48;
    my_putchar(ch);
    fin = fin / 10;
  }
  return (0);
}

int     my_put_nbr(int nb)
{
  int fin = 1;
  int ch = 0;

  if (nb < 0) {
    my_putchar(45);
    nb = nb * (-1);
  }
  if (nb != 0) {
    while (fin <= nb) {
      fin = fin * 10;
    }
    fin = fin / 10;
  }
  display_loop(fin, nb, ch);
  return (0);
}
