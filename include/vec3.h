#ifndef VEC3_H
#define VEC3_H

#include <stdbool.h>

/// float: f32
/// double: f64
/// 
/// Vec3 [num, num, num]

typedef union u_number t_number;
union u_number
{
	float f32;
	double f64;
};

typedef t_number t_vec3[3];


// ---- f32 operations ----


t_number f32_add(t_number a, t_number b);

t_number f32_sub(t_number a, t_number b);

t_number f32_mul(t_number a, t_number b);

t_number f32_div(t_number a, t_number b);

t_number f32_pow(t_number a);

t_number f32_sqrt(t_number a);

// ---- basic instructions ----
void vec3_assign( t_vec3 v, t_number x, t_number y, t_number z);

void vec3_calc_assign(t_vec3 a, t_vec3 b, t_vec3 c, t_number (*f)(t_number, t_number));


t_number vec3_dot(
	t_vec3 a,
       	t_vec3 b,
	t_number (*add)(t_number, t_number),
	t_number (*mul)(t_number, t_number)
);

// appling f32 

void vec3f32_init(t_vec3 v, float x, float y, float z);

void vec3f32_add_assign(t_vec3 a, t_vec3 b, t_vec3 c);

void vec3f32_sub_assign(t_vec3 a, t_vec3 b, t_vec3 c);

void vec3f32_mul_assign(t_vec3 a, t_vec3 b, t_vec3 c);

void vec3f32_div_assign(t_vec3 a, t_vec3 b, t_vec3 c);

// ---- test tools ----
void vec3f32_print(t_vec3 v);

bool vec3f32_eq(t_vec3 a, t_vec3 b);

#endif
