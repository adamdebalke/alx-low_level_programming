/**
* _memset - a function that fills memory with a constant byte
* @s: memory pointer
* @b: constant byte to fill with
* @n: size of the fill
*
* Return: char pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
