#include "vec3.h"
#include <stdbool.h>

/// NOTE
/// 大抵の場合vec3の挙動をチェックするために使う
bool vec3f32_eq(t_vec3 a, t_vec3 b)
{
	return (
		a[0].f32 == b[0].f32 && \
		a[1].f32 == b[1].f32 && \
		a[2].f32 == b[2].f32
	);
}
