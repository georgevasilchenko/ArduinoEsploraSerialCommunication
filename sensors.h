// sensors.h

#ifndef _SENSORS_h
#define _SENSORS_h

#if defined(ARDUINO) && ARDUINO >= 100
#else
#include "WProgram.h"
#endif
#include "Esplora.h"

#endif

/**
 * \brief reads value of Esplora slider sensor
 * \return value of Esplora slider sensor
 */
inline int read_slider()
{
	return Esplora.readSlider();
}

/**
* \brief reads value of Esplora light sensor
* \return value of Esplora light sensor
*/
inline int read_light_sensor()
{
	return Esplora.readLightSensor();
}

/**
 * \brief reads value of Esplora temperature sensor
 * \return value of Esplora temperature sensor
 */
inline int read_temp()
{
	return Esplora.readTemperature(0);
}

/**
* \brief reads value of Esplora microphone
* \return value of Esplora microphone
*/
inline int read_microphone()
{
	return Esplora.readMicrophone();
}

/**
* \brief reads value of Esplora joystick switch
* \return value of Esplora joystick switch
*/
inline int read_joystic_switch()
{
	return Esplora.readJoystickSwitch();
}

/**
* \brief reads value of Esplora joystick button
* \return value of Esplora joystick button
*/
inline int read_joystic_button()
{
	return Esplora.readJoystickButton();
}

/**
* \brief reads value of Esplora accelerometer
* \return value of Esplora accelerometer
*/
inline int read_accelerometer(const byte axis)
{
	return Esplora.readAccelerometer(axis);
}