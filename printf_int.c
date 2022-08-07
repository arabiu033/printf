#include "main.h"

/**
 * printf_int - prints an int
 * @inT: int to print
 *
 * Return: 1
 */
int printf_int(va_list inT)
{
	int dig, count = 1, n = 0, temp, x;

	dig = va_arg(inT, int);
	temp = dig;
	if (dig < 0)
	{
		_putchar('-');
		dig = dig * -1;
		temp = dig;
		++n;
	}
	while (temp > 9)
	{
		temp = temp / 10;
		count = count * 10;
	}
	while (count != 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 10;
		_putchar('0' + x);
		n++;
	}
	return (n);
}