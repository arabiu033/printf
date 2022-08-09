#include "main.h"

/**
 * printf_srev - reverses the contents of an array
 * @r: string to be reversed
 *
 * Return: number of characters printed
 */
int printf_srev(va_list r, char flags[], int n)
{
	int i, x = 0;
	char *str;

	for (; !flags[0];)
		;

	if (!n)
		str = va_arg(r, char *);
	if (!str)
		str = "(llun)";
	for (i = 0; str[i]; i++)
		x++;
	for (i = x - 1; i >= 0; i--)
		_putchar(str[i]);

	return (x);
}
