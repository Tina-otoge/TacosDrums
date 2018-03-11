#pragma once

#include "llist.h"
#include <SFML/Graphics.h>

enum state {
	STATE_TITLESCREEN,
	STATE_TITLESELECT,
	STATE_MUSICSELECT,
	STATE_MUSICPLAY,
	STATE_MUSICRESULT,
	STATE_SETTINGS
};

struct tacos_s {
	sfRenderWindow *window;
	llist_t sprites;
	enum state state;
	sfClock *clock;
};

typedef struct tacos_s tacos_t;

enum note_type {
	NOTE_RED,
	NOTE_BLUE,
	NOTE_BIGRED,
	NOTE_BIGBLUE,
	NOTE_ROLL,
	NOTE_BALLOON
};

tacos_t *tacos_create(void);
void tacos_run(tacos_t *game);
void tacos_destroy(tacos_t *game);
