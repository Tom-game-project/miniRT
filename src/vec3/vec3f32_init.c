#include "vec3.h"

/// ```
/// v<x, y, z>
/// ```
void vec3f32_init(t_vec3 v, float x, float y, float z)
{
	t_number n0;
	t_number n1;
	t_number n2;

	n0.f32 = x;
	n1.f32 = y;
	n2.f32 = z;
	vec3_assign(v, n0, n1, n2);
}

