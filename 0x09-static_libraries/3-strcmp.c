#include "main.h"

/**
 * _strcmp - check the code for Holberton School students.
 *@s1:destino
 *@s2:source
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)

	{
		++s1;
		++s2;
	}

	return ((unsigned char)(*s1) - (unsigned char)(*s2));

}
