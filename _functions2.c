#include "main.h"

/**
 * _binary_print - will print an integer in binary format to stdout
 * @num: integer to print in binary
 * Return: numer of characters printed.
 */

int _binary_print(unsigned int num)

{
	int binary_num[32], counter = 0, i = 0;

	if (num == 0)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (num > 0)
		{
			binary_num[i] = num % 2;
			num = num / 2;
			i++;
		}

		for (i = i - 1; i >= 0; i--)
		{
			_putchar(binary_num[i] + '0');
			counter++;
		}
	}
	return (counter);
}

