/*
 Name:		ArduinoEsploraSerialCommunication.ino
 Created:	6/6/2018 10:54:11 AM
 Author:		George Vasilchenko
*/

#include "utils.h"
#include "sensors.h"

#define DELAY_MS 50
#define BAUD_RATE 9600

char separator = ';';
String message = "";

void setup() {
	Serial.begin(BAUD_RATE);
}

void loop() {

	// compose
	// slider [order - 0]
	message += convert_int_to_string(read_slider());
	message += separator;

	// light sensor [order - 1]
	message += convert_int_to_string(read_light_sensor());
	message += separator;

	// temperature [order - 2]
	message += convert_int_to_string(read_temp());
	message += separator;

	// microphone [order - 3]
	message += convert_int_to_string(read_microphone());
	message += separator;

	// joystick switch [order - 4]
	message += convert_int_to_string(read_joystic_switch());
	message += separator;

	// joystick button [order - 5]
	message += convert_int_to_string(read_joystic_button());
	message += separator;

	// accelerometer X [order - 6]
	message += convert_int_to_string(read_accelerometer(0U));
	message += separator;

	// accelerometer Y [order - 7]
	message += convert_int_to_string(read_accelerometer(1U));
	message += separator;

	// accelerometer Z [order - 8]
	message += convert_int_to_string(read_accelerometer(2U));
	message += separator;

	Serial.println(message.c_str());

	// delay
	delay(DELAY_MS);

	// cleanup
	message = "";
}