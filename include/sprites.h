#pragma once

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "llist.h"

struct animation_s {
	sfVector2i offset;
	sfVector2i limit;
	sfIntRect initial;
	sfTime spent;
	sfTime delay;
};

typedef struct animation_s animation_t;

struct sprite_s {
	sfSprite *sprite;
	bool animated;
	animation_t animation;
};

typedef struct sprite_s sprite_t;

void sprites_animate(llist_t sprites, sfTime frame_time);
void sprites_draw(llist_t sprites, sfRenderWindow *window);
