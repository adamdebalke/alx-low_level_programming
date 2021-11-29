/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: initial length
*
* Return: size of the substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1;
	int i;

	while ((*s != ' ') && (*s != '\0'))
	{
		i = 0;

		while (*(accept + i) != '\0')
		{
			if (*accept == *s)
				count++;

			i++;
		}

		s++;
	}

	return (count);
}
