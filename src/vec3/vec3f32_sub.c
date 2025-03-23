#include "vec3.h"

void vec3f32_sub_assign(t_vec3 a, t_vec3 b, t_vec3 c)
{
	vec3_calc_assign(a, b, c, f32_sub);
}

