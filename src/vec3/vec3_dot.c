#include "vec3.h"

t_number vec3_dot(
	t_vec3 a,
       	t_vec3 b,
	t_number (*add)(t_number, t_number),
	t_number (*mul)(t_number, t_number)
)
{
	return (
		add(
			add(
				mul(a[0], b[0]),
				mul(a[1], b[1])
				),
				mul(a[2], b[2])
			)
	);
}
