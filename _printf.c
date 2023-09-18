#include "main.h"

/**
 * _printf - takes unlimited arguments and returns number of char
 * @format: string to print with formated output
 * @...: all arguments to go with formated string
 * Return: returns number of characters entered
 */
int _printf(const char *format, ...)
{
	int count_print = 0;
	va_list args_list;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args_list, format);

	while (*format && format)
	{
		if (*format != '%')
			count_print += _putchar(*format);
		else if (*(format + 1) == 'c')
		{
			count_print += _putchar(va_arg(args_list, int));
			format++;
		}
		else if (*(format + 1) == '%')
		{
			_putchar('%');
			format++;
			count_print++;
		}
		else if (*(format + 1) == 's')
		{
			char *str = va_arg(args_list, char *);

			count_print += _puts(str);
			format++;
		}
		else
		{
			format++;
			count_print += _putchar(*format);
		}
		format++;
	}
	va_end(args_list);
	return (count_print);
}

