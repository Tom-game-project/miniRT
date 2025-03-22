#ifndef VEC3_H
#define VEC3_H


typedef union u_number t_number;
union u_number
{
	float f32;
	double f64;
};


typedef t_number t_vec3[3];

void vec3_assign( t_vec3 v, t_number x, t_number y, t_number z);

void vec3f32_assign(t_vec3 v, float x, float y, float z);

void vec3f32_add_assign(t_vec3 a, t_vec3 b, t_vec3 c);

void vec3f32_print(t_vec3 v);
#endif
