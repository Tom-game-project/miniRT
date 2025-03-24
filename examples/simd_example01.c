#include <stdio.h>
#include <immintrin.h>  // SSE/AVX用のヘッダ

typedef __m128 t_f32x4;

t_f32x4 f32x4_mul(t_f32x4 a, t_f32x4 b)
{
	return (_mm_mul_ps(a, b));
}

/// 
/// ```
/// cc -mavx2 -o simd_x86 examples/simd_example01.c
/// ```
int main() {
    t_f32x4 a = _mm_set_ps(1.0f, 2.0f, 3.0f, 4.0f);  // 4つのfloatを格納
    t_f32x4 b = _mm_set_ps(2.0f, 2.0f, 2.0f, 2.0f);  
    t_f32x4 c = f32x4_mul(a, b);  // 要素ごとの乗算

    float result[4];
    _mm_storeu_ps(result, c);  // 結果を配列に保存

    printf("Results: %f, %f, %f, %f\n", result[0], result[1], result[2], result[3]);
    return 0;
}

