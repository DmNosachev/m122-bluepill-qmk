#pragma once

#include "quantum.h"
#include "led.h"

/*  ANSI LAYOUT
  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PGU| PGD
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | '  | ¡  |   BCKS  | DEL
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | `  | +  |         | HOM
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | Ñ  | ´  | Ç  |   ENTER | END
  LSI| (<)| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | -  |   RSHIF | UP | FNL
  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG
*/

#define LAYOUT_seventy_ansi( \
  K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,   K09, K0A, K0B, K0C, K0D, K0E, K0F, \
  K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,   K19, K1A, K1B, K1C,    K1D,   K1E, \
  K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,   K29, K2A, K2B, K2C,           K2D, \
  K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,   K39, K3A, K3B, K3C,      K3D, K3E, \
  K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,   K49, K4A, K4B,      K4C, K4D, K4E, \
  K50, K51, K52,                      K53,               K54, K55, K56, K57, K58, K59 \
) { \
  { K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,  K09, K0A, K0B, K0C, K0D, K0F }, \
  { K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,  K19, K1A, K1B, K1C, K0E, K1E }, \
  { K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,  K29, K2A, K2B, K2C, K1D, K2D }, \
  { K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,  K39, K3A, K3B, K3C, K3D, K3E }, \
  { K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,  K49, K4A, K4B, K4C, K4D, K4E }, \
  { K50, K51, K52, KC_NO, KC_NO, KC_NO, K53, KC_NO, KC_NO,K54, K55, K56, K57, K58, K59 } \
}

/*  ISO LAYOUT
  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PGU| PGD
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | '  | ¡  |   BCKS  | DEL
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | `  | +  |         | HOM
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | Ñ  | ´  | Ç  |   ENTER | END
  LSI| <  | Z  | X  | C  | V  | B  | N  | M  | ,  | .  | -  |   RSHIF | UP | FNL
  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG
*/

#define LAYOUT_seventy_iso( \
  K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,   K09, K0A, K0B, K0C, K0D, K0E, K0F, \
  K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,   K19, K1A, K1B, K1C,    K1D,   K1E, \
  K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,   K29, K2A, K2B, K2C,           K2D, \
  K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,   K39, K3A, K3B, K3C,      K3D, K3E, \
  K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,   K49, K4A, K4B,      K4C, K4D, K4E, \
  K50, K51, K52,                      K53,               K54, K55, K56, K57, K58, K59 \
) { \
  { K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,  K09, K0A, K0B, K0C, K0D, K0F }, \
  { K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,  K19, K1A, K1B, K1C, K0E, K1E }, \
  { K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,  K29, K2A, K2B, K2C, K1D, K2D }, \
  { K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,  K39, K3A, K3B, K3C, K3D, K3E }, \
  { K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,  K49, K4A, K4B, K4C, K4D, K4E }, \
  { K50, K51, K52, KC_NO, KC_NO, KC_NO, K53, KC_NO, KC_NO,K54, K55, K56, K57, K58, K59 } \
}

#define LAYOUT_m122( \
		     K79, K69, K6A, K59, K49, K4A, K39, K29, K2A, K19, K09, K0A, \
		     K7A, K7B, K6B, K5A, K5B, K4B, K3A, K3B, K2B, K1A, K1B, K0B, \
    K41, K42,   K44, K54, K55, K56, K57, K47, K48, K58, K5C, K5D, K5E, K4E, K4C, K43, K4F,    K4G, K4H, K5G, 	K5F, K5H, K5I, K50, \
    K51, K31,   K32, K34, K35, K36, K37, K27, K28, K38, K3C, K3D, K3E, K2E, K2C, K2F,         K6G, K2G, K3G, 	K3F, K3H, K3I, K30, \
    K21, K22,   K12, K64, K65, K66, K67, K77, K78, K68, K6C, K6D, K6E, K7E, K1E, K1F,              K7G,		    K6F, K6H, K6I, K60, \
    K61, K62,   K03, K04, K14, K15, K16, K17, K07, K08, K18, K1C, K1D, K0E, K0D, K13,         K10, K7J, K6J,	K11, K1H, K1I, K0J, \
    K72, K71,   K70,      K00,                  K01,                   K73,      K02,              K7F,         K0F, K0H, K0I, K1J  \
) { \
    { K00,   K01, K02,   K03,   K04,   KC_NO, KC_NO, K07, K08, K09, K0A, K0B, KC_NO, KC_NO, K0E, K0F, KC_NO, K0H,   K0I,   K0J }, \
    { K10,   K11, K12,   K13,   K14,   K15,   K16,   K17, K18, K19, K1A, K1B, K1C,   K1D,   K1E, K1F, KC_NO, K1H,   K1I,   K1J }, \
    { KC_NO, K21, K22,   KC_NO, KC_NO, KC_NO, KC_NO, K27, K28, K29, K2A, K2B, K2C,   KC_NO, K2E, K2F, K2G,   KC_NO, KC_NO, KC_NO }, \
    { K30,   K31, K32,   KC_NO, K34,   K35,   K36,   K37, K38, K39, K3A, K3B, K3C,   K3D,   K3E, K3F, K3G,   K3H,   K3I,   KC_NO }, \
    { KC_NO, K41, K42,   K43,   K44,   KC_NO, KC_NO, K47, K48, K49, K4A, K4B, K4C,   KC_NO, K4E, K4F, K4G,   K4H,   KC_NO, KC_NO }, \
    { K50,   K51, KC_NO, KC_NO, K54,   K55,   K56,   K57, K58, K59, K5A, K5B, K5C,   K5D,   K5E, K5F, K5G,   K5H,   K5I,   KC_NO },  \
    { K60,   K61, K62,   KC_NO, K64,   K65,   K66,   K67, K68, K69, K6A, K6B, K6C,   K6D,   K6E, K6F, K6G,   K6H,   K6I,   K6J },  \
    { K70,   K71, K72,   K73,   KC_NO, KC_NO, KC_NO, K77, K78, K79, K7A, K7B, KC_NO, KC_NO, K7E, K7F, K7G,   KC_NO, KC_NO, K7J }  \
}
