#include <immintrin.h>
#include <stdio.h>

/// ```
/// 
/// ```
int main() {
    __m128i a = _mm_set1_epi32(42);  // SSEで4つの32bit整数をセット
    __m128i b = _mm_set1_epi32(10);
    __m128i result = _mm_add_epi32(a, b);

    int res[4];
    _mm_storeu_si128((__m128i*)res, result);

    printf("Result: %d %d %d %d\n", res[0], res[1], res[2], res[3]);
    return 0;
}

