#include "main.h"

/**
 * printf_pointer - prints an int in octal form
 * @p: int to print
 *
 * Return: length of the number printed
 */
int printf_pointer(va_list p)
{
	unsigned long int dig, count = 1, len = 0, temp, x;

	dig = va_arg(p, unsigned long int);
	temp = dig;
	_putchar('0');
	_putchar('x');

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
 * case_l - determine val fox hexdecima
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
