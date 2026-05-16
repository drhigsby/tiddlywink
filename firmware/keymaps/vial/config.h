#pragma once

/* Number of dynamic keymap layers — max safe for ATmega32U4 with VIAL */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* Unique VIAL keyboard identifier — generated from SHA256 of vial.json */
/* Regenerate with: python3 /path/to/vial-qmk/util/vial_generate_keyboard_uid.py */
#define VIAL_KEYBOARD_UID {0x09, 0x3E, 0x2D, 0x95, 0xEF, 0xED, 0x11, 0x3F}

/* Unlock combo — matrix positions (row, col) of two keys to hold */
/* Using top-left corner keys: 0,0 and 0,9 (Q and the 1.25U key) */
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 9}

/* Reserve 10 combo slots in VIAL */
#define VIAL_COMBO_ENTRIES 10


