#include "vec3.h"

t_number f32_pow(t_number a)
{
	t_number n;

	n.f32 = a.f32 * a.f32;
	return (n);
}
