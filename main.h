#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct specifiers - handles print formats
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
int printf_char(va_list ch);
int printf_string(va_list s);
int printf_int(va_list inT);
int printf_dec(va_list d);
int printf_37(va_list percentage);
int printf_bin(va_list b);
int printf_unsigned(va_list inT);
int printf_oct(va_list ocT);
int printf_hex(va_list heX);
int printf_HEX(va_list heX);
int case_l(int val);
int case_u(int val);
int printf_exclusive_string(va_list str);
int printf_hex_aux(int n);
int printf_pointer(va_list p);
int case_l(int val);
int printf_HEX_aux(int n);
int printf_hex_aux(int a);

#endif
