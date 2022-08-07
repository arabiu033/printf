#include "main.h"

/**
 * printf_dec - prints an int
 * @d: int to print
 *
 * Return: 1
 */
int printf_dec(va_list d)
{
	long int dig, count = 1, len = 0, temp, x;

	dig = va_arg(d, int);
	temp = dig;
	if (dig < 0)
	{
		_putchar('-');
		dig = dig * -1;
		temp = dig;
		++len;
	}
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
