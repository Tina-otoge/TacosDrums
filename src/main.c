#include <stdlib.h>
#include "tacos.h"

int main(void)
{
	tacos_t *tacos;

	tacos = tacos_create();
	if (!tacos)
		return (EXIT_FAILURE);
	tacos_run(tacos);
	tacos_destroy(tacos);
	return (EXIT_SUCCESS);
}
