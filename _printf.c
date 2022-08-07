#include "main.h"

/**
 * _printf - produces output according to a format
 * @format:  is a character string. The format string is composed of
 *  zero or more directives
 * Return: int - length of the string
 */
int _printf(const char *format, ...)
{
	sp_t speci[] = {
		{"%c", printf_char},
		{"%s", printf_string},
		{"%%", printf_37},
		{"%d", printf_int},
		{"%i", printf_int},
		{"%u", printf_unsigned}
	};
	int i = 0, len = 0, p, sig = 1;
	va_list vars;

	va_start(vars, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		p = 0;
		while (p < 6)
		{
			if (speci[p].sp[0] == format[i] &&
			    speci[p].sp[1] == format[i + 1])
			{
				len += speci[p].f(vars);
				i += 2;
				sig = 0;
				break;
			}

			++p;
		}
		if (sig)
		{
			_putchar(format[i]);
			++len;
			++i;
		}
		sig = 1;
	}
	va_end(vars);
	return (len);
}
