#include "main.h"

/**
 * printf_unsigned - Returns an unisgined data type.
 * @inT: unsigned int to print
 *
 * Return: length of printed int
 */
int printf_unsigned(va_list inT, char flags[], int n)
{
	unsigned long int dig, count = 1, len = 0, temp, x, i;

	if (n == 0)
		dig = va_arg(inT, unsigned int);
	else if (n == 1)
		dig = va_arg(inT, unsigned int);
	else if (n == 2)
		dig = va_arg(inT, unsigned long int);

	temp = dig;

	for (i = 0; flags[i] != '$'; i++)
		_putchar(flags[i]);

	while (temp > 9)
	{
		temp = temp / 10;
		count = count * 10;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 10;
		_putchar('0' + x);
		len++;
	}
	return (len);
}
