#include "main.h"

/**
 * printf_string - prints a string
 * @s: string to print
 *
 * Return: len of string
 */
int printf_string(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char *);
	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
