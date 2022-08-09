#include "main.h"

/**
 * printf_int - prints an int
 * @inT: int to print
 * @flags: flags
 *
 * Return: 1
 */
int printf_int(va_list inT, char flags[])
{
	int i;
	char l = '$';

	for (i = 0; flags[i] != '$'; i++)
		if (flags[i] == 'h' || flags[i] == 'l')
			l = flags[i];
	if (l == 'h')
		return (short_i(inT));
	else
		return (long_i(inT));
}

/**
 * short_i - to use for short flags
 * @t: int to rpint
 * Return: length
 */
int short_i(va_list t)
{
	int dig, count = 1, len = 0, temp, x;

	dig = va_arg(t, int);
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


/**
 * long_i - to use for short flags
 * @t: int to rpint
 * Return: length
 */
int long_i(va_list t)
{
	long int dig, count = 1, len = 0, temp, x;

	dig = va_arg(t, long int);
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
