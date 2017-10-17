#include <Arduboy.h>
Arduboy arduboy;

void setup() {
	// put your setup code here, to run once:
	arduboy.begin();
	arduboy.clear();
	arduboy.print("Hello, World!");
	arduboy.display();
}

void loop() {
	// put your main code here, to run repeatedly:
}
