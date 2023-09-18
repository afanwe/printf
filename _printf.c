#include "main.h"

/**
 * _printf - takes unlimited arguments and returns number of char
 * @format: string to print with formated output
 * @...: all arguments to go with formated string
 * Return: returns number of characters entered
 */

int _printf(const char *format, ...)
{
	char c, *str;
	int count = 0;

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);

					_putchar(c);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);

					while (*str != '\0')
					{
						_putchar(*str);
						str++;
						count++;
					}
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar(*format);
					count = count + 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
