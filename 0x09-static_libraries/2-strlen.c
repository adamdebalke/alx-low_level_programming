#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: String to be check
 * Return: Length of a string
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
