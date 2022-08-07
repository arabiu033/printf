#include "main.h"

/**
 * _printf - produces output according to a format
 * @format:  is a character string. The format string is composed of
 *  zero or more directives
 * Return: int - length of the string
 */
int _printf(const char *format, ...)
{
	sp_t speci = {
		{"%c", printf_char},
		{"%s", printf_string},
		{"%%", printf_37},
		{"%d", printf_int},
		{"%i", printf_int}
	}
}
