#include <AVM_Blinking_LED.h>
#include "Arduino.h"

void setup_AVM_Blink() {
pinMode(LED_BUILTIN, OUTPUT);
}

void AVM_Blink(int durata) {
digitalWrite(LED_BUILTIN, HIGH);
delay(durata);
digitalWrite(LED_BUILTIN, LOW);
delay(durata);
}
/*
void AVM_Blink_Morse(char x)
{
	switch(x)
	{
		case 'A';
		AVM_Blink(250);
		delay(250);
		AVM_Blink(1000);
		delay(250);
		break;
	}
}
*/