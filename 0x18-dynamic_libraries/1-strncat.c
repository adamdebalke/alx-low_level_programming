/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character to concatenate
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		; /* Do Nothing */
	}

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
