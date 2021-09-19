#include "main.h"
/**
 * _strpbrk - check the code for Holberton School students.
 *@s:character
 *@accept:character
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}

	}
	return (0);
}
