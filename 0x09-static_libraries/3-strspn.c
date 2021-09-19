#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String to be scanned
 * @accept: String containing the characters to match
 * Return: Number of occurrences
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j, k, brk = 0, count = 0;

	for (k = 0; accept[k] != '\0'; k++)
		;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (brk == 1)
			break;

		for (j = 0; j < k; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			if (s[i] != accept[k - 1] && j == k - 1)
			{
				brk++;
				break;
			}
		}
	}

	return (count);
}
