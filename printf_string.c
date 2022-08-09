#include "main.h"

/**
 * printf_string - prints a string
 * @s: string to print
 *
 * Return: len of string
 */
int printf_string(va_list s, char flags[], int n)
{
	char *str;
	int i = 0;

	for (; !flags[0];)
		;

	if (!n)
		str = va_arg(s, char *);
	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
