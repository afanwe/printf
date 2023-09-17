#include "main.h"

/**
 * _putchar - will write char c to stdout
 * @c: char to print
 *
 * Return: On success 1, or -1 if error
 * and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
