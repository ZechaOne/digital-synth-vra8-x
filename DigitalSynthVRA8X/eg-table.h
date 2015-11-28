#pragma once

const uint8_t EG_ATTACK_UPDATE_INTERVAL = 4;

const uint16_t g_eg_attack_rate_table[] = {
   4000,  4000,  3177,  2523,  2004,  1592,  1264,  1004,   798,   633,   503,   400,   317,   252,   200,   159,
    126,   100,    79,    63,    50,    40,    31,    25,    20,    15,    12,    10,     7,     6,     5,     4,
  };

const uint8_t g_eg_decay_release_rate_table[] = {
    128,   128,   128,   128,   128,   128,   128,   181,   181,   181,   181,   181,   215,   215,   215,   215,
    215,   234,   234,   234,   234,   234,   245,   245,   245,   245,   245,   250,   250,   250,   250,   250,
  };

const uint16_t g_eg_decay_release_update_interval_table[] = {
     21,    21,    27,    34,    43,    55,    69,    43,    55,    69,    87,   109,    69,    87,   110,   138,
    174,   113,   142,   179,   226,   284,   175,   220,   277,   349,   440,   299,   376,   474,   597,   751,
  };

