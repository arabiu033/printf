#include "main.h"

/**
 * printf_hex - prints an int in octal form
 * @p: int to print
 *
 * Return: length of the number printed
 */
int printf_pointer(va_list p)
{
	unsigned long int dig;
	int len = 0;

	dig = va_arg(p, unsigned long int);
	_putchar('0');
	_putchar('x');

	len = printf_hex_aux(dig);
	return (len + 2);
}
