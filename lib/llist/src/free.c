/*
** EPITECH PROJECT, 2017
** free.c
** File description:
** Frees a chained lists
*/

#include <stdlib.h>
#include "llist.h"

void ll_free_node(llnode_t node)
{
	free(node);
}

void ll_empty(llist_t list)
{
	llnode_t next;

	while (list->head) {
		next = list->head->next;
		ll_free_node(list->head);
		list->head = next;
	}
}

void ll_free(llist_t list)
{
	ll_empty(list);
	free(list);
}

void ll_empty_free_data(llist_t list)
{
	llnode_t next;

	while (list->head) {
		next = list->head->next;
		free(list->head->data);
		ll_free_node(list->head);
		list->head = next;
	}
}
