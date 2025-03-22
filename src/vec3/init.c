#include "vec3.h"
#include "test_tools.h"
#include <unistd.h>

/// float: f32
/// double: f64
/// 
/// Vec3 [num, num, num]



void vec3_assign(t_vec3 v, t_number x, t_number y, t_number z)
{
	v[0] = x;
	v[1] = y;
	v[2] = z;
}


void vec3f32_assign(t_vec3 v, float x, float y, float z)
{
	t_number n0;
	t_number n1;
	t_number n2;

	n0.f32 = x;
	n1.f32 = y;
	n2.f32 = z;
	vec3_assign(v, n0, n1, n2);
}


void vec3_calc_assign(t_vec3 a, t_vec3 b, t_vec3 c, t_number (*f)(t_number, t_number))
{
	a[0] = f(b[0], c[0]);
	a[1] = f(b[1], c[1]);
	a[2] = f(b[2], c[2]);
}


static
t_number f32_add(t_number a, t_number b)
{
	t_number n;

	n.f32 = a.f32 + b.f32;
	return (n);
}

static
t_number f32_sub(t_number a, t_number b)
{
	t_number n;

	n.f32 = a.f32 - b.f32;
	return (n);
}

void vec3f32_add_assign(t_vec3 a, t_vec3 b, t_vec3 c)
{
	vec3_calc_assign(a, b, c, f32_add);
}

void vec3f32_sub_assign(t_vec3 a, t_vec3 b, t_vec3 c)
{
	vec3_calc_assign(a, b, c, f32_sub);
}

void vec3f32_print(t_vec3 v)
{
	debug_dprintf(STDERR_FILENO,\
		"vec3f32(%f,%f,%f)\n",
		v[0].f32,
		v[1].f32,
		v[2].f32
	);
}
