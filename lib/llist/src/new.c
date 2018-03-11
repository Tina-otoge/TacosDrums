/*
** EPITECH PROJECT, 2017
** new.c
** File description:
** Creates a new chained list
*/

#include <stdlib.h>
#include "llist.h"

llist_t ll_new(void)
{
	llist_t result = NULL;

	result = malloc(sizeof(*result));
	if (result) {
		result->nb = 0;
		result->head = NULL;
	}
	return (result);
}
