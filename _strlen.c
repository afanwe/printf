#include "main.h"

/**
 * _strlen - computes length of a string excluding null byte
 *
 * @s: pointer to string
 * Return: length of a string
 */

int _strlen(char *s)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
