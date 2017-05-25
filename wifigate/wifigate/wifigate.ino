/*
 Name:		wifigate.ino
 Created:	5/25/2017 3:42:10 PM
 Author:	Phil
*/

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {

	digitalWrite(LED_BUILTIN, LOW); // turn the LED on (HIGH is the voltage level)
	
}