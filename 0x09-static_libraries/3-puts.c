#include "main.h"

/**
 * _puts - writes a string to stdout up, not including the null character
 * @str: This is the C string to be written
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		int a;

		a = *str;

		_putchar(a);
		str++;
	}
	_putchar('\n');
}
