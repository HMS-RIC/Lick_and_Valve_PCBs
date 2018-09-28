
const uint8_t VALVE_1 = 3;
const uint8_t VALVE_2 = 4;
const uint8_t VALVE_3 = 5;
const uint8_t VALVE_4 = 6;
const uint8_t VALVE_5 = 9;
const uint8_t VALVE_6 = 10;
const uint8_t VALVE_7 = 20;
const uint8_t VALVE_8 = 21;
const int NUM_VALVES = 8;
const uint8_t VALVES[NUM_VALVES] = {VALVE_1, VALVE_2, VALVE_3, VALVE_4, VALVE_5, VALVE_6, VALVE_7, VALVE_8};


const uint8_t IO_1 = 11;
const uint8_t IO_2 = 12;
const uint8_t IO_3 = 14;
const uint8_t IO_4 = 15;
const uint8_t IO_5 = 16;
const uint8_t IO_6 = 17;
const uint8_t IO_7 = 18;
const uint8_t IO_8 = 19;
const int NUM_IO_PINS = 8;
const uint8_t IO_PINS[NUM_IO_PINS] = {IO_1, IO_2, IO_3, IO_4, IO_5, IO_6, IO_7, IO_8};

const uint8_t LICK_1 = 8;
const uint8_t LICK_2 = 7;


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

