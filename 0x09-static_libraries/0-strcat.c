#include "main.h"
#include <stdio.h>
/**
 * _strcat - Function that concatenates two strings
 * @dest: First string to be concatenated
 * @src: Second string to be concatenated
 * Return: Pointer to the resulting
 */
char *_strcat(char *dest, char *src)
{
	char *a  = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
