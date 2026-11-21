#ifndef MINIVECTOR_H_
#define MINIVECTOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <math.h>

#define MM_VEC2(x, y) ((mm_vec2_t){ (x), (y) })
#define MM_VEC3(x, y, z) ((mm_vec3_t){ (x), (y), (z) })
#define MM_VEC4(x, y, z, w) ((mm_vec4_t){ (x), (y), (z), (w) })

#define MM_IVEC2(x, y) ((mm_ivec2_t){ (int32_t)(x), (int32_t)(y) })
#define MM_IVEC3(x, y, z) ((mm_ivec3_t){ (int32_t)(x), (int32_t)(y), (int32_t)(z) })
#define MM_IVEC4(x, y, z, w) ((mm_ivec4_t){ (int32_t)(x), (int32_t)(y), (int32_t)(z), (int32_t)(w) })

#define MM_UVEC2(x, y) ((mm_uvec2_t){ (uint32_t)(x), (uint32_t)(y) })
#define MM_UVEC3(x, y, z) ((mm_uvec3_t){ (uint32_t)(x), (uint32_t)(y), (uint32_t)(z) })
#define MM_UVEC4(x, y, z, w) ((mm_uvec4_t){ (uint32_t)(x), (uint32_t)(y), (uint32_t)(z), (uint32_t)(w) })

typedef struct mm_vec2 { float x, y; } mm_vec2_t;
typedef struct mm_vec3 { float x, y, z; } mm_vec3_t;
typedef struct mm_vec4 { float x, y, z, w; } mm_vec4_t;

typedef struct mm_ivec2 { int32_t x, y; } mm_ivec2_t;
typedef struct mm_ivec3 { int32_t x, y, z; } mm_ivec3_t;
typedef struct mm_ivec4 { int32_t x, y, z, w; } mm_ivec4_t;

typedef struct mm_uvec2 { uint32_t x, y; } mm_uvec2_t;
typedef struct mm_uvec3 { uint32_t x, y, z; } mm_uvec3_t;
typedef struct mm_uvec4 { uint32_t x, y, z, w; } mm_uvec4_t;

inline mm_vec2_t mm_vec2_add(mm_vec2_t a, mm_vec2_t b) { return MM_VEC2(a.x + b.x, a.y + b.y); }
inline mm_vec2_t mm_vec2_sub(mm_vec2_t a, mm_vec2_t b) { return MM_VEC2(a.x - b.x, a.y - b.y); }
inline mm_vec2_t mm_vec2_mul(mm_vec2_t a, mm_vec2_t b) { return MM_VEC2(a.x * b.x, a.y * b.y); }
inline mm_vec2_t mm_vec2_scl(mm_vec2_t v, float s) { return MM_VEC2(v.x * s, v.y * s); }
inline float mm_vec2_len(mm_vec2_t v) { return sqrtf(v.x * v.x + v.y * v.y); }
inline float mm_vec2_dot(mm_vec2_t a, mm_vec2_t b) { return a.x * b.x + a.y * b.y; }

inline mm_vec3_t mm_vec3_add(mm_vec3_t a, mm_vec3_t b) { return MM_VEC3(a.x + b.x, a.y + b.y, a.z + b.z); }
inline mm_vec3_t mm_vec3_sub(mm_vec3_t a, mm_vec3_t b) { return MM_VEC3(a.x - b.x, a.y - b.y, a.z - b.z); }
inline mm_vec3_t mm_vec3_mul(mm_vec3_t a, mm_vec3_t b) { return MM_VEC3(a.x * b.x, a.y * b.y, a.z * b.z); }
inline mm_vec3_t mm_vec3_scl(mm_vec3_t v, float s) { return MM_VEC3(v.x * s, v.y * s, v.z * s); }
inline float mm_vec3_len(mm_vec3_t v) { return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z); }
inline float mm_vec3_dot(mm_vec3_t a, mm_vec3_t b) { return a.x * b.x + a.y * b.y + a.y * b.y; }
inline mm_vec3_t mm_vec3_cross(mm_vec3_t a, mm_vec3_t b) { return MM_VEC3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }

inline mm_vec4_t mm_vec4_add(mm_vec4_t a, mm_vec4_t b) { return MM_VEC4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w); }
inline mm_vec4_t mm_vec4_sub(mm_vec4_t a, mm_vec4_t b) { return MM_VEC4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w); }
inline mm_vec4_t mm_vec4_mul(mm_vec4_t a, mm_vec4_t b) { return MM_VEC4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w); }
inline mm_vec4_t mm_vec4_scl(mm_vec4_t v, float s) { return MM_VEC4(v.x * s, v.y * s, v.z * s, v.w * s); }
inline float mm_vec4_len(mm_vec4_t v) { return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w); }
inline float mm_vec4_dot(mm_vec4_t a, mm_vec4_t b) { return a.x * b.x + a.y * b.y + a.y * b.y + a.w * b.w; }

inline mm_ivec2_t mm_ivec2_add(mm_ivec2_t a, mm_ivec2_t b) { return MM_IVEC2(a.x + b.x, a.y + b.y); }
inline mm_ivec2_t mm_ivec2_sub(mm_ivec2_t a, mm_ivec2_t b) { return MM_IVEC2(a.x - b.x, a.y - b.y); }
inline mm_ivec2_t mm_ivec2_mul(mm_ivec2_t a, mm_ivec2_t b) { return MM_IVEC2(a.x * b.x, a.y * b.y); }
inline mm_ivec2_t mm_ivec2_scl(mm_ivec2_t v, float s) { return MM_IVEC2(v.x * s, v.y * s); }
inline float mm_ivec2_len(mm_ivec2_t v) { return sqrtf(v.x * v.x + v.y * v.y); }
inline float mm_ivec2_dot(mm_ivec2_t a, mm_ivec2_t b) { return a.x * b.x + a.y * b.y; }

inline mm_ivec3_t mm_ivec3_add(mm_ivec3_t a, mm_ivec3_t b) { return MM_IVEC3(a.x + b.x, a.y + b.y, a.z + b.z); }
inline mm_ivec3_t mm_ivec3_sub(mm_ivec3_t a, mm_ivec3_t b) { return MM_IVEC3(a.x - b.x, a.y - b.y, a.z - b.z); }
inline mm_ivec3_t mm_ivec3_mul(mm_ivec3_t a, mm_ivec3_t b) { return MM_IVEC3(a.x * b.x, a.y * b.y, a.z * b.z); }
inline mm_ivec3_t mm_ivec3_scl(mm_ivec3_t v, float s) { return MM_IVEC3(v.x * s, v.y * s, v.z * s); }
inline float mm_ivec3_len(mm_ivec3_t v) { return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z); }
inline float mm_ivec3_dot(mm_ivec3_t a, mm_ivec3_t b) { return a.x * b.x + a.y * b.y + a.y * b.y; }
inline mm_ivec3_t mm_ivec3_cross(mm_ivec3_t a, mm_ivec3_t b) { return MM_IVEC3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }

inline mm_ivec4_t mm_ivec4_add(mm_ivec4_t a, mm_ivec4_t b) { return MM_IVEC4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w); }
inline mm_ivec4_t mm_ivec4_sub(mm_ivec4_t a, mm_ivec4_t b) { return MM_IVEC4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w); }
inline mm_ivec4_t mm_ivec4_mul(mm_ivec4_t a, mm_ivec4_t b) { return MM_IVEC4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w); }
inline mm_ivec4_t mm_ivec4_scl(mm_ivec4_t v, float s) { return MM_IVEC4(v.x * s, v.y * s, v.z * s, v.w * s); }
inline float mm_ivec4_len(mm_ivec4_t v) { return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w); }
inline float mm_ivec4_dot(mm_ivec4_t a, mm_ivec4_t b) { return a.x * b.x + a.y * b.y + a.y * b.y + a.w * b.w; }

inline mm_uvec2_t mm_uvec2_add(mm_uvec2_t a, mm_uvec2_t b) { return MM_UVEC2(a.x + b.x, a.y + b.y); }
inline mm_uvec2_t mm_uvec2_sub(mm_uvec2_t a, mm_uvec2_t b) { return MM_UVEC2(a.x - b.x, a.y - b.y); }
inline mm_uvec2_t mm_uvec2_mul(mm_uvec2_t a, mm_uvec2_t b) { return MM_UVEC2(a.x * b.x, a.y * b.y); }
inline mm_uvec2_t mm_uvec2_scl(mm_uvec2_t v, float s) { return MM_UVEC2(v.x * s, v.y * s); }
inline float mm_uvec2_len(mm_uvec2_t v) { return sqrtf(v.x * v.x + v.y * v.y); }
inline float mm_uvec2_dot(mm_uvec2_t a, mm_uvec2_t b) { return a.x * b.x + a.y * b.y; }

inline mm_uvec3_t mm_uvec3_add(mm_uvec3_t a, mm_uvec3_t b) { return MM_UVEC3(a.x + b.x, a.y + b.y, a.z + b.z); }
inline mm_uvec3_t mm_uvec3_sub(mm_uvec3_t a, mm_uvec3_t b) { return MM_UVEC3(a.x - b.x, a.y - b.y, a.z - b.z); }
inline mm_uvec3_t mm_uvec3_mul(mm_uvec3_t a, mm_uvec3_t b) { return MM_UVEC3(a.x * b.x, a.y * b.y, a.z * b.z); }
inline mm_uvec3_t mm_uvec3_scl(mm_uvec3_t v, float s) { return MM_UVEC3(v.x * s, v.y * s, v.z * s); }
inline float mm_uvec3_len(mm_uvec3_t v) { return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z); }
inline float mm_uvec3_dot(mm_uvec3_t a, mm_uvec3_t b) { return a.x * b.x + a.y * b.y + a.y * b.y; }
inline mm_uvec3_t mm_uvec3_cross(mm_uvec3_t a, mm_uvec3_t b) { return MM_UVEC3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }

inline mm_uvec4_t mm_uvec4_add(mm_uvec4_t a, mm_uvec4_t b) { return MM_UVEC4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w); }
inline mm_uvec4_t mm_uvec4_sub(mm_uvec4_t a, mm_uvec4_t b) { return MM_UVEC4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w); }
inline mm_uvec4_t mm_uvec4_mul(mm_uvec4_t a, mm_uvec4_t b) { return MM_UVEC4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w); }
inline mm_uvec4_t mm_uvec4_scl(mm_uvec4_t v, float s) { return MM_UVEC4(v.x * s, v.y * s, v.z * s, v.w * s); }
inline float mm_uvec4_len(mm_uvec4_t v) { return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w); }
inline float mm_uvec4_dot(mm_uvec4_t a, mm_uvec4_t b) { return a.x * b.x + a.y * b.y + a.y * b.y + a.w * b.w; }

#ifdef MM_STRIP_PREFIX
typedef mm_vec2_t vec2_t;
typedef mm_vec3_t vec3_t;
typedef mm_vec4_t vec4_t;

#	define vec2_add mm_vec2_add
#	define vec2_sub mm_vec2_sub
#	define vec2_mul mm_vec2_mul
#	define vec2_scl mm_vec2_scl
#	define vec2_len mm_vec2_len
#	define vec2_dot mm_vec2_dot

#	define vec3_add mm_vec3_add
#	define vec3_sub mm_vec3_sub
#	define vec3_mul mm_vec3_mul
#	define vec3_scl mm_vec3_scl
#	define vec3_len mm_vec3_len
#	define vec3_dot mm_vec3_dot
#	define vec3_cross mm_vec3_cross

#	define vec4_add mm_vec4_add
#	define vec4_sub mm_vec4_sub
#	define vec4_mul mm_vec4_mul
#	define vec4_scl mm_vec4_scl
#	define vec4_len mm_vec4_len
#	define vec4_dot mm_vec4_dot

typedef mm_ivec2_t ivec2_t;
typedef mm_ivec3_t ivec3_t;
typedef mm_ivec4_t ivec4_t;

#	define ivec2_add mm_ivec2_add
#	define ivec2_sub mm_ivec2_sub
#	define ivec2_mul mm_ivec2_mul
#	define ivec2_scl mm_ivec2_scl
#	define ivec2_len mm_ivec2_len
#	define ivec2_dot mm_ivec2_dot

#	define ivec3_add mm_ivec3_add
#	define ivec3_sub mm_ivec3_sub
#	define ivec3_mul mm_ivec3_mul
#	define ivec3_scl mm_ivec3_scl
#	define ivec3_len mm_ivec3_len
#	define ivec3_dot mm_ivec3_dot
#	define ivec3_cross mm_ivec3_cross

#	define ivec4_add mm_ivec4_add
#	define ivec4_sub mm_ivec4_sub
#	define ivec4_mul mm_ivec4_mul
#	define ivec4_scl mm_ivec4_scl
#	define ivec4_len mm_ivec4_len
#	define ivec4_dot mm_ivec4_dot

typedef mm_uvec2_t uvec2_t;
typedef mm_uvec3_t uvec3_t;
typedef mm_uvec4_t uvec4_t;

#	define uvec2_add mm_uvec2_add
#	define uvec2_sub mm_uvec2_sub
#	define uvec2_mul mm_uvec2_mul
#	define uvec2_scl mm_uvec2_scl
#	define uvec2_len mm_uvec2_len
#	define uvec2_dot mm_uvec2_dot

#	define uvec3_add mm_uvec3_add
#	define uvec3_sub mm_uvec3_sub
#	define uvec3_mul mm_uvec3_mul
#	define uvec3_scl mm_uvec3_scl
#	define uvec3_len mm_uvec3_len
#	define uvec3_dot mm_uvec3_dot
#	define uvec3_cross mm_uvec3_cross

#	define uvec4_add mm_uvec4_add
#	define uvec4_sub mm_uvec4_sub
#	define uvec4_mul mm_uvec4_mul
#	define uvec4_scl mm_uvec4_scl
#	define uvec4_len mm_uvec4_len
#	define uvec4_dot mm_uvec4_dot
#endif

#ifdef __cplusplus
}
#endif

#endif // MINIVECTOR_H_
