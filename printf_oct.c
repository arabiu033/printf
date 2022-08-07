#include "main.h"

/**
 * printf_oct - prints an int in octal form
 * @ocT: int to print
 *
 * Return: length of the number printed
 */
int printf_oct(va_list ocT)
{
	unsigned int dig, count = 1, len = 0, temp, x;

	dig = va_arg(ocT,unsigned int);
	temp = dig;

	while (temp > 7)
	{
		temp = temp / 8;
		count = count * 8;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 8;
		_putchar('0' + x);
		len++;
	}
	return (len);
}