#include "main.h"

/**
 * _puts - will print a string to stdout
 * @str: string that will be printed
 *
 * Return: number of characters printed.
 */

int _puts(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _putchar - will write character c to stdout
 * @c: character to print
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
