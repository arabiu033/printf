#include "main.h"

/**
 * printf_37 - prints %
 * @percentage: ascii 37
 *
 * Return: 1
 */
int printf_37(va_list percentage __attribute__((unused)), char flags[], int n)
{
	if (n == 0)
	{
		for (; !flags[0];)
		;
	}
	_putchar(37);
	return (1);
}
