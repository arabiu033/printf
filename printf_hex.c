#include "main.h"

/**
 * printf_hex - prints an int in octal form
 * @heX: int to print
 *
 * Return: length of the number printed
 */
int printf_hex(va_list heX)
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
		_putchar(case_l(x));
		len++;
	}
	return (len);
}

/**
 * case - determine val fox hexdecima
 * @val: value to use
 * Return: char
 */
int case_l(int val)
{
	switch (val)
	{
	case 10: return ('a');
	case 11: return ('b');
	case 12: return ('c');
	case 13: return ('d');
	case 14: return ('e');
	case 15: return ('f');
	default: return ('0' + val);
	}
}
