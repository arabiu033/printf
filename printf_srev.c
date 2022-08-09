#include "main.h"

/**
 * printf_srev - reverses the contents of an array
 * @r: string to be reversed
 * @flags: flags
 *
 * Return: number of characters printed
 */
int printf_srev(va_list r, char flags[])
{
	int i, n = 0;
	char *str;

	for (; !flags[0];)
		;

	str = va_arg(r, char *);
	if (!str)
		str = "(llun)";
	for (i = 0; str[i]; i++)
		n++;
	for (i = n - 1; i >= 0; i--)
		_putchar(str[i]);

	return (n);
}
