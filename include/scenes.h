#pragma once

#include "tacos.h"

#define ADD_SCENE(x) void x(tacos_t *game)

struct scene_loader_s {
	scene_t scene;
	void (*init)(tacos_t *game);
	void (*unload)(tacos_t *game);
	char title[255];
};

typedef struct scene_loader_s scene_loader_t;

void scene_update(tacos_t *game, scene_t scene);

ADD_SCENE(titlescreen_init);
ADD_SCENE(titlescreen_unload);
