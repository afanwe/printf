#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

int _reverse_str(char *str);
int _address_print(void *p);
int rot13(char *str);
int _strlen(char *s);
int _binary_print(unsigned int num);
int _putchar(char c);
int _puts(char *str);
int num_printer(int num);
int _printf(const char *format, ...);

#endif
