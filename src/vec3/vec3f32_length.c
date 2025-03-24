#include "vec3.h"
#include <math.h>



t_number vec3f32_length_sqrted(t_vec3 a)
{
	return (
		f32_add(
			f32_add(
				f32_pow(a[0]),
				f32_pow(a[1])

			),
			f32_pow(a[2])
		)
	);
}

t_number vec3f32_length(t_vec3 a)
{
	return (
		f32_sqrt(
			vec3f32_length_sqrted(a)
		)
	);
}
