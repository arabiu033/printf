#include "main.h"

/**
 * printf_HEX - prints an int in octal form
 * @heX: int to print
 *
 * Return: length of the number printed
 */
int printf_HEX(va_list heX)
{
	unsigned int dig, count = 1, len = 0, temp, x;

	dig = va_arg(heX, unsigned int);
	temp = dig;

	while (temp > 15)
	{
		temp = temp / 16;
		count = count * 16;
	}
	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 16;
		_putchar(case_u(x));
		len++;
	}
	return (len);
}

/**
 * case_u - determine val fox hexdecima
 * @val: value to use
 * Return: char
 */
int case_u(int val)
{
	switch (val)
	{
	case 10: return ('A');
	case 11: return ('B');
	case 12: return ('C');
	case 13: return ('D');
	case 14: return ('E');
	case 15: return ('F');
	default: return ('0' + val);
	}
}