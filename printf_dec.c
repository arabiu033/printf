#include "main.h"

/**
 * printf_dec - prints an int
 * @inT: int to print
 * @flags: flags
 *
 * Return: 1
 */
int printf_dec(va_list inT, char flags[])
{
	int i;
	char l = '$';

	for (i = 0; flags[i] != '$'; i++)
		if (flags[i] == 'h' || flags[i] == 'l')
			l = flags[i];
	if (l == 'h')
		return (short_i(inT));
	else
		return (long_i(inT));
}
