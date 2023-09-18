#include "main.h"

/**
 * _puts - will print a string to stdout
 * @str: string that will be printed
 *
 * Return: number of characters printed.
 */

int _puts(char *str)
{
	int count = 0;
	
	if (!str)
		return(0);

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

/**
 * _puchar - will write character c to stdout
 * @c: character to print
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
