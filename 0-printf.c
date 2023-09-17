#include  "main.h"

/**
 * printf - takes unlimited arguments and returns number of char
 * @format: string to print with formated output
 * @...: all arguments to go with formated string
 * Return: returns number of characters entered
 */

int _printf(const char *format, ...)
{
	int printed_count = 0, i;

	va_list arg_list;

	va_start(arg_list, format);

	if (format == NULL)
	{
		va_end(arg_list);
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			putchar(format[i]);

		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				putchar(va_arg(arg_list, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				char *str =  va_arg(arg_list, char*);
				unsigned int str_count = 0;

				while (str_count < strlen(str))
				{
					putchar(str[str_count]);
					str_count++;
				}
				printed_count += str_count;
				i++;
			}
			else if (format[i + 1] == '%')
				putchar('%');
		}
		printed_count += 1;
	}
	va_end(arg_list);
	return (printed_count);
}
