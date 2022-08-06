#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

/**
 * struct specifiers
 * @sp: hold the specifier
 * @f: function to call for the specifier
 */
typedef struct specifiers
{
	char *sp;
	void (*f)();
}

int _printf(const char *format, ...);

#endif
