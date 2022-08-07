#include "main.h"
#include <stdlib.h>

/**
 * printf_bin - does binary conversion
 * @b: digit to convert
 *
 * Return: No. of digits printed
 */
int printf_bin(va_list b)
{
	unsigned int dig, count = 1, len = 0, temp, x;

	dig = va_arg(b ,unsigned int);
	temp = dig;

	while (temp > 1)
	{
		temp = temp / 2;
		count = count * 2;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 2;
		_putchar('0' + x);
		len++;
	}
	return (len);
}
