#include "main.h"
/**
 * _islower - Function that checks for lowercase
 *
 * @c: The number to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{

	int m;

	if (c >= 'a' && c <= 'z')
	{
		m = 1;
	}
	else
	{
		m = 0;
	}

	return (m);

}
