/*
** EPITECH PROJECT, 2017
** remove.c
** File description:
** Removes an entry in a chained list
*/

#include <stddef.h>
#include "llist.h"

llnode_t ll_remove(llist_t list, llnode_t to_remove)
{
	llnode_t node = list->head;
	llnode_t next = NULL;

	while (node) {
		next = node->next;
		if (next == to_remove) {
			node->next = next->next;
			next = next->next;
			list->nb -= 1;
			return (next);
		}
		node = next;
	}
	return (NULL);
}

llnode_t ll_pop(llist_t list, unsigned int nb)
{
	llnode_t prev = list->head;
	llnode_t node = prev ? prev->next : NULL;

	while (nb != 0 && node) {
		prev = node;
		node = node->next;
		nb -= 1;
	}
	if (nb != 0)
		return (NULL);
	prev->next = prev->next->next;
	list->nb -= 1;
	return (node);
}
