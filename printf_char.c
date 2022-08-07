#include "main.h"

/**
 * printf_char - print a char
 * @ch: char to print
 *
 * Return: no. of characters printed
 */
int printf_char(va_list ch)
{
	_putchar(va_arg(ch, int));
	return (1);
}
