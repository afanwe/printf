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

/**
 * _address_print - prints address in hexadecimal format
 * @p: pointer to print address of
 * Return: number of characters to print
 */

int _address_print(void *p)
{
	char hex[] = "0123456789abcdef";
	int counter = 0;
	uintptr_t addr = (uintptr_t)p;

	_putchar('0');
	_putchar('x');
	counter = counter + 2;

	if (addr == 0)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		int i;
		char hexa[16];

		for (i = 0; addr > 0; i++)
		{
			hexa[i] = hex[addr % 16];
			addr /= 16;
		}

		for (i -= 1; i >= 0; i++)
		{
			_putchar(hexa[i]);
			counter++;
		}
	}
	return (counter);
}

