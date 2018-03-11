/*
** EPITECH PROJECT, 2017
** clist.h
** File description:
** Chained lists
*/

#pragma once

struct llnode_s {
	void *data;
	struct llnode_s *next;
};

typedef struct llnode_s *llnode_t;

struct llist_s {
	llnode_t head;
	long int nb;
};

typedef struct llist_s *llist_t;

llist_t ll_new(void);
llnode_t ll_append(llist_t list, void *data);
llnode_t ll_push(llist_t list, void *data);
llnode_t ll_remove(llist_t list, llnode_t node);
llnode_t ll_pop(llist_t list, unsigned int nb);
llnode_t ll_find(llist_t list, llnode_t node);
llnode_t ll_goto(llist_t list, unsigned int nb);
void ll_free(llist_t list);
