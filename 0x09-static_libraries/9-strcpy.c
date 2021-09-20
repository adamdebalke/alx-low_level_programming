#include "main.h"

/**
 * _strcpy - Function that copies a string
 * @dest: copy string
 * @src: string to be copied
 * Return: value the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, c = 0;

	while (1)
	{
		if (src[c] == '\0')
			break;

		c++;
	}

	for (i = 0; i < c; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
