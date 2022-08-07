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
	char null[] = "(null)";
	int i, x = 0;

	str = va_arg(s, char *);
	if (str != NULL)
	{
		for (x = 0; str[x]; x++)
		{
			_putchar(str[x]);
		}
	}
	else if (str == NULL)
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
		return (i);
	}
	return (x);
}
