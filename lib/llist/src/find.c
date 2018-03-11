/*
** EPITECH PROJECT, 2017
** find.c
** File description:
** Find in a chained list
*/

#include <stddef.h>
#include "llist.h"

llnode_t ll_find(llist_t list, void *data)
{
	llnode_t result = NULL;

	result = list->head;
	while (result && result != data)
		result = result->next;
	return (result);
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
