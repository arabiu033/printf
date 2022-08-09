#include "main.h"

/**
 * printf_dec - prints an int
 * @d: int to print
 *
 * Return: 1
 */
int printf_dec(va_list d, char flags[], int n)
{
	long int dig, count = 1, len = 0, temp, x;

	for (; !flags[0];)
		;

	if (n == 0)
		dig = va_arg(d, int);
	else if (n == 1)
		dig = va_arg(d, int);
	else if (n == 2)
		dig = va_arg(d, long int);

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
