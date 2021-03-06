#include "mix_chars.h"

/* MIX chars */
mix_byte_t _mix_chars[256] = {
/* 0 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 8 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 16 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 24 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 32 */
  (0),   0,   0,   0,  49,   0,   0,  55,
/* 40 */
   42,  43,  46,  44,  41,  45,  40,  47,
/* 48 */
   30,  31,  32,  33,  34,  35,  36,  37,
/* 56 */
   38,  39,  54,  53,  50,  48,  51,   0,
/* 64 */
   52,   1,   2,   3,   4,   5,   6,   7,
/* 72 */
    8,   9,  11,  12,  13,  14,  15,  16,
/* 80 */
   17,  18,  19,  22,  23,  24,  25,  26,
/* 88 */
   27,  28,  29,   0,   0,   0,   0,   0,
/* 96 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 104 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 112 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 120 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 128 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 136 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 144 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 152 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 160 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 168 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 176 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 184 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 192 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 200 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 208 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 216 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 224 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 232 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 240 */
    0,   0,   0,   0,   0,   0,   0,   0,
/* 248 */
    0,   0,   0,   0,   0,   0,   0,   0
};

/* ASCII chars - the other way round */
char _ascii_chars[56] = {
/* 0 */
   32,  65,  66,  67,  68,  69,  70,  71,
/* 8 */
   72,  73,   0,  74,  75,  76,  77,  78,
/* 16 */
   79,  80,  81,  82,   0,   0,  83,  84,
/* 24 */
   85,  86,  87,  88,  89,  90,  48,  49,
/* 32 */
   50,  51,  52,  53,  54,  55,  56,  57,
/* 40 */
   46,  44,  40,  41,  43,  45,  42,  47,
/* 48 */
   61,  36,  60,  62,  64,  59,  58,  39
};
