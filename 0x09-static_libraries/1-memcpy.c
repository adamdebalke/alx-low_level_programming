#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Copy pointer
 * @src: Pointer to be copied
 * @n: Number of bytes
 * Return: Copy pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		(*(dest + i)) = (*(src + i));
	}
	return (dest);

}
