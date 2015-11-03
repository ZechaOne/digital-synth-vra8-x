#pragma once

const uint8_t g_filter_lpf_table_q_4_sqrt_2[] = {
   90,  15, 233,  90,  15, 233,  90,  15, 233,  90,  15, 233,
   90,  15, 233, 180,  15, 232,  15,  16, 232, 109,  16, 231,
  204,  16, 231,  46,  17, 230, 146,  17, 230, 249,  17, 229,
   97,  18, 229, 204,  18, 228,  57,  19, 228, 169,  19, 227,
   27,  20, 227, 144,  20, 226,   7,  21, 226, 129,  21, 225,
  253,  21, 225, 125,  22, 224, 255,  22, 223, 132,  23, 223,
   12,  24, 222, 151,  24, 221,  37,  25, 221, 182,  25, 220,
   74,  26, 219, 226,  26, 219, 125,  27, 218,  27,  28, 217,
  189,  28, 217,  98,  29, 216,  11,  30, 215, 183,  30, 214,
  104,  31, 213,  28,  32, 213, 212,  32, 212, 144,  33, 211,
   80,  34, 210,  20,  35, 209, 221,  35, 208, 169,  36, 207,
  123,  37, 207,  80,  38, 206,  42,  39, 205,   9,  40, 204,
  237,  40, 203, 214,  41, 202, 195,  42, 201, 182,  43, 199,
  173,  44, 198, 170,  45, 197, 173,  46, 196, 180,  47, 195,
  194,  48, 194, 213,  49, 193, 237,  50, 191,  12,  52, 190,
   48,  53, 189,  91,  54, 188, 140,  55, 186, 195,  56, 185,
    1,  58, 184,  69,  59, 182, 144,  60, 181, 226,  61, 179,
   59,  63, 178, 155,  64, 176,   2,  66, 175, 112,  67, 173,
  230,  68, 172,  99,  70, 170, 232,  71, 168, 117,  73, 167,
   10,  75, 165, 167,  76, 163,  76,  78, 162, 250,  79, 160,
  176,  81, 158, 111,  83, 156,  54,  85, 154,   7,  87, 152,
  225,  88, 150, 196,  90, 148, 176,  92, 146, 166,  94, 144,
  166,  96, 142, 175,  98, 140, 194, 100, 138, 224, 102, 135,
    8, 105, 133,  58, 107, 131, 119, 109, 128, 191, 111, 126,
   17, 114, 123, 111, 116, 121, 216, 118, 118,  76, 121, 116,
  203, 123, 113,  87, 126, 111, 238, 128, 108, 145, 131, 105,
   64, 134, 102, 251, 136, 100, 195, 139,  97, 151, 142,  94,
  119, 145,  91, 101, 148,  88,  95, 151,  85, 103, 154,  81,
  123, 157,  78, 157, 160,  75, 205, 163,  72,  10, 167,  69,
   84, 170,  65, 172, 173,  62,  18, 177,  58, 134, 180,  55,
    8, 184,  51, 152, 187,  48,  54, 191,  44, 226, 194,  40,
  157, 198,  36, 157, 198,  36, 157, 198,  36, 157, 198,  36,
};

const uint8_t g_filter_lpf_table_q_2[] = {
  144,  14, 221, 144,  14, 221, 144,  14, 221, 144,  14, 221,
  144,  14, 221, 226,  14, 220,  55,  15, 219, 142,  15, 219,
  230,  15, 218,  64,  16, 218, 156,  16, 217, 250,  16, 217,
   90,  17, 216, 189,  17, 215,  33,  18, 215, 135,  18, 214,
  240,  18, 214,  91,  19, 213, 200,  19, 212,  55,  20, 212,
  169,  20, 211,  29,  21, 210, 148,  21, 210,  13,  22, 209,
  137,  22, 208,   7,  23, 207, 136,  23, 207,  12,  24, 206,
  147,  24, 205,  28,  25, 204, 168,  25, 203,  55,  26, 203,
  201,  26, 202,  95,  27, 201, 247,  27, 200, 146,  28, 199,
   49,  29, 198, 211,  29, 197, 120,  30, 197,  33,  31, 196,
  205,  31, 195, 125,  32, 194,  48,  33, 193, 232,  33, 192,
  162,  34, 191,  97,  35, 190,  36,  36, 189, 234,  36, 188,
  181,  37, 187, 131,  38, 186,  86,  39, 184,  45,  40, 183,
    9,  41, 182, 233,  41, 181, 205,  42, 180, 182,  43, 179,
  164,  44, 177, 150,  45, 176, 142,  46, 175, 138,  47, 174,
  139,  48, 172, 146,  49, 171, 157,  50, 170, 174,  51, 168,
  196,  52, 167, 224,  53, 166,   1,  55, 164,  40,  56, 163,
   85,  57, 161, 136,  58, 160, 192,  59, 158, 255,  60, 157,
   68,  62, 155, 143,  63, 154, 224,  64, 152,  56,  66, 150,
  151,  67, 149, 252,  68, 147, 104,  70, 145, 220,  71, 143,
   86,  73, 142, 215,  74, 140,  96,  76, 138, 240,  77, 136,
  135,  79, 134,  38,  81, 132, 205,  82, 130, 124,  84, 128,
   51,  86, 126, 242,  87, 124, 185,  89, 122, 137,  91, 120,
   97,  93, 118,  65,  95, 116,  43,  97, 114,  30,  99, 112,
   25, 101, 109,  30, 103, 107,  44, 105, 105,  67, 107, 102,
  100, 109, 100, 143, 111,  98, 196, 113,  95,   2, 116,  93,
   75, 118,  90, 158, 120,  88, 252, 122,  85, 100, 125,  82,
  215, 127,  80,  85, 130,  77, 221, 132,  74, 113, 135,  71,
   17, 138,  69, 187, 140,  66, 114, 143,  63,  52, 146,  60,
    2, 149,  57, 220, 151,  54, 194, 154,  51, 181, 157,  48,
  180, 160,  45, 191, 163,  41, 216, 166,  38, 253, 169,  35,
   48, 173,  32,  48, 173,  32,  48, 173,  32,  48, 173,  32,
};

const uint8_t g_filter_lpf_table_q_1_over_sqrt_2[] = {
  182,  12, 192, 182,  12, 192, 182,  12, 192, 182,  12, 192,
  182,  12, 192, 250,  12, 192,  63,  13, 191, 134,  13, 190,
  206,  13, 190,  23,  14, 189,  98,  14, 188, 175,  14, 187,
  253,  14, 187,  76,  15, 186, 157,  15, 185, 240,  15, 184,
   68,  16, 183, 154,  16, 183, 241,  16, 182,  74,  17, 181,
  165,  17, 180,   2,  18, 179,  96,  18, 178, 192,  18, 177,
   34,  19, 177, 134,  19, 176, 236,  19, 175,  84,  20, 174,
  190,  20, 173,  41,  21, 172, 151,  21, 171,   7,  22, 170,
  121,  22, 169, 237,  22, 168,  99,  23, 167, 220,  23, 166,
   87,  24, 165, 212,  24, 164,  83,  25, 163, 213,  25, 162,
   89,  26, 161, 224,  26, 160, 105,  27, 159, 245,  27, 158,
  131,  28, 157,  20,  29, 156, 168,  29, 155,  62,  30, 154,
  215,  30, 153, 115,  31, 151,  18,  32, 150, 180,  32, 149,
   88,  33, 148,   0,  34, 147, 171,  34, 146,  88,  35, 144,
    9,  36, 143, 189,  36, 142, 117,  37, 141,  47,  38, 139,
  237,  38, 138, 175,  39, 137, 116,  40, 136,  60,  41, 134,
    8,  42, 133, 216,  42, 132, 171,  43, 130, 130,  44, 129,
   93,  45, 127,  60,  46, 126,  31,  47, 125,   5,  48, 123,
  240,  48, 122, 223,  49, 120, 210,  50, 119, 202,  51, 117,
  198,  52, 116, 198,  53, 114, 203,  54, 113, 212,  55, 111,
  226,  56, 110, 245,  57, 108,  13,  59, 107,  41,  60, 105,
   74,  61, 103, 113,  62, 102, 156,  63, 100, 205,  64,  98,
    3,  66,  97,  63,  67,  95, 128,  68,  93, 199,  69,  92,
   19,  71,  90, 101,  72,  88, 189,  73,  86,  27,  75,  84,
  127,  76,  83, 233,  77,  81,  90,  79,  79, 209,  80,  77,
   79,  82,  75, 211,  83,  73,  94,  85,  71, 240,  86,  69,
  137,  88,  67,  41,  90,  65, 208,  91,  63, 127,  93,  61,
   53,  95,  59, 243,  96,  57, 185,  98,  55, 135, 100,  53,
   94, 102,  51,  60, 104,  49,  35, 106,  46,  19, 108,  44,
   12, 110,  42,  13, 112,  40,  24, 114,  37,  44, 116,  35,
   74, 118,  33, 114, 120,  30, 164, 122,  28, 224, 124,  26,
   38, 127,  23,  38, 127,  23,  38, 127,  23,  38, 127,  23,
};

