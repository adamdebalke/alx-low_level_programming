#include "main.h"
#include <stdio.h>
/**
 * *_strncat - check the code for Holberton School students.
 *@dest:destino
 *@src:source
 *@n:integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*dest)
	{
		dest++;
	}
	while (n-- && src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
