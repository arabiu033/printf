#include "main.h"

/**
 * printf_char - print a char
 * @c: char to print
 *
 * Return: no. of characters printed
 */
int printf_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
