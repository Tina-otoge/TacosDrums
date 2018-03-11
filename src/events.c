#include "events.h"

void events_manager(tacos_t *game)
{
	sfEvent event;
	static event_handler_t handlers[] = {
		{sfEvtClosed, event_close},
		{sfEvtCount, NULL}
	};

	while (sfRenderWindow_pollEvent(game->window, &event)) {
		for (unsigned int i = 0; handlers[i].handler; i += 1) {
			if (handlers[i].type == event.type) {
				handlers[i].handler(game);
			}
		}
	};
}
