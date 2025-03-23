#include "vec3.h"

/// ```
/// a = v<f(b.x, c.x), f(b.y, c.y), f(b.z, c.z)>
/// ```
void vec3_calc_assign(t_vec3 a, t_vec3 b, t_vec3 c, t_number (*f)(t_number, t_number))
{
	a[0] = f(b[0], c[0]);
	a[1] = f(b[1], c[1]);
	a[2] = f(b[2], c[2]);
}

