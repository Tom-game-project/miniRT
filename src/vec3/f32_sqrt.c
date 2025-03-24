#include <math.h>
#include "vec3.h"

t_number f32_sqrt(t_number a)
{
	t_number n;

	n.f32 = sqrtf(a.f32);
	return (n);
}
