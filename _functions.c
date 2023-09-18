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
	int i;
	int count = 0;
	int str_len = 0;
	char *str = va_arg(arg_list, char *);

	if (!str)
		return (_puts(str));

	str_len = _strlen(str);

	for (i = str_len - 1; i >= 0; i--)
	{
		count += _putchar(str[i]);
	}
	return (count);
}

/**
 * rot13 - encodes string
 * @arg_list: list of characters to encode
 * Return: number of printer char
 */

int rot13(va_list arg_list)
{
	int i, j, str_len;
	char *let = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *dump = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(arg_list, char *), *duplicate;

	if (!str)
		return (_puts(str));

	str_len = _strlen(str);
	duplicate = malloc(sizeof(char) * (str_len + 1));

	if (duplicate == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j])
			{
				duplicate[i] = dump[j];
				break;
			}
			duplicate[i] = str[i];
		}
	}
	duplicate[i] = '\0';
	return (_puts(duplicate));
}
