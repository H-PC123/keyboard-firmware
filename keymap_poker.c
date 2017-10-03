    #include "keymap_common.h"

    const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		
		KEYMAP(PAUS,  SLCK,	 PSCR,	 F12,	 F11,	 F10,	 F9,	 F8,	 F7,	 F6,	 F5,			 F4,	 F3,	 F2,	 F1,			ESC,\
			   PGUP,  HOME,	 INS,			 BSPC,	 EQL,	 MINS,	 0,		 9,		 8,		 7,		 6,		 5,		 4,		 3,		 2,		 1,		GRV,\
               PGDN,  END,	 DELETE, 		 BSLS,	 RBRC,	 LBRC,	 P,		 O,		 I,		 U,		 Y,		 T,		 R,		 E,		 W,		 Q,		TAB,\
											 ENT,			 QUOT,	 SCLN,	 L,		 K,		 J,		 H,		 G,		 F,		 D,		 S,		 A,		CAPS,\
					  UP,					 LSFT,			 SLSH,	 DOT,	 COMM,	 M,		 N,		 B,		 V,		 C,		 X,		 Z,				RSFT,\
               RGHT,  DOWN,	 LEFT,	 RCTL,	 MENU,			 FN0,	 RALT,							 SPC,					 LALT,			 LGUI,	LCTL),
			   
		/* 1: FN 1 */
		KEYMAP(	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,		TRNS, TRNS, TRNS, TRNS, 	  TRNS, \
				TRNS, TRNS, TRNS, 		TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
				TRNS, TRNS, TRNS, 		TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
										TRNS, 		TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
					  TRNS, 	 		TRNS, 		TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 	  TRNS, \
				VOLU, TRNS, VOLD, TRNS, TRNS, 		TRNS, TRNS, 				  TRNS, 			TRNS, 		TRNS, TRNS ),
		   
    };

    const uint16_t PROGMEM fn_actions[] = {
    };