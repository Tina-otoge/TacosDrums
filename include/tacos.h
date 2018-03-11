#pragma once

#include <SFML/Graphics.h>
#include "llist.h"

#define FD_DEBUG 0

typedef enum {
	SCENE_TITLESCREEN,
	SCENE_MAINMENU,
	SCENE_MUSICSELECT,
	SCENE_MUSICPLAY,
	SCENE_MUSICRESULT,
	SCENE_SETTINGS,
	SCENE_COUNT,
	NO_SCENE
} scene_t;

struct tacos_s {
	sfRenderWindow *window;
	llist_t sprites;
	scene_t scene;
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
