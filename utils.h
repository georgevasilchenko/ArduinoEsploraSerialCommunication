// utils.h

#ifndef _UTILS_h
#define _UTILS_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#endif

inline char* convert_int_to_zero_padded_chars(const int value)
{
	auto* res = static_cast<char*>(malloc(8));
	sprintf(res, "%04d", value);
	return res;
}

inline char* convert_int_to_binary_chars(const int value)
{
	char buffer[16];
	itoa(value, buffer, 10);
	return buffer;
}

/**
 * \brief Converts integer to string
 * \param value
 * \return string value
 */
inline String convert_int_to_string(const int value)
{
	return String(value);
}
