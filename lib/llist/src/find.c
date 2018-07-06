/*
** EPITECH PROJECT, 2017
** find.c
** File description:
** Find in a chained list
*/

#include <stddef.h>
#include "llist.h"

llnode_t ll_find_predicate(llist_t list, int (*predicate)(llnode_t node))
{
	for (llnode_t node = list->head; node; node = node->next) {
		if (predicate(node))
			return (node);
	}
	return (NULL);
}

llnode_t ll_find_data(llist_t list, void *data_to_find)
{
	for (llnode_t node = list->head; node; node = node->next) {
		if (node->data == data_to_find)
			return (node);
	}
	return (NULL);
}

llnode_t ll_find_node(llist_t list, llnode_t node_to_find)
{
	for (llnode_t node = list->head; node; node = node->next) {
		if (node == node_to_find)
			return (node);
	}
	return (NULL);
}

llnode_t ll_goto(llist_t list, unsigned int nb)
{
	llnode_t result = 0;

	result = list->head;
	while (nb > 0 && result) {
		nb -= 1;
		result = result->next;
	}
	return (result);
}
