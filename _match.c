#include "main.h"

/**
 * _specifier_match - matches a specifier to its function
 * @spec: specifier to be matched
 * @arg_list: argument pointer that holds the value to be printed
 * Return: -1 if spec is not found in arg_list
 */

int _specifier_match(char spec, va_list arg_list)
{
	int i;

	cf_t match[] = {
		{"R", rot13},
		{"r", reverse_string},
		{NULL, NULL},
	};

	for (i = 0; match[i].c; i++)
	{
		if (spec == *(match[i].c))
		{
			return (match[i].ptr(arg_list));
		}
	}
	return (-1);
}
