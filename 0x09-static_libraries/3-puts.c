#include "holberton.h"

/**
 * _puts - puts string to stdout
 *
 * @str: string to print to stdout
 *
 * Return: always void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
