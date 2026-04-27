/* 
 * File:   random.h
 * Author: flurl
 *
 * Created on September 12, 2025, 7:13 AM
 */

#ifndef RANDOM_H
#define	RANDOM_H

#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif



/* --------------------------------------------------------------
 * Tiny Xorshift RNG (32-bit state, ~3 cycles per call on AVR)
 *  - Period: 2³²-1 (full cycle for non-zero seed)
 *  - No division/multiplication ? ideal for 8-bit MCUs
 *  - State lives in caller?s RAM (4 bytes)
 *  - Returns 32-bit raw value; mask/shift for smaller ranges
 * -------------------------------------------------------------- */

/* Global state (or pass a pointer if you need >1 generator) */
static uint32_t rng_state = 0;   /* 0 = unseeded */

/* --------------------------------------------------------------
 * Seed the generator.
 *   - Any non-zero value works; common choices:
 *       * Hardware timer / ADC noise
 *       * __builtin_ia32_rdtsc() on x86
 *       * Simple mix of address + counter
 *   - If seed==0 the generator stays at 0 ? always returns 0.
 * -------------------------------------------------------------- */
static inline void rng_seed(uint32_t seed)
{
    /* Avoid all-zero state (Xorshift collapses to 0) */
    rng_state = seed ? seed : 1;
}

/* --------------------------------------------------------------
 * Core Xorshift32 step (Marsaglia 2003).
 *   - 3 XOR+shift ops ? ~3 CPU cycles on most 8-bit cores.
 *   - Pass-by-pointer lets you keep state elsewhere (stack, struct).
 * -------------------------------------------------------------- */
static inline uint32_t xorshift32(uint32_t *state)
{
    uint32_t x = *state;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return (*state = x);
}

/* --------------------------------------------------------------
 * Public API ? 32-bit unsigned pseudo-random number
 * -------------------------------------------------------------- */
uint32_t rng_next(void)
{
    return xorshift32(&rng_state);
}

/* --------------------------------------------------------------
 * Helpers for common ranges (no division ? use bit-mask or &)
 * -------------------------------------------------------------- */

/* Uniform [0, N) where N is a power-of-2 (fastest) */
static inline uint32_t rng_uniform_pow2(uint32_t n)  /* n must be 2^k */
{
    return rng_next() & (n - 1);
}

/* Uniform [0, N) for arbitrary N (rejection method, bias < 2?³²) */
static inline uint32_t rng_uniform(uint32_t n)
{
    uint32_t limit = UINT32_MAX - (UINT32_MAX % n) - 1;
    uint32_t v;
    do { v = rng_next(); } while (v > limit);
    return v % n;
}

/* 8-bit value (0-255) ? just take low byte */
static inline uint8_t rng_u8(void)
{
    return (uint8_t)rng_next();
}

/* --------------------------------------------------------------
 * Example usage (drop into main.c)
 * --------------------------------------------------------------
 */
#if 0
int main(void)
{
    /* Seed from some entropy source (e.g. free-running timer) */
    rng_seed(TCNT0 ^ (uint32_t)&rng_state);

    for (;;) {
        uint32_t rnd = rng_next();          /* raw 32-bit */
        uint8_t  die = rng_uniform(6) + 1; /* 1-6 */
        (void)rnd; (void)die;
    }
}
#endif


#ifdef	__cplusplus
}
#endif

#endif	/* RANDOM_H */

