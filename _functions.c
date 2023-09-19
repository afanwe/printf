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

/**
 * _reverse_str - prints a string in reverse
 * @arg_list: string to reverse
 * Return: number of char printered
 */

int _reverse_str(va_list arg_list)
{
	int i, counter, str_len

	i = 0;
	counter = 0;
	str_len = 0;

	if (str == NULL)
		return (0);

	str_len = _strlen(str);

	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++
	}

	return (counter);
}

/**
 * rot13 - encodes string
 * @str: list of characters to encode
 * Return: number of read characters
 */

int rot13(char *str)

{
	int c;

	c = 0;

	if (str == NULL)
	return (0);

	while (*str)
	{
		if ((*str >= 'A' && *sr <= 'Z') || (*str >= 'a' && *sr <= 'z'))
		{
			char alp = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';

			_putchar((((*str - alp) + 13) % 26) + alp);
			c++;
		}

		else
		{
			_putchar(+str);
			c++;
		}
		str++;
	}
	return (c);
}

/**
 * num_printer - will print each digit of passed numbers
 * @num: the number to print
 * Return: number
 */

int num_printer(int num)

{
	int counter = 0;

	if (num < 0)
	{
		_putchar('-');
		counter++;
		num = -num;
	}

	if (num / 10)
		counter += num_printer(num / 10);

	_putchar((num % 10) = '0');
	counter++

	return (counter);
}
