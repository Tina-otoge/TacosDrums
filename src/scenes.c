#include "scenes.h"

void scene_update(tacos_t *game, scene_t scene)
{
	static scene_loader_t loaders[] = {
		{SCENE_TITLESCREEN, titlescreen_init, titlescreen_unload
		, "Tacos [Title]"},
		{NO_SCENE, NULL, NULL, ""}
	};
	unsigned int i;

	for (i = 0; loaders[i].scene != NO_SCENE
	&& loaders[i].scene != game->scene; i += 1);
	if (loaders[i].unload)
		loaders[i].unload(game);
	for (i = 0; loaders[i].scene != NO_SCENE
	&& loaders[i].scene != scene; i += 1);
	if (loaders[i].init)
		loaders[i].init(game);
	sfRenderWindow_setTitle(game->window, loaders[i].title);
}
