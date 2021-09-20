#include "main.h"
/**
 * _strstr - check the code for Holberton School students.
 *@haystack:do something
 *@needle:do something more
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
		{
			return (Begin);
		}
		haystack = Begin + 1;
	}
	return (0);
}
