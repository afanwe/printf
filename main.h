#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>



/**
 * struct format - match conversion specifiers for printf func
 * @id: type char pointer of specifier
 * @f: type pointer to funct for conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _reverse_str(va_list arg_list);
int rot13(va_list arg_list);
int _strlen(char *s);
int _putchar(char c);
int _puts(char *str);
int num_printer(int num);
int _printf(const char *format, ...);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_int(va_list args);
int printf_dec(va_list args);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);

#endif
