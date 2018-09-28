
#include "ValveDriverPins.h"

void setup() {
	// start Serial
	Serial.begin(9600);

	// initialize all valve pins as outputs
	for (int v=0; v<NUM_VALVES; v++) {
		pinMode(VALVES[v], OUTPUT);
	}

	// initialize lick pins as inputs
	pinMode(LICK_1, INPUT);
	pinMode(LICK_2, INPUT);

	// initialize IO pins as inputs or outputs as desired...
	// pinMode(IO_1, OUTPUT);
	// pinMode(IO_2, INPUT);
}

void loop () {

	Serial.println("Testing all valves....");
	for (int v=0; v<NUM_VALVES; v++) {
		Serial.print("- Valve ");
		Serial.println(v+1);
		digitalWrite(VALVES[v], HIGH);
		delay(1000);
		digitalWrite(VALVES[v], LOW);
	}
	Serial.println("");

}

