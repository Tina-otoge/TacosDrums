#include "sprites.h"

void sprites_draw(llist_t sprites, sfRenderWindow *window)
{
	sprite_t *sprite;

	for (llnode_t node = sprites->head; node; node = node->next) {
		sprite = node->data;
		sfRenderWindow_drawSprite(window, sprite->sprite, 0);
	}
}

static void sprite_animate(sprite_t *sprite, sfTime frame_time)
{
	sprite->animation.spent.microseconds += frame_time.microseconds;
	sfIntRect rect;

	while (sprite->animation.spent.microseconds
	>= sprite->animation.delay.microseconds) {
		sprite->animation.spent.microseconds -=
			sprite->animation.delay.microseconds;
		rect = sfSprite_getTextureRect(sprite->sprite);
		rect.left += sprite->animation.offset.x;
		rect.top += sprite->animation.offset.y;
		if (rect.left > sprite->animation.limit.x
		|| rect.top > sprite->animation.limit.y)
			rect = sprite->animation.initial;
		sfSprite_setTextureRect(sprite->sprite, rect);
	}
}

void sprites_animate(llist_t sprites, sfTime frame_time)
{

	sprite_t *sprite;

	for (llnode_t node = sprites->head; node; node = node->next) {
		sprite = node->data;
		if (sprite->animated) {
			sprite_animate(sprite, frame_time);
		}
	}
}
