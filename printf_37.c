#include "main.h"

/**
 * printf_37 - prints %
 * @per: ascii 37
 *
 * Return: 1
 */
int printf_37(va_list per)
{
	int i = va_arg(per, int);

	_putchar(37);
	return (1);
}
