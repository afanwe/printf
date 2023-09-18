#include "main.h"

/**
 * _printf - takes unlimited arguments and returns number of char
 * @format: string to print with formatted output
 * @...: all arguments to go with formated string
 * Return: returns number of characters entered
 */

int _printf(const char *format, ...)
{
	int index = 0, i;
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			index++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				index++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_list, char *);

				index += (strlen(str));
				write(1, str, strlen(str));
			}
			else if (*format == 'c')
			{
				char c = va_arg(arg_list, int);

				write(1, &c, 1);
				index++;
			}
		}
		format++;
	}
	va_end(arg_list);
	return (index);
}
