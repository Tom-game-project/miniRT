
typedef union u_number t_number;
union u_number
{
	float f32;
	double f64;
};


typedef t_number t_vec3[3];

/// float: f32
/// double: f64
/// 
/// Vec3 [num, num, num]

void vec3_calc_assign(t_vec3 a, t_vec3 b, t_vec3 c, t_number (*f)(t_number, t_number))
{
	a[0] = f(b[0], c[0]);
	a[1] = f(b[1], c[1]);
	a[2] = f(b[2], c[2]);
}


t_number f32_add(t_number a, t_number b)
{
	t_number n;

	n.f32 = a.f32 + b.f32;
	return (n);
}

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
	vec3_calc_assign(a, b, c, f32_add);
}



