#include "main.h"

/**
 * printf_int - prints an int
 * @inT: int to print
 *
 * Return: 1
 */
int printf_int(va_list inT, char flags[], int n)
{
	long int dig, count = 1, len = 0, temp, x;
	int i;

	for (i = 0; flags[i] != '$'; i++)
	{
		_putchar(flags[i]);
	}

	if (n == 0)
		dig = va_arg(inT, int);
	else if (n == 1)
		dig = va_arg(inT, int);
	else if (n == 2)
		dig = va_arg(inT, long int);

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
