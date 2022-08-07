#include "main.h"

/**
 * printf_bin - prints an int in octal form
 * @b: int to print
 *
 * Return: length of the number printed
 */
int printf_bin(va_list b)
{
	unsigned int dig, count = 1, len = 0, temp, x;

	dig = va_arg(b, unsigned int);
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
