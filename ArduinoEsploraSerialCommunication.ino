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

	// button down [order - 9]
	message += convert_int_to_string(read_button(1U));
	message += separator;

	// button left [order - 10]
	message += convert_int_to_string(read_button(2U));
	message += separator;

	// button up [order - 11]
	message += convert_int_to_string(read_button(3U));
	message += separator;

	// button right [order - 12]
	message += convert_int_to_string(read_button(4U));
	message += separator;

	// joystick X [order - 13]
	message += convert_int_to_string(read_joystick_x());
	message += separator;

	// joystick Y [order - 14]
	message += convert_int_to_string(read_joystick_y());
	message += separator;

	// LED red [order - 15]
	message += convert_int_to_string(read_red());
	message += separator;

	// LED green [order - 16]
	message += convert_int_to_string(read_green());
	message += separator;

	// LED blue [order - 17]
	message += convert_int_to_string(read_blue());
	message += separator;

	Serial.println(message.c_str());

	// delay
	delay(DELAY_MS);

	// cleanup
	message = "";
}