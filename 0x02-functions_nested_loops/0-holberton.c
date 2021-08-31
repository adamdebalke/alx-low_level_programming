#include "holberton.h"

/**
 * main - entry point
 *s
 * Return: 0
 */
int main(void)
{
	char *holberton;

	for (holberton = "Holberton"; *holberton != '\0'; ++holberton)
		_putchar(*holberton);
	return (0);
}
