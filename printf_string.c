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
	int x;

	str = va_arg(s, char *);
	for (x = 0; str[x]; x++)
		_putchar(str[x]);
	return (++x);
}
