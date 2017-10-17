#include <Arduboy.h>

#include "images.h"

Arduboy arduboy;

void setup() {
	// put your setup code here, to run once:
	arduboy.begin();
	arduboy.clear();
}

void loop() {
	// put your main code here, to run repeatedly:
	arduboy.clear();
	arduboy.setCursor(10, 10);

	if (arduboy.pressed(A_BUTTON) == true) {
		arduboy.print("Hello, A button!");
	} else if (arduboy.pressed(B_BUTTON) == true) {
		arduboy.print("Hello, B button!");
	} else {
		arduboy.print("Hello, World!");
	}

	arduboy.drawBitmap(10, 30, player, 16, 16, WHITE);

	arduboy.display();
}
