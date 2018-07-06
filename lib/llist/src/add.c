/*
** EPITECH PROJECT, 2017
** add.c
** File description:
** Inserts into a chained list
*/

#include <stdlib.h>
#include "llist.h"

static llnode_t ll_new_node(void *ptr)
{
	llnode_t result = NULL;

	result = malloc(sizeof(*result));
	if (result) {
		result->data = ptr;
		result->next = NULL;
	}
	return (result);
}

llnode_t ll_append(llist_t list, void *new_data)
{
	llnode_t to_insert = NULL;
	llnode_t node = NULL;

	to_insert = ll_new_node(new_data);
	if (!to_insert)
		return (NULL);
	if (!list->head) {
		list->head = to_insert;
	} else {
		node = list->head;
		while (node->next)
			node = node->next;
		node->next = to_insert;
	}
	list->nb += 1;
	return (to_insert);
}

llnode_t ll_push(llist_t list, void *new_data)
{
	llnode_t to_insert = NULL;
	llnode_t new_second = NULL;

	to_insert = ll_new_node(new_data);
	if (!to_insert)
		return (NULL);
	if (!list->head) {
		list->head = to_insert;
	} else {
		new_second = list->head;
		to_insert->next = new_second;
		list->head = to_insert;
	}
	list->nb += 1;
	return (to_insert);
}
