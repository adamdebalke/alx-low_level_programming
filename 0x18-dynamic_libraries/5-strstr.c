/**
* _strstr - locates a substring.
* @haystack: string
* @needle: string to be located
*
* Return: char pointer if located, otherwise NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}

		if (!*pneedle)
			return (bhaystack);

		haystack = bhaystack + 1;
	}

	return (0);
}
