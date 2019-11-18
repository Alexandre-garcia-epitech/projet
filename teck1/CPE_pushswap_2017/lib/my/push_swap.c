/*
** EPITECH PROJECT, 2017
** push_swap
** File description:
** push_swap
*/

#include <stdlib.h>
#include "../../include/mylist.h"

void	my_swap_list(t_linked *list)
{
	t_element *stock = list->first;
	t_element *stock2 = list->first->next->next;

	if (list->first->next == list->last)
		list->last = stock;
	list->first = list->first->next;
	list->first->prev = list->last;
	list->last->next = list->first;
	if (list->first->next != stock) {
		stock2->prev = stock;
		stock->next = stock2;
        }
	stock->prev = list->first;
	list->first->next = stock;
}

int	my_sa_fonction(t_linked *la)
{
	if (la != NULL && la->first != la->last)
		my_swap_list(la);
	my_printf("%s \n", "sa");
	return (0);
}

void	my_rev_fonction(t_linked *list)
{
	t_element *stock = list->first;

	list->first = stock;
	stock = list->first;
	list->first = list->last;
	list->last = list->first;
}

int	my_ra_fonction(t_linked *la)
{
	if (la != NULL && la->first != la->last)
		my_ra_fonction(la);
	my_printf("%s \n", "ra");
	return (0);
}

void	my_rev_list(t_linked *list, t_linked *lb)
{
	t_element *stock2 = list->first->next;
	//t_element *stock2 = list->first->next->next;
	//t_element *stock = list->first;
	if (lb->first == NULL) {
		lb->first = list->first;
		lb->last = list->first;
		lb->first->next = lb->first;
		lb->first->prev = lb->first;
		list->first = stock2;
		list->last->next = stock2;
		stock2->prev = list->last;
		
	}
	
	else if (lb->first != NULL) {
/*		lb->first = list->first;
		lb->first = lb->last;
		lb->last->prev = list->first;
		//list->first= lb->last->next;
		lb->last->next = list->first;
		lb->first->next->next = lb->first;
		lb->first->prev = lb->first;
		list->first = stock2;
		list->last->next = stock2;
		stock2->prev = lb->last;
		list->last = stock;
		stock2 = lb->last;
		lb->first = list->first;
		lb->first->next = lb->last;
		lb->first->prev = lb->last;
		lb->last->next = list->first;
		lb->last->prev = list->first;
		//stock2 = list->first;
		list->first = list->first->next;
		//stock3 = list->first->next; 
		
		  lb->first->next = list->last->prev;
		  lb->first->next->prev = lb->last->prev;
		  lb->first->next->next = lb->last;
		  list->first = stock;
		  list->last->next =stock;
		  stock2->prev = list->last; */
	}
}

/*swich = lb->first;
  swich = list->first;
	//list = list->first->prev;
	//list-> = list->first;
	swich = lb->first;
	lb->first = swich;
	free (lb);*/

int	my_pb_fonction(t_linked *la, t_linked *lb)
{
	if (lb != NULL) {
		my_rev_list(la, lb);
	my_printf("%s\n", "pb");
	}
	return (0);
}

int	my_sb_fonction(t_linked *lb)
{
	if (lb !=NULL && lb->first != lb->last)
		my_swap_list(lb);
	my_printf("%s ", "sb");
	return (0);
}


int	my_sc_fonction(t_linked *la, t_linked *lb)
{
	if (lb != NULL && lb ->first != lb->last)
		my_swap_list(lb);
        if (la != NULL && la->first != la->last)
		my_swap_list(la);
	my_printf("%s ", "sc");
	return (0);
}

