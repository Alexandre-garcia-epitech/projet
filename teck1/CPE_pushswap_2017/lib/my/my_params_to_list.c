/*
** EPITECH PROJECT, 2017
** my_params_to_list
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include "../../include/mylist.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

t_linked *get_list(int nb)
{
	t_element *element = malloc(sizeof(*element));   
	t_linked *list = malloc(sizeof(*list));

	element->save = nb;
	element->next = element;
	element->prev = element;
	list->first = element;
	list->last = element;
	return (list);
}

void	add_element(t_linked *list, int nb)
{
	t_element *new_elem = malloc(sizeof(*new_elem));

	new_elem->save = nb;
	new_elem->prev = list->last;
	list->last->next = new_elem;
	list->last = new_elem;
	list->last->next = list->first;
	list->first->prev = list->last;
}

int	my_print_list(t_linked *list)
{
	t_element *tmp;

	if (list == NULL) {
		printf("liste = NULL");
		return (0);
        }
	tmp = list->first;
	my_printf("%i ", tmp->save);
	tmp = tmp->next;
	while (tmp != list->first) {
		my_printf("%i ", tmp->save);
		tmp = tmp->next;
	}
	return (0);
}

int main(int ac, char **av)
{
	t_linked *la;
	t_linked *lb = malloc(sizeof(*lb)); //= NULL;
	int i = 2;

	if (ac == 1) {
		my_printf("%s\n", "too few args");
		return (84);
	}
	if (ac == 2) {
		my_printf("\n");
		return (0);
	}
	la = get_list(my_getnbr(av[1]));
	while (i < ac) {
		add_element(la, my_getnbr(av[i]));
		i++;
	}
	// my_print_list(la);
	//my_sa_fonction(la);
	//my_pb_fonction(la, lb);
	//my_pb_fonction(la, lb);
	my_pb_fonction(la,lb);
	my_print_list(la);
	my_printf("\n");
	my_print_list(lb);
	return (0);
}
