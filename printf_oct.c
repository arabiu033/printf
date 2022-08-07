#include "main.h"

/**
 * printf_int - prints an int in octal form
 * @ocT: int to print
 *
 * Return: length of the number printed
 */
int printf_oct(va_list ocT)
{
	long int dig, count = 1, len = 0, temp, x;

	dig = va_arg(inT, int);
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
