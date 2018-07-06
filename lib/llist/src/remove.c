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
	llnode_t prev = NULL;

	if (list->head == to_remove) {
		list->head = list->head->next;
		return (list->head);
	}
	while (node) {
		prev = node;
		node = node->next;
		if (node == to_remove) {
			prev->next = node->next;
			list->nb -= 1;
			return (node);
		}
	}
	return (NULL);
}

llnode_t ll_pop(llist_t list, unsigned int nb)
{
	llnode_t result = list->head;
	llnode_t prev = NULL;

	while (nb != 0 && result) {
		prev = result;
		result = result->next;
		nb -= 1;
	}
	if (!result)
		return (NULL);
	prev->next = prev->next->next;
	list->nb -= 1;
	return (result);
}
