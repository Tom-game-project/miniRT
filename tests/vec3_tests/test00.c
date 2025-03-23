#include "vec3.h"



int main()
{
	t_vec3 a;
	t_vec3 b;
	t_vec3 c;

	vec3f32_init(a, 1, 2, 3);
	vec3f32_init(b, 1, 2, 3);
	vec3f32_init(c, 1, 2, 3);

	vec3f32_add_assign(a, b, c);
	vec3f32_print(a);
	return (0);
}
