#include "tacos.h"

void event_close(tacos_t *game)
{
	sfRenderWindow_close(game->window);
}
