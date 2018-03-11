#include "game.h"
#include "sprites.h"
#include "events.h"

void game_loop(tacos_t *game)
{
	sfTime frame_time;

	while (sfRenderWindow_isOpen(game->window)) {
		frame_time = sfClock_restart(game->clock);
		sfRenderWindow_clear(game->window, sfBlack);
		sprites_draw(game->sprites, game->window);
		sfRenderWindow_display(game->window);
		sprites_animate(game->sprites, frame_time);
		events_manager(game);
	}
}
