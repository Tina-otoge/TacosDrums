/*
** EPITECH PROJECT, 2017
** free.c
** File description:
** Frees a chained lists
*/

#include <stdlib.h>
#include "llist.h"

void ll_free(llist_t list)
{
	llnode_t next = NULL;

	while (list->head) {
		next = list->head->next;
		free(list->head);
		list->head = next;
	}
	free(list);
}
