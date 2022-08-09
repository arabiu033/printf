#include "main.h"

/**
 * printf_oct - prints an int in octal form
 * @ocT: int to print
 *
 * Return: length of the number printed
 */
int printf_oct(va_list ocT, char flags[], int n)
{
	unsigned long int dig, count = 1, len = 0, temp, x;

	for (; !flags[0];)
		;

	if (n == 0)
		dig = va_arg(ocT, unsigned int);
	else if (n == 1)
		dig = va_arg(ocT, unsigned int);
	else if (n == 2)
		dig = va_arg(ocT, unsigned long int);
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
