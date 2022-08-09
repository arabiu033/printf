#include "main.h"

void dummy(void);
/**
 * _printf - produces output according to a format
 * @format:  is a character string. The format string is composed of
 *  zero or more directives
 * Return: int - length of the string
 */
int _printf(const char *format, ...)
{
	sp_t speci[] = {
		{'c', printf_char}, {'s', printf_string}, {'%', printf_37},
		{'d', printf_dec}, {'i', printf_int}, {'b', printf_bin},
		{'u', printf_unsigned}, {'o', printf_oct}, {'x', printf_hex},
		{'X', printf_HEX}, {'S', printf_exclusive_string},
		{'p', printf_pointer}, {'R', printf_rot13}, {'r', printf_srev}
	};
	int i = 0, len = 0, p, sig = 1, y = 0, sig1 = 1, k, x;
	va_list vars;
	char flags[5] = {'$', '$', '$', '$', '$'};

	va_start(vars, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		k = i;
		if (format[i] == '%')
		{
			y = 0;
			while (sig1)
			{

				p = 0;
				x = i + 1;
				while (p < 14)
				{
					if (speci[p].sp == format[x])
					{
						len += speci[p].f(vars, flags);
						i += 2;
						sig = 0;
						sig1 = 0;
						break;
					}
					else if ((format[x] == 'h'
						  || format[x] == 'l')
						 && checker(format[x],
							    flags, y))
					{
						flags[y] = format[x];
						++y;
						++x;
						++i;
						p = -1;
					}

					++p;
				}

				if (sig1 && checker(format[x], flags, y))
				{
					flags[y] = format[x];
					++y;
					++i;
				}
				else if (sig1)
				{
					sig1 = 0;
					i = k;
				}
			}
		}
		if (sig)
		{
			_putchar(format[i]);
			++len;
			++i;
		}
		sig = 1;
		sig1 = 1;
		for (y = 0; y < 5; y++)
			flags[y] = '$';
	}
	va_end(vars);
	return (len);
}

/**
 * dummy - to trick betty
 * Return: void
 */
void dummy(void)
{
}
