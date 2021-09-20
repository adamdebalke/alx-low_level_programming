#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character
 *
 * @c: The number to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{

	int m;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		m = 1;
	}
	else
	{
		m = 0;
	}

	return (m);
}
