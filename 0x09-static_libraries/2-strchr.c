#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String to be tested
 * @c: Occurrence of the character
 * Return: Occurrence
 */

char *_strchr(char *s, char c)

{
	for ( ; ; s++)
	{

		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return ('\0');
		}

	}
	return (s);
}
