#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct specifiers
 * @sp: hold the specifier
 * @f: function to call for the specifier
 */
typedef struct specifiers
{
	char *sp;
	int (*f)(va_list args);
} sp_t;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list c);
int printf_string(va_list s);
int printf_int(va_list inT);
int printf_37(va_list per);

#endif
