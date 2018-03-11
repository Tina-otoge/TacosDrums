#pragma once

#include "tacos.h"

#define ADD_EVENT(x) void x(tacos_t *game)

struct event_handler_s {
	sfEventType type;
	void (*handler)(tacos_t *game);
};

typedef struct event_handler_s event_handler_t;

void events_manager(tacos_t *game);

ADD_EVENT(event_close);
