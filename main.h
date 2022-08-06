#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct specifiers
 * @sp: hold the specifier
 * @f: function to call for the specifier
 */
typedef struct specifiers
{
	char *sp;
	void (*f)();
} sp_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
