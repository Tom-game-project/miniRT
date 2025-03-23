#include "vec3.h"
#include "test_tools.h"
#include <unistd.h>

void vec3f32_print(t_vec3 v)
{
	debug_dprintf(STDERR_FILENO,\
		"vec3f32(%f,%f,%f)\n",
		v[0].f32,
		v[1].f32,
		v[2].f32
	);
}
