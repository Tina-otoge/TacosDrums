#include "window.h"

sfRenderWindow *window_create(void)
{
	sfRenderWindow *result;
	sfVideoMode mode;
	const char default_title[] = "Tacos";
	sfUint32 default_style = sfClose;

	mode.height = 600;
	mode.width = 800;
	mode.bitsPerPixel = 32;
	result = sfRenderWindow_create(mode, default_title, default_style, 0);
	if (result)
		sfRenderWindow_setFramerateLimit(result, 60);
	return (result);
}
