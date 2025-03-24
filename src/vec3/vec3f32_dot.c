#include "vec3.h"

t_number vec3f32_dot(t_vec3 a, t_vec3 b)
{
	return (
		vec3_dot(a, b, f32_add, f32_mul)
	);
}
